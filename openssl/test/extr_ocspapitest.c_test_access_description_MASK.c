
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* location; } ;
typedef TYPE_1__ ACCESS_DESCRIPTION ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(int VAR_0)
{
    ACCESS_DESCRIPTION *VAR_1 = FUNC_1();
    int VAR_2 = 0;

    if (!FUNC_4(VAR_1))
        goto err;

    switch (VAR_0) {
    case 0:
        break;
    case 1:
        if (!FUNC_4(VAR_1->location))
            goto err;
        FUNC_2(VAR_1->location);
        VAR_1->location = ((void*)0);
        break;
    case 2:
        FUNC_2(VAR_1->location);
        VAR_1->location = FUNC_3();
        if (!FUNC_4(VAR_1->location))
            goto err;
        break;
    }
    FUNC_0(VAR_1);
    VAR_2 = 1;
err:
    return VAR_2;
}
