
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int szRefreshRate ;
typedef int szFormat ;
typedef int szColors ;
typedef int szBuffer ;
typedef int WPARAM ;
typedef int VOID ;
struct TYPE_11__ {TYPE_1__* DeskExtInterface; } ;
struct TYPE_10__ {int dmPelsHeight; int dmPelsWidth; } ;
struct TYPE_9__ {int Context; TYPE_2__* (* EnumAllModes ) (int ,int ) ;TYPE_2__* (* GetCurrentMode ) (int ) ;} ;
typedef int TCHAR ;
typedef TYPE_2__* PDEVMODEW ;
typedef TYPE_3__* PDESKDISPLAYADAPTER ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int *,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int *,int,int *,int ,int ,int *,int *) ;
 int VAR_5 ;
 TYPE_2__* FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int ,int ) ;

__attribute__((used)) static VOID
FUNC_8(PDESKDISPLAYADAPTER VAR_6,
                       HWND VAR_7)
{
    TCHAR VAR_8[64], VAR_9[64], VAR_10[64], VAR_11[64];
    PDEVMODEW VAR_12, VAR_13;
    DWORD VAR_14 = 0;
    INT VAR_15;

    if (VAR_6->DeskExtInterface != ((void*)0))
    {
        if (!FUNC_2(VAR_5,
                        VAR_1,
                        VAR_8,
                        sizeof(VAR_8) / sizeof(VAR_8[0])))
        {
            VAR_8[0] = FUNC_4('\0');
        }

        VAR_13 = VAR_6->DeskExtInterface->GetCurrentMode(VAR_6->DeskExtInterface->Context);

        do
        {
            VAR_12 = VAR_6->DeskExtInterface->EnumAllModes(VAR_6->DeskExtInterface->Context,
                                                             VAR_14++);
            if (VAR_12 != ((void*)0))
            {
                FUNC_0(VAR_12,
                                    VAR_10,
                                    sizeof(VAR_10) / sizeof(VAR_10[0]));

                FUNC_1(VAR_12,
                                          VAR_11,
                                          sizeof(VAR_11) / sizeof(VAR_11[0]));

                FUNC_5(VAR_9,
                           sizeof(VAR_9) / sizeof(VAR_9[0]),
                           VAR_8,
                           VAR_12->dmPelsWidth,
                           VAR_12->dmPelsHeight,
                           VAR_10,
                           VAR_11);

                VAR_15 = (INT)FUNC_3(VAR_7,
                                            VAR_0,
                                            VAR_2,
                                            0,
                                            (LPARAM)VAR_9);
                if (VAR_15 >= 0)
                {
                    FUNC_3(VAR_7,
                                       VAR_0,
                                       VAR_4,
                                       (WPARAM)VAR_15,
                                       (LPARAM)VAR_12);

                    if (VAR_12 == VAR_13)
                    {
                        FUNC_3(VAR_7,
                                           VAR_0,
                                           VAR_3,
                                           (WPARAM)VAR_15,
                                           0);
                    }
                }
            }

        } while (VAR_12 != ((void*)0));
    }
}
