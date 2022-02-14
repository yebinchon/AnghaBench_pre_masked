
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; int pszText; int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; int cchTextMax; } ;
typedef TYPE_1__ CBE_ITEMDATA ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__ const*,int,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 (CBE_ITEMDATA const *VAR_1)
{
    FUNC_0("item %p - mask=%08x, pszText=%p, cchTM=%d, iImage=%d\n",
          VAR_1, VAR_1->mask, VAR_1->pszText, VAR_1->cchTextMax, VAR_1->iImage);
    FUNC_0("item %p - iSelectedImage=%d, iOverlay=%d, iIndent=%d, lParam=%08lx\n",
          VAR_1, VAR_1->iSelectedImage, VAR_1->iOverlay, VAR_1->iIndent, VAR_1->lParam);
    if (VAR_1->mask & VAR_0)
        FUNC_0("item %p - pszText=%s\n", VAR_1, FUNC_1(VAR_1->pszText));
}
