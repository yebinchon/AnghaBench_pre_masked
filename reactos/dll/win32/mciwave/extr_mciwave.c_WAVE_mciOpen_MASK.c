
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nUseCount; scalar_t__ hFile; int * lpFileName; int dwStatus; scalar_t__ dwPosition; int wNotifyDeviceID; int * hCallback; scalar_t__ hWave; int fInput; int wOutput; int wInput; } ;
typedef TYPE_1__ WINE_MCIWAVE ;
struct TYPE_8__ {int dwCallback; int lpstrElementName; int wDeviceID; } ;
typedef int MCIDEVICEID ;
typedef int LRESULT ;
typedef TYPE_2__* LPMCI_WAVE_OPEN_PARMSW ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_2 (char*,scalar_t__,...) ;
 int VAR_13 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static LRESULT FUNC_8(MCIDEVICEID VAR_14, DWORD VAR_15, LPMCI_WAVE_OPEN_PARMSW VAR_16)
{
    DWORD VAR_17 = 0;
    WINE_MCIWAVE* VAR_18 = (WINE_MCIWAVE*)FUNC_6(VAR_14);

    FUNC_2("(%04X, %08X, %p)\n", VAR_14, VAR_15, VAR_16);
    if (VAR_16 == ((void*)0)) return VAR_3;
    if (VAR_18 == ((void*)0)) return VAR_2;

    if (VAR_15 & VAR_12)
 return VAR_5;

    if (VAR_18->nUseCount > 0) {



 return VAR_1;
    }

    VAR_18->nUseCount++;

    VAR_18->wInput = VAR_18->wOutput = VAR_13;
    VAR_18->fInput = VAR_0;
    VAR_18->hWave = 0;
    VAR_18->dwStatus = VAR_6;
    VAR_18->hFile = 0;
    VAR_18->lpFileName = ((void*)0);
    VAR_18->hCallback = ((void*)0);
    FUNC_3(VAR_18);

    FUNC_2("wDevID=%04X (lpParams->wDeviceID=%08X)\n", VAR_14, VAR_16->wDeviceID);

    VAR_18->wNotifyDeviceID = VAR_14;

    if (VAR_15 & VAR_10) {
 if (VAR_15 & VAR_11) {



     VAR_17 = VAR_4;
 } else {
            VAR_17 = FUNC_5(VAR_18, VAR_16->lpstrElementName);
 }
    }
    FUNC_2("hFile=%p\n", VAR_18->hFile);

    if (VAR_17 == 0) {
 VAR_18->dwPosition = 0;

 VAR_18->dwStatus = VAR_7;

 if (VAR_15 & VAR_8)
     FUNC_4(VAR_16->dwCallback, VAR_18, VAR_9);
    } else {
 VAR_18->nUseCount--;
 if (VAR_18->hFile != 0)
     FUNC_7(VAR_18->hFile, 0);
 VAR_18->hFile = 0;
 FUNC_1(FUNC_0(), 0, VAR_18->lpFileName);
 VAR_18->lpFileName = ((void*)0);
    }
    return VAR_17;
}
