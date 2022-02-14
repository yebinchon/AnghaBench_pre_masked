
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_13__ {size_t x; size_t y; } ;
struct TYPE_14__ {int dwStyle; size_t iMoveItem; size_t xTrackOffset; size_t xOldTrack; int hwndSelf; TYPE_2__* items; void* bTracking; void* bCaptured; TYPE_3__ ptLButtonDown; int bDragging; void* bPressed; } ;
struct TYPE_11__ {size_t right; } ;
struct TYPE_12__ {size_t cxy; TYPE_1__ rect; void* bDown; } ;
typedef TYPE_3__ POINT ;
typedef int LRESULT ;
typedef size_t INT ;
typedef TYPE_4__ HEADER_INFO ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,size_t) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,scalar_t__*,size_t*) ;
 int FUNC_3 (TYPE_4__*,size_t) ;
 int FUNC_4 (TYPE_4__*,int ,size_t,int ,size_t) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,size_t) ;
 void* VAR_8 ;

__attribute__((used)) static LRESULT
FUNC_8 (HEADER_INFO *VAR_9, INT VAR_10, INT VAR_11)
{
    POINT VAR_12;
    UINT VAR_13;
    INT VAR_14;
    HDC VAR_15;

    VAR_12.x = VAR_10;
    VAR_12.y = VAR_11;
    FUNC_2 (VAR_9, &VAR_12, &VAR_13, &VAR_14);

    if ((VAR_9->dwStyle & VAR_3) && (VAR_13 == VAR_7)) {
 FUNC_6 (VAR_9->hwndSelf);
 VAR_9->bCaptured = VAR_8;
 VAR_9->bPressed = VAR_8;
 VAR_9->bDragging = VAR_0;
 VAR_9->iMoveItem = VAR_14;
 VAR_9->ptLButtonDown = VAR_12;

 VAR_9->items[VAR_14].bDown = VAR_8;


 VAR_15 = FUNC_0 (VAR_9->hwndSelf);
 FUNC_3 (VAR_9, VAR_14);
 FUNC_5 (VAR_9->hwndSelf, VAR_15);

 FUNC_7("Pressed item %d.\n", VAR_14);
    }
    else if ((VAR_13 == VAR_5) || (VAR_13 == VAR_6)) {
        INT VAR_16 = VAR_9->items[VAR_14].cxy;
        if (!FUNC_4(VAR_9, VAR_2, VAR_14, VAR_1, VAR_16))
        {
     FUNC_6 (VAR_9->hwndSelf);
     VAR_9->bCaptured = VAR_8;
     VAR_9->bTracking = VAR_8;
     VAR_9->iMoveItem = VAR_14;
     VAR_9->xTrackOffset = VAR_9->items[VAR_14].rect.right - VAR_12.x;

     if (!(VAR_9->dwStyle & VAR_4)) {
  VAR_9->xOldTrack = VAR_9->items[VAR_14].rect.right;
  VAR_15 = FUNC_0 (VAR_9->hwndSelf);
  FUNC_1 (VAR_9, VAR_15, VAR_9->xOldTrack);
  FUNC_5 (VAR_9->hwndSelf, VAR_15);
     }

     FUNC_7("Begin tracking item %d.\n", VAR_14);
 }
    }

    return 0;
}
