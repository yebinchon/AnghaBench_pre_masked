
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int szFmt ;
typedef int szBuffer ;
typedef int WPARAM ;
typedef int VOID ;
struct TYPE_10__ {int hwndDlg; TYPE_1__* DeskExtInterface; } ;
struct TYPE_9__ {scalar_t__ dmBitsPerPel; scalar_t__ dmPelsWidth; scalar_t__ dmPelsHeight; int dmDisplayFrequency; } ;
struct TYPE_8__ {int Context; TYPE_2__* (* EnumAllModes ) (int ,int ) ;TYPE_2__* (* GetCurrentMode ) (int ) ;} ;
typedef int TCHAR ;
typedef TYPE_2__* PDEVMODEW ;
typedef TYPE_3__* PDESKMONITOR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int *,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (char) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int *,int,int *,int) ;
 int VAR_11 ;
 TYPE_2__* FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int ) ;

__attribute__((used)) static VOID
FUNC_9(PDESKMONITOR VAR_12)
{
    PDEVMODEW VAR_13, VAR_14;
    TCHAR VAR_15[64];
    DWORD VAR_16;
    INT VAR_17;
    BOOL VAR_18 = VAR_4;
    BOOL VAR_19 = VAR_4;


    FUNC_4(VAR_12->hwndDlg,
                       VAR_5,
                       VAR_1,
                       0,
                       0);

    VAR_13 = VAR_12->DeskExtInterface->GetCurrentMode(VAR_12->DeskExtInterface->Context);
    VAR_16 = 0;

    do
    {
        VAR_14 = VAR_12->DeskExtInterface->EnumAllModes(VAR_12->DeskExtInterface->Context,
                                                      VAR_16++);
        if (VAR_14 != ((void*)0) &&
            VAR_14->dmBitsPerPel == VAR_13->dmBitsPerPel &&
            VAR_14->dmPelsWidth == VAR_13->dmPelsWidth &&
            VAR_14->dmPelsHeight == VAR_13->dmPelsHeight)
        {


            if (VAR_14->dmDisplayFrequency <= 1)
            {

                if (VAR_18)
                    continue;

                VAR_18 = VAR_10;

                if (!FUNC_3(VAR_11,
                                VAR_9,
                                VAR_15,
                                sizeof(VAR_15) / sizeof(VAR_15[0])))
                {
                    VAR_15[0] = FUNC_5('\0');
                }
            }
            else
            {
                TCHAR VAR_20[64];

                if (!FUNC_3(VAR_11,
                                VAR_6,
                                VAR_20,
                                sizeof(VAR_20) / sizeof(VAR_20[0])))
                {
                    VAR_20[0] = FUNC_5('\0');
                }

                FUNC_6(VAR_15,
                           sizeof(VAR_15) / sizeof(VAR_15[0]),
                           VAR_20,
                           VAR_14->dmDisplayFrequency);
            }

            VAR_17 = (INT)FUNC_4(VAR_12->hwndDlg,
                                        VAR_5,
                                        VAR_0,
                                        0,
                                        (LPARAM)VAR_15);
            if (VAR_17 >= 0)
            {
                VAR_19 = VAR_10;

                FUNC_4(VAR_12->hwndDlg,
                                   VAR_5,
                                   VAR_3,
                                   (WPARAM)VAR_17,
                                   (LPARAM)VAR_14);

                if (VAR_14->dmDisplayFrequency == VAR_13->dmDisplayFrequency)
                {
                    FUNC_4(VAR_12->hwndDlg,
                                       VAR_5,
                                       VAR_2,
                                       (WPARAM)VAR_17,
                                       0);
                }
            }
        }

    } while (VAR_14 != ((void*)0));

    FUNC_0(FUNC_1(VAR_12->hwndDlg,
                            VAR_7),
                 VAR_19);
    FUNC_0(FUNC_1(VAR_12->hwndDlg,
                            VAR_8),
                 VAR_19);
    FUNC_0(FUNC_1(VAR_12->hwndDlg,
                            VAR_5),
                 VAR_19);

    FUNC_2(VAR_12);
}
