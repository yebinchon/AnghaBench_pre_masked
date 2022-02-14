
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dwStatus; scalar_t__ nUseCount; scalar_t__ hFile; int * lpFileName; int wfxRef; int * lpWaveFormat; } ;
typedef TYPE_1__ WINE_MCIWAVE ;
struct TYPE_9__ {int dwCallback; } ;
typedef int MCIDEVICEID ;
typedef TYPE_2__* LPMCI_GENERIC_PARMS ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ,scalar_t__,TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static DWORD FUNC_7(MCIDEVICEID VAR_6, DWORD VAR_7, LPMCI_GENERIC_PARMS VAR_8)
{
    DWORD VAR_9 = 0;
    WINE_MCIWAVE* VAR_10 = FUNC_3(VAR_6);

    FUNC_2("(%u, %08X, %p);\n", VAR_6, VAR_7, VAR_8);

    if (VAR_10 == ((void*)0)) return VAR_0;

    if (VAR_10->dwStatus != VAR_1) {

 VAR_9 = FUNC_5(VAR_6, VAR_5, VAR_8);
    }

    VAR_10->nUseCount--;

    if (VAR_10->nUseCount == 0) {
 if (VAR_10->hFile != 0) {
     FUNC_6(VAR_10->hFile, 0);
     VAR_10->hFile = 0;
 }
    }

    if (VAR_10->lpWaveFormat != &VAR_10->wfxRef)
 FUNC_1(FUNC_0(), 0, VAR_10->lpWaveFormat);
    VAR_10->lpWaveFormat = &VAR_10->wfxRef;
    FUNC_1(FUNC_0(), 0, VAR_10->lpFileName);
    VAR_10->lpFileName = ((void*)0);

    if ((VAR_7 & VAR_2) && VAR_8) {
 FUNC_4(VAR_8->dwCallback, VAR_10,
     (VAR_9 == 0) ? VAR_4 : VAR_3);
    }

    return 0;
}
