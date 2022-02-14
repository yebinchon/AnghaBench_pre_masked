
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hdc; TYPE_3__* physDev; } ;
typedef TYPE_2__ WINEDC ;
typedef int VOID ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {int (* pDeleteDC ) (TYPE_3__*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*) ;

VOID
FUNC_9(WINEDC* VAR_2)
{

    VAR_2->physDev->funcs->pDeleteDC(VAR_2->physDev);


    if (FUNC_1(VAR_2->hdc) == VAR_0)
    {

        FUNC_0((WINEDC*)FUNC_3(VAR_2->hdc) == VAR_2);
        FUNC_4(VAR_2->hdc, ((void*)0));


        FUNC_7(VAR_2->hdc);
    }
    else if (FUNC_1(VAR_2->hdc) == VAR_1)
    {
        FUNC_2(VAR_2->hdc);
    }


    FUNC_6(FUNC_5(), 0, VAR_2);
}
