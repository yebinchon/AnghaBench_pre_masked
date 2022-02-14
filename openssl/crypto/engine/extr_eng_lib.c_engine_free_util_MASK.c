
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int struct_ref; int ex_data; int (* destroy ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (int*,int*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(ENGINE *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_2 == ((void*)0))
        return 1;
    if (VAR_3)
        FUNC_0(&VAR_2->struct_ref, &VAR_4, VAR_1);
    else
        VAR_4 = --VAR_2->struct_ref;
    FUNC_6(VAR_2, 0, -1);
    if (VAR_4 > 0)
        return 1;
    FUNC_3(VAR_4 < 0);

    FUNC_5(VAR_2);
    FUNC_4(VAR_2);




    if (VAR_2->destroy)
        VAR_2->destroy(VAR_2);
    FUNC_1(VAR_0, VAR_2, &VAR_2->ex_data);
    FUNC_2(VAR_2);
    return 1;
}
