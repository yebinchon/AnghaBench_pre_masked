
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pszUrlJump2; int pszUrlJump1; int pszJump2; int pszJump1; int pszHome; int pszCaption; int pszIndex; int pszToc; int pszFile; int pszType; } ;
struct TYPE_7__ {int fsValidMembers; int cbStruct; void* pszCustomTabs; void* pszUrlJump2; void* pszUrlJump1; void* pszJump2; void* pszJump1; void* pszHome; void* pszCaption; void* pszIndex; void* pszToc; void* pszFile; void* pszType; int curNavType; int cHistory; int tabOrder; int tabpos; int fNotExpanded; int fsToolBarFlags; int paInfoTypes; int nShowState; int iNavWidth; int rcWindowPos; int dwExStyles; int dwStyles; int fsWinProperties; } ;
struct TYPE_8__ {int pszCustomTabs; TYPE_1__ stringsW; TYPE_2__ WinType; } ;
typedef TYPE_2__ HH_WINTYPEW ;
typedef TYPE_3__ HHInfo ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
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
 void* FUNC_1 (void*,int *) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(HH_WINTYPEW *VAR_13, HHInfo *VAR_14, BOOL VAR_15)
{
    DWORD VAR_16 = VAR_13->fsValidMembers & ~(VAR_6|VAR_9
                             |VAR_2|VAR_7|VAR_5
                             |VAR_8|VAR_4|VAR_12
                             |VAR_1|VAR_11|VAR_10
                             |VAR_3|VAR_0);
    HH_WINTYPEW *VAR_17 = &VAR_14->WinType;
    DWORD VAR_18 = VAR_15 ? VAR_13->fsValidMembers : VAR_13->fsValidMembers & ~VAR_17->fsValidMembers;

    if (VAR_16)
        FUNC_0("Unsupported fsValidMembers fields: 0x%x\n", VAR_16);

    VAR_17->fsValidMembers |= VAR_18;
    if (VAR_17->cbStruct == 0)
    {

        VAR_17->cbStruct = sizeof(HH_WINTYPEW);
        VAR_18 = ~0;
    }
    if (VAR_18 & VAR_6) VAR_17->fsWinProperties = VAR_13->fsWinProperties;
    if (VAR_18 & VAR_9) VAR_17->dwStyles = VAR_13->dwStyles;
    if (VAR_18 & VAR_2) VAR_17->dwExStyles = VAR_13->dwExStyles;
    if (VAR_18 & VAR_7) VAR_17->rcWindowPos = VAR_13->rcWindowPos;
    if (VAR_18 & VAR_5) VAR_17->iNavWidth = VAR_13->iNavWidth;
    if (VAR_18 & VAR_8) VAR_17->nShowState = VAR_13->nShowState;
    if (VAR_18 & VAR_4) VAR_17->paInfoTypes = VAR_13->paInfoTypes;
    if (VAR_18 & VAR_12) VAR_17->fsToolBarFlags = VAR_13->fsToolBarFlags;
    if (VAR_18 & VAR_1) VAR_17->fNotExpanded = VAR_13->fNotExpanded;
    if (VAR_18 & VAR_11) VAR_17->tabpos = VAR_13->tabpos;
    if (VAR_18 & VAR_10) FUNC_2(VAR_17->tabOrder, VAR_13->tabOrder, sizeof(VAR_13->tabOrder));
    if (VAR_18 & VAR_3) VAR_17->cHistory = VAR_13->cHistory;
    if (VAR_18 & VAR_0) VAR_17->curNavType = VAR_13->curNavType;






    VAR_17->pszType = FUNC_1(VAR_13->pszType, &VAR_14->stringsW.pszType);
    VAR_17->pszFile = FUNC_1(VAR_13->pszFile, &VAR_14->stringsW.pszFile);
    VAR_17->pszToc = FUNC_1(VAR_13->pszToc, &VAR_14->stringsW.pszToc);
    VAR_17->pszIndex = FUNC_1(VAR_13->pszIndex, &VAR_14->stringsW.pszIndex);
    VAR_17->pszCaption = FUNC_1(VAR_13->pszCaption, &VAR_14->stringsW.pszCaption);
    VAR_17->pszHome = FUNC_1(VAR_13->pszHome, &VAR_14->stringsW.pszHome);
    VAR_17->pszJump1 = FUNC_1(VAR_13->pszJump1, &VAR_14->stringsW.pszJump1);
    VAR_17->pszJump2 = FUNC_1(VAR_13->pszJump2, &VAR_14->stringsW.pszJump2);
    VAR_17->pszUrlJump1 = FUNC_1(VAR_13->pszUrlJump1, &VAR_14->stringsW.pszUrlJump1);
    VAR_17->pszUrlJump2 = FUNC_1(VAR_13->pszUrlJump2, &VAR_14->stringsW.pszUrlJump2);







}
