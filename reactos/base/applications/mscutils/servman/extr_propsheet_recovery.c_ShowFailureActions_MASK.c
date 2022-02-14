
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int szBuffer ;
typedef int WCHAR ;
typedef int VOID ;
struct TYPE_7__ {TYPE_2__* pServiceFailure; } ;
struct TYPE_6__ {int dwResetPeriod; int* lpCommand; TYPE_1__* lpsaActions; int cActions; } ;
struct TYPE_5__ {int Type; int Delay; } ;
typedef int* PWSTR ;
typedef TYPE_3__* PRECOVERYDATA ;
typedef int LPARAM ;
typedef scalar_t__ LONG_PTR ;
typedef int INT ;
typedef int HWND ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 int FUNC_3 (int ,int,int ,int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int) ;
 size_t FUNC_6 (int ,int) ;
 int* FUNC_7 (int*,int) ;
 int FUNC_8 (int *,int*) ;
 int* FUNC_9 (int*,char*) ;
 int FUNC_10 (int *,char*,int) ;

__attribute__((used)) static
VOID
FUNC_11(
    HWND VAR_15,
    PRECOVERYDATA VAR_16)
{
    WCHAR VAR_17[256];
    PWSTR VAR_18, VAR_19;
    INT VAR_20, VAR_21, VAR_22;
    DWORD VAR_23;

    for (VAR_23 = 0; VAR_23 < FUNC_6(VAR_16->pServiceFailure->cActions, 3); VAR_23++)
    {
        VAR_20 = -1;

        switch (VAR_16->pServiceFailure->lpsaActions[VAR_23].Type)
        {
            case 131:
                VAR_20 = 0;
                break;

            case 129:
                VAR_20 = 1;

                FUNC_10(VAR_17, L"%lu", VAR_16->pServiceFailure->lpsaActions[VAR_23].Delay / 60000);
                FUNC_3(VAR_15,
                                    VAR_11,
                                    VAR_14,
                                    0,
                                    (LPARAM)VAR_17);

                for (VAR_21 = VAR_9; VAR_21 <= VAR_10; VAR_21++)
                     FUNC_1(FUNC_2(VAR_15, VAR_21), VAR_13);
                break;

            case 130:
                VAR_20 = 3;

                FUNC_1(FUNC_2(VAR_15, VAR_8), VAR_13);
                break;

            case 128:
                VAR_20 = 2;

                for (VAR_21 = VAR_12; VAR_21 <= VAR_3; VAR_21++)
                    FUNC_1(FUNC_2(VAR_15, VAR_21), VAR_13);
                break;
        }

        if (VAR_20 != -1)
        {
            FUNC_3(VAR_15,
                                VAR_4 + VAR_23,
                                VAR_2,
                                VAR_20,
                                0);
        }
    }

    FUNC_10(VAR_17, L"%lu", VAR_16->pServiceFailure->dwResetPeriod / 86400);
    FUNC_3(VAR_15,
                        VAR_7,
                        VAR_14,
                        0,
                        (LPARAM)VAR_17);

    if (VAR_16->pServiceFailure->lpCommand != ((void*)0))
    {
        FUNC_4(VAR_17, sizeof(VAR_17));

        VAR_18 = VAR_16->pServiceFailure->lpCommand;
        if (*VAR_18 == L'\"')
            VAR_18++;

        VAR_19 = FUNC_7(VAR_18, L'\"');
        if (VAR_19 != ((void*)0))
        {
            VAR_22 = (INT)((LONG_PTR)VAR_19 - (LONG_PTR)VAR_18);
            FUNC_0(VAR_17, VAR_18, VAR_22);
        }
        else
        {
            FUNC_8(VAR_17, VAR_18);
        }

        FUNC_3(VAR_15,
                            VAR_6,
                            VAR_14,
                            0,
                            (LPARAM)VAR_17);

        FUNC_4(VAR_17, sizeof(VAR_17));

        if (VAR_19 != ((void*)0))
        {
            VAR_18 = VAR_19 + 1;
            while (FUNC_5(*VAR_18))
                VAR_18++;

            VAR_19 = FUNC_9(VAR_16->pServiceFailure->lpCommand, L"/fail=%1%");
            if (VAR_19 != ((void*)0))
            {
                while (FUNC_5(*(VAR_19 - 1)))
                    VAR_19--;

                VAR_22 = (INT)((LONG_PTR)VAR_19 - (LONG_PTR)VAR_18);
                FUNC_0(VAR_17, VAR_18, VAR_22);
            }
            else
            {
                FUNC_8(VAR_17, VAR_18);
            }

            FUNC_3(VAR_15,
                                VAR_5,
                                VAR_14,
                                0,
                                (LPARAM)VAR_17);

            VAR_19 = FUNC_9(VAR_16->pServiceFailure->lpCommand, L"/fail=%1%");
            if (VAR_19 != ((void*)0))
            {
                FUNC_3(VAR_15,
                                    VAR_3,
                                    VAR_0,
                                    VAR_1,
                                    0);
            }
        }
    }
}
