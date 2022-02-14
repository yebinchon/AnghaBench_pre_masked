
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ nUseCount; scalar_t__ hFile; int nDivision; int dwStatus; scalar_t__ dwPositionMS; int * lpstrName; int * lpstrCopyright; int * lpstrElementName; int * tracks; scalar_t__ wFormat; scalar_t__ nTracks; int dwMciTimeFormat; int wDevID; int wPort; scalar_t__ hMidi; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
typedef int WCHAR ;
struct TYPE_12__ {int dwCallback; scalar_t__* lpstrElementName; int wDeviceID; } ;
struct TYPE_11__ {scalar_t__ ckid; scalar_t__ fccType; int cksize; int dwDataOffset; } ;
typedef TYPE_2__ MMCKINFO ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef TYPE_3__* LPMCI_OPEN_PARMSW ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
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
 int VAR_13 ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int *,scalar_t__*) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,TYPE_2__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_12 (char,char,char,char) ;
 scalar_t__ FUNC_13 (int ,int *,int) ;
 int FUNC_14 (scalar_t__,int,int ) ;

__attribute__((used)) static DWORD FUNC_15(WINE_MCIMIDI* VAR_19, DWORD VAR_20, LPMCI_OPEN_PARMSW VAR_21)
{
    DWORD VAR_22 = 0;

    FUNC_5("(%d, %08X, %p)\n", VAR_19->wDevID, VAR_20, VAR_21);

    if (VAR_21 == ((void*)0)) return VAR_5;
    if (VAR_20 & VAR_12)
 return VAR_3;

    if (VAR_19->nUseCount > 0) {



 return VAR_1;
    }
    VAR_19->nUseCount++;

    VAR_19->hFile = 0;
    VAR_19->hMidi = 0;
    VAR_19->wPort = VAR_13;
    VAR_19->lpstrElementName = ((void*)0);

    FUNC_5("wDevID=%d (lpParams->wDeviceID=%d)\n", VAR_19->wDevID, VAR_21->wDeviceID);


    if (VAR_20 & VAR_11) {
 FUNC_5("MCI_OPEN_ELEMENT %s!\n", FUNC_7(VAR_21->lpstrElementName));
        if (VAR_21->lpstrElementName && VAR_21->lpstrElementName[0]) {
     VAR_19->hFile = FUNC_13((LPWSTR)VAR_21->lpstrElementName, ((void*)0),
       VAR_14 | VAR_17 | VAR_15);
     if (VAR_19->hFile == 0) {
  FUNC_6("Can't find file %s!\n", FUNC_7(VAR_21->lpstrElementName));
  VAR_19->nUseCount--;
  return VAR_2;
     }
            VAR_19->lpstrElementName = FUNC_1(FUNC_0(), 0,
                                              (FUNC_9(VAR_21->lpstrElementName) + 1) * sizeof(WCHAR));
            FUNC_8(VAR_19->lpstrElementName, VAR_21->lpstrElementName);
 }
    }
    FUNC_5("hFile=%p\n", VAR_19->hFile);

    VAR_19->lpstrCopyright = ((void*)0);
    VAR_19->lpstrName = ((void*)0);

    VAR_19->dwStatus = VAR_7;

    VAR_19->dwMciTimeFormat = VAR_6;

    if (VAR_19->hFile != 0) {
 MMCKINFO VAR_23;
 MMCKINFO VAR_24;
 DWORD VAR_25 = 0;

 if (FUNC_11(VAR_19->hFile, &VAR_23, ((void*)0), 0) != 0) {
     VAR_22 = VAR_4;
 } else {
     FUNC_5("ParentChunk ckid=%.4s fccType=%.4s cksize=%08X\n",
    (LPSTR)&VAR_23.ckid, (LPSTR)&VAR_23.fccType, VAR_23.cksize);

     if (VAR_23.ckid == VAR_0 && VAR_23.fccType == FUNC_12('R', 'M', 'I', 'D')) {
  VAR_24.ckid = FUNC_12('d', 'a', 't', 'a');
  FUNC_14(VAR_19->hFile, VAR_23.dwDataOffset + ((VAR_23.cksize + 1) & ~1), VAR_18);
  if (FUNC_11(VAR_19->hFile, &VAR_24, &VAR_23, VAR_16) == 0) {
      FUNC_5("... is a 'RMID' file\n");
      VAR_25 = VAR_24.dwDataOffset;
  } else {
      VAR_22 = VAR_4;
  }
     }
     if (VAR_22 == 0 && FUNC_4(VAR_19, VAR_25) != 0) {
  FUNC_6("Can't read 'MThd' header\n");
  VAR_22 = VAR_4;
     }
 }
    } else {
 FUNC_5("hFile==0, setting #tracks to 0; is this correct ?\n");
 VAR_19->nTracks = 0;
 VAR_19->wFormat = 0;
 VAR_19->nDivision = 1;
    }
    if (VAR_22 != 0) {
 VAR_19->nUseCount--;
 if (VAR_19->hFile != 0)
     FUNC_10(VAR_19->hFile, 0);
 VAR_19->hFile = 0;
 FUNC_2(FUNC_0(), 0, VAR_19->tracks);
 FUNC_2(FUNC_0(), 0, VAR_19->lpstrElementName);
 FUNC_2(FUNC_0(), 0, VAR_19->lpstrCopyright);
 FUNC_2(FUNC_0(), 0, VAR_19->lpstrName);
    } else {
 VAR_19->dwPositionMS = 0;
 VAR_19->dwStatus = VAR_8;
 if (VAR_20 & VAR_9)
     FUNC_3(VAR_21->dwCallback, VAR_19, VAR_10);
    }
    return VAR_22;
}
