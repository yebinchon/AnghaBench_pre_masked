
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mask; int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; scalar_t__* pszText; int cchTextMax; int iItem; } ;
struct TYPE_5__ {int mask; int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; scalar_t__ pszText; int iItem; } ;
typedef scalar_t__* LPSTR ;
typedef int COMBOEX_INFO ;
typedef TYPE_1__ COMBOBOXEXITEMW ;
typedef TYPE_2__ COMBOBOXEXITEMA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,scalar_t__,int,scalar_t__*,int ,int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_4 (COMBOEX_INFO *VAR_9, COMBOBOXEXITEMA *VAR_10)
{
    COMBOBOXEXITEMW VAR_11;

    FUNC_1("\n");

    VAR_11.mask = VAR_10->mask;
    VAR_11.iItem = VAR_10->iItem;
    VAR_11.pszText = 0;
    if(!FUNC_0 (VAR_9, &VAR_11)) return VAR_7;

    if (VAR_10->mask & VAR_5)
    {
        if (FUNC_3(VAR_11.pszText) && VAR_10->pszText)
            FUNC_2(VAR_6, 0, VAR_11.pszText, -1,
                                VAR_10->pszText, VAR_10->cchTextMax, ((void*)0), ((void*)0));
        else if (VAR_10->pszText) VAR_10->pszText[0] = 0;
        else VAR_10->pszText = (LPSTR)VAR_11.pszText;
    }

    if (VAR_10->mask & VAR_0)
        VAR_10->iImage = VAR_11.iImage;
    if (VAR_10->mask & VAR_4)
        VAR_10->iSelectedImage = VAR_11.iSelectedImage;
    if (VAR_10->mask & VAR_3)
        VAR_10->iOverlay = VAR_11.iOverlay;
    if (VAR_10->mask & VAR_1)
        VAR_10->iIndent = VAR_11.iIndent;
    if (VAR_10->mask & VAR_2)
        VAR_10->lParam = VAR_11.lParam;

    return VAR_8;
}
