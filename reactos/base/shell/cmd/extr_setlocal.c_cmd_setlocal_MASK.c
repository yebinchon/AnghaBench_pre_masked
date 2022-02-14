
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* setlocal; } ;
struct TYPE_5__ {int Environment; void* DelayedExpansion; void* EnableExtensions; struct TYPE_5__* Prev; } ;
typedef TYPE_1__ SETLOCAL ;
typedef int LPTSTR ;
typedef int INT ;


 int FUNC_0 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int * FUNC_9 (int ,int*) ;

INT FUNC_10(LPTSTR VAR_6)
{
    SETLOCAL *VAR_7;
    LPTSTR *VAR_8;
    INT VAR_9, VAR_10;


    if (!VAR_4)
        return 0;

    VAR_7 = FUNC_4(sizeof(SETLOCAL));
    if (!VAR_7)
    {
        FUNC_1("Cannot allocate memory for Saved!\n");
        FUNC_7();
        return 1;
    }
    VAR_7->Prev = VAR_4->setlocal;
    VAR_7->EnableExtensions = VAR_3;
    VAR_7->DelayedExpansion = VAR_2;
    VAR_7->Environment = FUNC_0();
    if (!VAR_7->Environment)
    {
        FUNC_7();
        FUNC_5(VAR_7);
        return 1;
    }
    VAR_4->setlocal = VAR_7;

    VAR_5 = 0;

    VAR_8 = FUNC_9(VAR_6, &VAR_9);
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
        if (!FUNC_3(VAR_8[VAR_10], FUNC_2("enableextensions")))

            VAR_3 = VAR_1;
        else if (!FUNC_3(VAR_8[VAR_10], FUNC_2("disableextensions")))

            VAR_3 = VAR_0;
        else if (!FUNC_3(VAR_8[VAR_10], FUNC_2("enabledelayedexpansion")))
            VAR_2 = VAR_1;
        else if (!FUNC_3(VAR_8[VAR_10], FUNC_2("disabledelayedexpansion")))
            VAR_2 = VAR_0;
        else
        {
            FUNC_6(VAR_8[VAR_10]);
            break;
        }
    }
    FUNC_8(VAR_8);

    return VAR_5;
}
