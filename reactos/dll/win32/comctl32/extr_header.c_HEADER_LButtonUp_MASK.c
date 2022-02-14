
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_22__ {int left; } ;
struct TYPE_21__ {size_t iMoveItem; int iHotDivider; int uNumItem; int dwStyle; int xTrackOffset; void* bCaptured; int hwndSelf; TYPE_2__* items; int xOldTrack; void* bTracking; void* bPressed; void* bDragging; void* bRectsValid; } ;
struct TYPE_20__ {int iOrder; int cxy; TYPE_4__ rect; void* bDown; } ;
struct TYPE_19__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int LRESULT ;
typedef int INT ;
typedef TYPE_2__ HEADER_ITEM ;
typedef TYPE_3__ HEADER_INFO ;
typedef int HDC ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_3__*,size_t,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int *,int*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,size_t) ;
 int FUNC_7 (TYPE_3__*,int ,size_t,int *) ;
 int FUNC_8 (TYPE_3__*,int ,size_t,int ,int) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,void*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,TYPE_4__*,void*) ;
 int VAR_10 ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*,size_t) ;
 void* VAR_11 ;

__attribute__((used)) static LRESULT
FUNC_18 (HEADER_INFO *VAR_12, INT VAR_13, INT VAR_14)
{
    POINT VAR_15;
    UINT VAR_16;
    INT VAR_17;
    HDC VAR_18;

    VAR_15.x = VAR_13;
    VAR_15.y = VAR_14;
    FUNC_4 (VAR_12, &VAR_15, &VAR_16, &VAR_17);

    if (VAR_12->bPressed) {

 VAR_12->items[VAR_12->iMoveItem].bDown = VAR_0;

 if (VAR_12->bDragging)
 {
            HEADER_ITEM *VAR_19 = &VAR_12->items[VAR_12->iMoveItem];
            INT VAR_20;

     FUNC_12(VAR_0);
     FUNC_13();

            if (VAR_12->iHotDivider == -1)
                VAR_20 = -1;
            else if (VAR_12->iHotDivider == VAR_12->uNumItem)
                VAR_20 = VAR_12->uNumItem-1;
            else
     {
                VAR_20 = FUNC_3(VAR_12, VAR_12->iHotDivider);
                if (VAR_20 > VAR_19->iOrder)
                    VAR_20--;
            }

            if (VAR_20 != -1 &&
                !FUNC_8(VAR_12, VAR_3, VAR_12->iMoveItem, VAR_1, VAR_20))
            {
                FUNC_1(VAR_12, VAR_12->iMoveItem, VAR_20);
  VAR_12->bRectsValid = VAR_0;
  FUNC_14(VAR_12->hwndSelf, ((void*)0), VAR_0);
     }
     else
  FUNC_14(VAR_12->hwndSelf, &VAR_12->items[VAR_12->iMoveItem].rect, VAR_0);

            VAR_12->bDragging = VAR_0;
            FUNC_10(VAR_12, VAR_0, -1);
 }
 else
 {
     VAR_18 = FUNC_0 (VAR_12->hwndSelf);
     FUNC_6 (VAR_12, VAR_12->iMoveItem);
     FUNC_16 (VAR_12->hwndSelf, VAR_18);

     if (!(VAR_12->dwStyle & VAR_8) || !FUNC_5(VAR_12, &VAR_15))
  FUNC_7(VAR_12, VAR_7, VAR_12->iMoveItem, ((void*)0));
 }

 FUNC_17("Released item %d.\n", VAR_12->iMoveItem);
 VAR_12->bPressed = VAR_0;
    }
    else if (VAR_12->bTracking) {
        INT VAR_21 = VAR_15.x - VAR_12->items[VAR_12->iMoveItem].rect.left + VAR_12->xTrackOffset;
        if (VAR_21 < 0)
     VAR_21 = 0;
 FUNC_17("End tracking item %d.\n", VAR_12->iMoveItem);
 VAR_12->bTracking = VAR_0;

        FUNC_8(VAR_12, VAR_4, VAR_12->iMoveItem, VAR_2, VAR_21);

        if (!(VAR_12->dwStyle & VAR_9)) {
     VAR_18 = FUNC_0 (VAR_12->hwndSelf);
     FUNC_2 (VAR_12, VAR_18, VAR_12->xOldTrack);
            FUNC_16 (VAR_12->hwndSelf, VAR_18);
        }

        if (!FUNC_8(VAR_12, VAR_6, VAR_12->iMoveItem, VAR_2, VAR_21))
        {
            VAR_12->items[VAR_12->iMoveItem].cxy = VAR_21;
            FUNC_8(VAR_12, VAR_5, VAR_12->iMoveItem, VAR_2, VAR_21);
        }

 FUNC_11 (VAR_12);
 FUNC_14(VAR_12->hwndSelf, ((void*)0), VAR_11);
    }

    if (VAR_12->bCaptured) {
 VAR_12->bCaptured = VAR_0;
 FUNC_15 ();
 FUNC_9 (VAR_12, VAR_10);
    }

    return 0;
}
