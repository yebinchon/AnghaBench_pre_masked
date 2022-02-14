
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; int cchTextMax; scalar_t__* pszText; } ;
struct TYPE_5__ {int mask; int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; int cchTextMax; scalar_t__* pszText; } ;
typedef TYPE_1__ COMBOBOXEXITEMW ;
typedef TYPE_2__ CBE_ITEMDATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_2 (const CBE_ITEMDATA *VAR_6, COMBOBOXEXITEMW *VAR_7)
{
    if (VAR_7->mask & VAR_5) {



        if (VAR_7->pszText) {
     if (FUNC_0(VAR_6->pszText))
                FUNC_1(VAR_7->pszText, VAR_6->pszText, VAR_7->cchTextMax);
     else
  VAR_7->pszText[0] = 0;
        } else {
            VAR_7->pszText = VAR_6->pszText;
            VAR_7->cchTextMax = VAR_6->cchTextMax;
        }
    }
    if (VAR_7->mask & VAR_0)
 VAR_7->iImage = VAR_6->iImage;
    if (VAR_7->mask & VAR_4)
 VAR_7->iSelectedImage = VAR_6->iSelectedImage;
    if (VAR_7->mask & VAR_3)
 VAR_7->iOverlay = VAR_6->iOverlay;
    if (VAR_7->mask & VAR_1)
 VAR_7->iIndent = VAR_6->iIndent;
    if (VAR_7->mask & VAR_2)
 VAR_7->lParam = VAR_6->lParam;
}
