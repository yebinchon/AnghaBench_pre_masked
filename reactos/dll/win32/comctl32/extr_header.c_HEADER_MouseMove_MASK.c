
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int tme ;
typedef int UINT ;
struct TYPE_29__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_28__ {int dwStyle; scalar_t__ iHotItem; size_t iMoveItem; scalar_t__ xTrackOffset; scalar_t__ xOldTrack; int hwndSelf; void* bDragging; TYPE_4__* items; scalar_t__ bTracking; scalar_t__ bPressed; scalar_t__ bCaptured; } ;
struct TYPE_27__ {scalar_t__ bDown; TYPE_9__ rect; scalar_t__ cxy; } ;
struct TYPE_26__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_25__ {scalar_t__ left; } ;
struct TYPE_24__ {int cbSize; int hwndTrack; int dwFlags; } ;
typedef TYPE_1__ TRACKMOUSEEVENT ;
typedef scalar_t__ SHORT ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int * HIMAGELIST ;
typedef TYPE_4__ HEADER_ITEM ;
typedef TYPE_5__ HEADER_INFO ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_4 (TYPE_5__*,size_t) ;
 int FUNC_5 (TYPE_5__*,int ,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,TYPE_3__*,int*,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_5__*,scalar_t__) ;
 int FUNC_9 (TYPE_5__*,int ,size_t,int *) ;
 int FUNC_10 (TYPE_5__*,int ,size_t,int ,scalar_t__) ;
 int FUNC_11 (TYPE_5__*,void*,int ) ;
 int FUNC_12 (TYPE_5__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,scalar_t__,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (int ,TYPE_9__*,scalar_t__) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,scalar_t__,int ,TYPE_2__*,TYPE_2__*,int *,int *,int ) ;
 int VAR_13 ;
 int FUNC_22 (char*,...) ;
 void* VAR_14 ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static LRESULT
