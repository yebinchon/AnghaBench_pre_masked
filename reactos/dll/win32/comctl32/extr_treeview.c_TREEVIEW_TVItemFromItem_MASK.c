
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_9__ {int bNtfUnicode; } ;
struct TYPE_8__ {int * pszText; scalar_t__ cchTextMax; int lParam; int cChildren; int iSelectedImage; int iImage; int state; } ;
struct TYPE_7__ {int mask; int * pszText; scalar_t__ cchTextMax; int lParam; int cChildren; int iSelectedImage; int iImage; scalar_t__ stateMask; int state; TYPE_2__* hItem; } ;
typedef TYPE_1__ TVITEMW ;
typedef TYPE_2__ TREEVIEW_ITEM ;
typedef TYPE_3__ TREEVIEW_INFO ;
typedef int * LPSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int,int *,scalar_t__,int *,int *) ;
 int * FUNC_1 (scalar_t__) ;

__attribute__((used)) static VOID
FUNC_2(const TREEVIEW_INFO *VAR_2, UINT VAR_3, TVITEMW *VAR_4, TREEVIEW_ITEM *VAR_5)
{
    VAR_4->mask = VAR_3;
    VAR_4->hItem = VAR_5;
    VAR_4->state = VAR_5->state;
    VAR_4->stateMask = 0;
    VAR_4->iImage = VAR_5->iImage;
    VAR_4->iSelectedImage = VAR_5->iSelectedImage;
    VAR_4->cChildren = VAR_5->cChildren;
    VAR_4->lParam = VAR_5->lParam;

    if(VAR_3 & VAR_1)
    {
        if (!VAR_2->bNtfUnicode)
        {
            VAR_4->cchTextMax = FUNC_0( VAR_0, 0, VAR_5->pszText, -1, ((void*)0), 0, ((void*)0), ((void*)0) );
            VAR_4->pszText = FUNC_1 (VAR_4->cchTextMax);
            FUNC_0( VAR_0, 0, VAR_5->pszText, -1, (LPSTR)VAR_4->pszText, VAR_4->cchTextMax, 0, 0 );
 }
        else
        {
            VAR_4->cchTextMax = VAR_5->cchTextMax;
            VAR_4->pszText = VAR_5->pszText;
        }
    }
    else
    {
        VAR_4->cchTextMax = 0;
        VAR_4->pszText = ((void*)0);
    }
}
