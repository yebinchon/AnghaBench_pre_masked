
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* name; int ex_data; } ;
typedef TYPE_1__ UI_METHOD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;

UI_METHOD *FUNC_5(const char *VAR_3)
{
    UI_METHOD *VAR_4 = ((void*)0);

    if ((VAR_4 = FUNC_3(sizeof(*VAR_4))) == ((void*)0)
        || (VAR_4->name = FUNC_2(VAR_3)) == ((void*)0)
        || !FUNC_0(VAR_0, VAR_4,
                               &VAR_4->ex_data)) {
        if (VAR_4)
            FUNC_1(VAR_4->name);
        FUNC_1(VAR_4);
        FUNC_4(VAR_2, VAR_1);
        return ((void*)0);
    }
    return VAR_4;
}
