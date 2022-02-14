
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dwStatus; scalar_t__ nUseCount; scalar_t__ hFile; int lpstrName; int lpstrCopyright; int lpstrElementName; int tracks; scalar_t__ hThread; int wDevID; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
struct TYPE_9__ {int dwCallback; } ;
typedef TYPE_2__* LPMCI_GENERIC_PARMS ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static DWORD FUNC_7(WINE_MCIMIDI* VAR_5, DWORD VAR_6, LPMCI_GENERIC_PARMS VAR_7)
{

    FUNC_5("(%d, %08X, %p);\n", VAR_5->wDevID, VAR_6, VAR_7);

    if (VAR_5->dwStatus != VAR_1) {

 FUNC_4(VAR_5, VAR_4, VAR_7);
    }

    VAR_5->nUseCount--;
    if (VAR_5->nUseCount == 0) {
 if (VAR_5->hFile != 0) {
     FUNC_6(VAR_5->hFile, 0);
     VAR_5->hFile = 0;
     FUNC_5("hFile closed !\n");
 }
 if (VAR_5->hThread) {
     FUNC_0(VAR_5->hThread);
     VAR_5->hThread = 0;
 }
 FUNC_2(FUNC_1(), 0, VAR_5->tracks);
 FUNC_2(FUNC_1(), 0, VAR_5->lpstrElementName);
 FUNC_2(FUNC_1(), 0, VAR_5->lpstrCopyright);
 FUNC_2(FUNC_1(), 0, VAR_5->lpstrName);
    } else {
 FUNC_5("Shouldn't happen... nUseCount=%d\n", VAR_5->nUseCount);
 return VAR_0;
    }

    if ((VAR_6 & VAR_2) && VAR_7) {
 FUNC_3(VAR_7->dwCallback, VAR_5, VAR_3);
    }
    return 0;
}