FUNC_25 (HEADER_INFO *VAR_15, LPARAM VAR_16)
{
    POINT VAR_17;
    UINT VAR_18;
    INT VAR_19, VAR_20;
    HDC VAR_21;

    BOOL VAR_22 =
        ((VAR_15->dwStyle & VAR_6) && (VAR_15->dwStyle & VAR_9))
        || (FUNC_3 (VAR_15->hwndSelf) != ((void*)0));
    INT VAR_23 = VAR_15->iHotItem;

    VAR_17.x = (INT)(SHORT)FUNC_19(VAR_16);
    VAR_17.y = (INT)(SHORT)FUNC_13(VAR_16);
    FUNC_6 (VAR_15, &VAR_17, &VAR_18, &VAR_19);

    if (VAR_22) {
 if (VAR_18 & (VAR_12 | VAR_10 | VAR_11))
     VAR_15->iHotItem = VAR_19;
 else
     VAR_15->iHotItem = -1;
    }

    if (VAR_15->bCaptured) {

 if (VAR_15->bPressed && !VAR_15->bDragging && (VAR_15->dwStyle & VAR_7)
     && FUNC_7(VAR_15, &VAR_17))
 {
            if (!FUNC_9(VAR_15, VAR_2, VAR_15->iMoveItem, ((void*)0)))
     {
  HIMAGELIST VAR_24 = FUNC_4(VAR_15, VAR_15->iMoveItem);
  if (VAR_24 != ((void*)0))
  {
      HEADER_ITEM *VAR_25 = &VAR_15->items[VAR_15->iMoveItem];
      FUNC_22("Starting item drag\n");
      FUNC_14(VAR_24, 0, VAR_17.x - VAR_25->rect.left, 0);
      FUNC_17(VAR_14);
      FUNC_15(VAR_24);
      VAR_15->bDragging = VAR_14;
  }
     }
 }

 if (VAR_15->bDragging)
 {
     POINT VAR_26;
     VAR_26.x = VAR_17.x;
     VAR_26.y = 0;
     FUNC_0(VAR_15->hwndSelf, &VAR_26);
     FUNC_16(VAR_26.x, VAR_26.y);
     FUNC_11(VAR_15, VAR_14, VAR_16);
 }

 if (VAR_15->bPressed && !VAR_15->bDragging) {
            BOOL VAR_27 = VAR_15->items[VAR_15->iMoveItem].bDown;
     if ((VAR_19 == VAR_15->iMoveItem) && (VAR_18 == VAR_12))
  VAR_15->items[VAR_15->iMoveItem].bDown = VAR_14;
     else
  VAR_15->items[VAR_15->iMoveItem].bDown = VAR_0;
            if (VAR_27 != VAR_15->items[VAR_15->iMoveItem].bDown) {
                VAR_21 = FUNC_2 (VAR_15->hwndSelf);
         FUNC_8 (VAR_15, VAR_15->iMoveItem);
         FUNC_20 (VAR_15->hwndSelf, VAR_21);
            }

     FUNC_22("Moving pressed item %d.\n", VAR_15->iMoveItem);
 }
 else if (VAR_15->bTracking) {
     if (VAR_15->dwStyle & VAR_8) {
                HEADER_ITEM *VAR_28 = &VAR_15->items[VAR_15->iMoveItem];
                VAR_20 = VAR_17.x - VAR_28->rect.left + VAR_15->xTrackOffset;
                if (!FUNC_10(VAR_15, VAR_4, VAR_15->iMoveItem, VAR_1, VAR_20))
  {
                    INT VAR_29 = VAR_28->rect.right - VAR_28->rect.left;
                    RECT VAR_30;
                    RECT VAR_31;

                    if (VAR_20 < 0) VAR_20 = 0;
                    VAR_15->items[VAR_15->iMoveItem].cxy = VAR_20;
                    FUNC_12(VAR_15);

                    FUNC_1(VAR_15->hwndSelf, &VAR_30);
                    VAR_31 = VAR_30;
                    VAR_31.left = VAR_28->rect.left + VAR_29;
                    FUNC_21(VAR_15->hwndSelf, VAR_20 - VAR_29, 0, &VAR_31, &VAR_30, ((void*)0), ((void*)0), 0);
                    FUNC_18(VAR_15->hwndSelf, &VAR_28->rect, VAR_0);
                    FUNC_24(VAR_15->hwndSelf);

                    FUNC_10(VAR_15, VAR_3, VAR_15->iMoveItem, VAR_1, VAR_20);
  }
     }
     else {
                INT VAR_32;
  VAR_21 = FUNC_2 (VAR_15->hwndSelf);
  FUNC_5 (VAR_15, VAR_21, VAR_15->xOldTrack);
  VAR_15->xOldTrack = VAR_17.x + VAR_15->xTrackOffset;
  if (VAR_15->xOldTrack < VAR_15->items[VAR_15->iMoveItem].rect.left)
      VAR_15->xOldTrack = VAR_15->items[VAR_15->iMoveItem].rect.left;
  FUNC_5 (VAR_15, VAR_21, VAR_15->xOldTrack);
  FUNC_20 (VAR_15->hwndSelf, VAR_21);
                VAR_32 = VAR_15->xOldTrack - VAR_15->items[VAR_15->iMoveItem].rect.left;

                FUNC_10(VAR_15, VAR_5, VAR_15->iMoveItem, VAR_1, VAR_32);
     }

     FUNC_22("Tracking item %d.\n", VAR_15->iMoveItem);
 }
    }

    if (VAR_22) {
        TRACKMOUSEEVENT VAR_33;
        if (VAR_23 != VAR_15->iHotItem && !VAR_15->bDragging) {
     VAR_21 = FUNC_2 (VAR_15->hwndSelf);
     if (VAR_23 != -1) FUNC_8 (VAR_15, VAR_23);
     if (VAR_15->iHotItem != -1) FUNC_8 (VAR_15, VAR_15->iHotItem);
     FUNC_20 (VAR_15->hwndSelf, VAR_21);
        }
        VAR_33.cbSize = sizeof( VAR_33 );
        VAR_33.dwFlags = VAR_13;
        VAR_33.hwndTrack = VAR_15->hwndSelf;
        FUNC_23( &VAR_33 );
    }

    return 0;
}
