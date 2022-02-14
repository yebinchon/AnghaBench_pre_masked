
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nUseCount; int fShareable; scalar_t__ handle; int dwTimeFormat; int wNotifyDeviceID; } ;
typedef TYPE_1__ WINE_MCICDAUDIO ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_5__ {int dwCallback; int * lpstrElementName; int wDeviceID; } ;
typedef int MCIDEVICEID ;
typedef TYPE_2__* LPMCI_OPEN_PARMSW ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char*,int ,int ,int *,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 char FUNC_10 (int ) ;

__attribute__((used)) static DWORD FUNC_11(UINT VAR_17, DWORD VAR_18, LPMCI_OPEN_PARMSW VAR_19)
{
    MCIDEVICEID VAR_20;
    DWORD VAR_21;
    WINE_MCICDAUDIO* VAR_22 = (WINE_MCICDAUDIO*)FUNC_9(VAR_17);
    WCHAR VAR_23[7], VAR_24 = 0;

    FUNC_4("(%04X, %08X, %p);\n", VAR_17, VAR_18, VAR_19);

    if (VAR_19 == ((void*)0)) return VAR_9;
    if (VAR_22 == ((void*)0)) return VAR_6;

    VAR_20 = VAR_19->wDeviceID;

    if (VAR_22->nUseCount > 0) {



 if (VAR_22->fShareable && (VAR_18 & VAR_15))
     ++VAR_22->nUseCount;
 else
     return VAR_8;
    } else {
 VAR_22->nUseCount = 1;
 VAR_22->fShareable = VAR_18 & VAR_15;
    }
    if (VAR_18 & VAR_13) {
        if (VAR_18 & VAR_14) {
            FUNC_5("MCI_OPEN_ELEMENT_ID %p! Abort\n", VAR_19->lpstrElementName);
            VAR_21 = VAR_5;
            goto the_error;
        }
        FUNC_4("MCI_OPEN_ELEMENT element name: %s\n", FUNC_6(VAR_19->lpstrElementName));



        if (!FUNC_7(VAR_19->lpstrElementName[0]))
        {
            VAR_21 = VAR_7;
            goto the_error;
        }
        VAR_24 = FUNC_10(VAR_19->lpstrElementName[0]);
        VAR_23[0] = VAR_24; VAR_23[1] = ':'; VAR_23[2] = '\\'; VAR_23[3] = '\0';
        if (FUNC_1(VAR_23) != VAR_0)
        {
            VAR_21 = VAR_7;
            goto the_error;
        }
    }
    else
    {
        VAR_23[0] = 'A'; VAR_23[1] = ':'; VAR_23[2] = '\\'; VAR_23[3] = '\0';
        for ( ; VAR_23[0] <= 'Z'; VAR_23[0]++)
        {
            if (FUNC_1(VAR_23) == VAR_0)
            {
                VAR_24 = VAR_23[0];
                break;
            }
        }
        if (!VAR_24)
        {
            VAR_21 = VAR_4;
            goto the_error;
        }
    }

    VAR_22->wNotifyDeviceID = VAR_20;
    VAR_22->dwTimeFormat = VAR_10;


    VAR_23[0] = VAR_23[1] = '\\'; VAR_23[2] = '.'; VAR_23[3] = '\\'; VAR_23[4] = VAR_24; VAR_23[5] = ':'; VAR_23[6] = '\0';
    VAR_22->handle = FUNC_0(VAR_23, VAR_2, VAR_1, ((void*)0), VAR_16, 0, 0);
    if (VAR_22->handle == VAR_3)
    {
        VAR_21 = VAR_8;
        goto the_error;
    }

    if (VAR_18 & VAR_11) {
 FUNC_8(FUNC_2(FUNC_3(VAR_19->dwCallback)),
   VAR_20, VAR_12);
    }
    return 0;

 the_error:
    --VAR_22->nUseCount;
    return VAR_21;
}
