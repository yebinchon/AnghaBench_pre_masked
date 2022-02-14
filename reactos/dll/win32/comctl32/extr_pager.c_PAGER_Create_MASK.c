
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int style; int hwndParent; } ;
struct TYPE_5__ {int dwStyle; int nButtonSize; int direction; int hwndSelf; void* BRbtnState; void* TLbtnState; void* bCapture; void* bForward; scalar_t__ nHeight; scalar_t__ nWidth; scalar_t__ nPos; scalar_t__ nBorder; int clrBk; int hwndNotify; int * hwndChild; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;
typedef int HWND ;
typedef int DWORD_PTR ;
typedef TYPE_2__ CREATESTRUCTW ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static LRESULT
FUNC_4 (HWND VAR_4, const CREATESTRUCTW *VAR_5)
{
    PAGER_INFO *VAR_6;


    VAR_6 = FUNC_3 (sizeof(*VAR_6));
    if (!VAR_6) return -1;
    FUNC_2 (VAR_4, 0, (DWORD_PTR)VAR_6);


    VAR_6->hwndSelf = VAR_4;
    VAR_6->hwndChild = ((void*)0);
    VAR_6->hwndNotify = VAR_5->hwndParent;
    VAR_6->dwStyle = VAR_5->style;
    VAR_6->clrBk = FUNC_1(VAR_0);
    VAR_6->nBorder = 0;
    VAR_6->nButtonSize = 12;
    VAR_6->nPos = 0;
    VAR_6->nWidth = 0;
    VAR_6->nHeight = 0;
    VAR_6->bForward = VAR_1;
    VAR_6->bCapture = VAR_1;
    VAR_6->TLbtnState = VAR_2;
    VAR_6->BRbtnState = VAR_2;
    VAR_6->direction = -1;

    if (VAR_6->dwStyle & VAR_3)
        FUNC_0("[%p] Drag and Drop style is not implemented yet.\n", VAR_6->hwndSelf);

    return 0;
}
