
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_9__ {int style; int hwndParent; } ;
struct TYPE_8__ {int iHotItem; int iHotDivider; int iMargin; int filter_change_timeout; scalar_t__ nHeight; int hwndNotify; int nNotifyFormat; scalar_t__ himl; scalar_t__ iMoveItem; int dwStyle; void* bTracking; void* bPressed; void* hcurDivopen; void* hcurDivider; void* hcurArrow; void* bRectsValid; scalar_t__ order; scalar_t__ items; scalar_t__ hFont; scalar_t__ uNumItem; scalar_t__ hwndSelf; } ;
struct TYPE_7__ {scalar_t__ tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef int LRESULT ;
typedef int LPWSTR ;
typedef scalar_t__ HWND ;
typedef int HFONT ;
typedef TYPE_2__ HEADER_INFO ;
typedef int HDC ;
typedef int DWORD_PTR ;
typedef TYPE_3__ CREATESTRUCTW ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_11 (int) ;
 int VAR_10 ;

__attribute__((used)) static LRESULT
FUNC_12 (HWND VAR_11, const CREATESTRUCTW *VAR_12)
{
    HEADER_INFO *VAR_13;
    TEXTMETRICW VAR_14;
    HFONT VAR_15;
    HDC VAR_16;

    VAR_13 = FUNC_11 (sizeof(*VAR_13));
    FUNC_10 (VAR_11, 0, (DWORD_PTR)VAR_13);

    VAR_13->hwndSelf = VAR_11;
    VAR_13->hwndNotify = VAR_12->hwndParent;
    VAR_13->uNumItem = 0;
    VAR_13->hFont = 0;
    VAR_13->items = 0;
    VAR_13->order = 0;
    VAR_13->bRectsValid = VAR_1;
    VAR_13->hcurArrow = FUNC_4 (0, (LPWSTR)VAR_2);
    VAR_13->hcurDivider = FUNC_4 (VAR_0, FUNC_5(VAR_3));
    VAR_13->hcurDivopen = FUNC_4 (VAR_0, FUNC_5(VAR_4));
    VAR_13->bPressed = VAR_1;
    VAR_13->bTracking = VAR_1;
    VAR_13->dwStyle = VAR_12->style;
    VAR_13->iMoveItem = 0;
    VAR_13->himl = 0;
    VAR_13->iHotItem = -1;
    VAR_13->iHotDivider = -1;
    VAR_13->iMargin = 3*FUNC_2(VAR_6);
    VAR_13->nNotifyFormat =
 FUNC_9 (VAR_13->hwndNotify, VAR_9, (WPARAM)VAR_11, VAR_5);
    VAR_13->filter_change_timeout = 1000;

    VAR_16 = FUNC_0 (0);
    VAR_15 = FUNC_8 (VAR_16, FUNC_1 (VAR_7));
    FUNC_3 (VAR_16, &VAR_14);
    VAR_13->nHeight = VAR_14.tmHeight + VAR_8;
    FUNC_8 (VAR_16, VAR_15);
    FUNC_7 (0, VAR_16);

    FUNC_6(VAR_11, VAR_10);

    return 0;
}
