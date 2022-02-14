
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__ pszText; int lParam; int iImage; int cchTextMax; int dwStateMask; int dwState; int mask; } ;
typedef TYPE_1__ TCITEMW ;
typedef int LPSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int ,int ,int ,int ,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(const TCITEMW *VAR_1, UINT VAR_2, BOOL VAR_3)
{
    if (FUNC_1(VAR_0)) {
 FUNC_0("external tab %d, mask=0x%08x, dwState=0x%08x, dwStateMask=0x%08x, cchTextMax=0x%08x\n",
       VAR_2, VAR_1->mask, VAR_1->dwState, VAR_1->dwStateMask, VAR_1->cchTextMax);
 FUNC_0("external tab %d,   iImage=%d, lParam=0x%08lx, pszTextW=%s\n",
       VAR_2, VAR_1->iImage, VAR_1->lParam, VAR_3 ? FUNC_3(VAR_1->pszText) : FUNC_2((LPSTR)VAR_1->pszText));
    }
}
