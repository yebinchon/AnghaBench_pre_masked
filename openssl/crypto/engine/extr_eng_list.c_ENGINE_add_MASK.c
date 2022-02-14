
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; int * id; } ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;

int FUNC_4(ENGINE *VAR_5)
{
    int VAR_6 = 1;
    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_3);
        return 0;
    }
    if ((VAR_5->id == ((void*)0)) || (VAR_5->name == ((void*)0))) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    FUNC_1(VAR_4);
    if (!FUNC_3(VAR_5)) {
        FUNC_2(VAR_0, VAR_2);
        VAR_6 = 0;
    }
    FUNC_0(VAR_4);
    return VAR_6;
}
