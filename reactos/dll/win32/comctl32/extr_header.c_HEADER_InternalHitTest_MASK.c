
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_16__ {scalar_t__ uNumItem; TYPE_1__* items; int hwndSelf; } ;
struct TYPE_15__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_14__ {int right; int left; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_13__ {TYPE_2__ rect; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int INT ;
typedef TYPE_4__ HEADER_INFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_4__ const*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*,size_t) ;
 size_t FUNC_3 (TYPE_4__ const*,size_t) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__ const) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_6 (const HEADER_INFO *VAR_11, const POINT *VAR_12, UINT *VAR_13, INT *VAR_14)
{
    RECT VAR_15, VAR_16;
    UINT VAR_17;
    INT VAR_18;
    BOOL VAR_19;

    FUNC_0 (VAR_11->hwndSelf, &VAR_15);

    *VAR_13 = 0;
    VAR_19 = VAR_1;
    if (FUNC_4 (&VAR_15, *VAR_12))
    {
 if (VAR_11->uNumItem == 0) {
     *VAR_13 |= VAR_4;
     *VAR_14 = 1;
     FUNC_5("NOWHERE\n");
     return;
 }
 else {

     for (VAR_17 = 0; VAR_17 < VAR_11->uNumItem; VAR_17++) {
  VAR_15 = VAR_11->items[VAR_17].rect;
  VAR_18 = VAR_15.right - VAR_15.left;
  if (VAR_18 == 0) {
      VAR_19 = VAR_10;
      continue;
  }
  if (FUNC_4 (&VAR_15, *VAR_12)) {
      if (VAR_18 <= 2 * VAR_0) {
   *VAR_13 |= VAR_7;
   *VAR_14 = VAR_17;
   FUNC_5("ON HEADER %d\n", VAR_17);
   return;
      }
                    if (FUNC_1(VAR_11, VAR_17) > 0) {
   VAR_16 = VAR_15;
   VAR_16.right = VAR_16.left + VAR_0;
   if (FUNC_4 (&VAR_16, *VAR_12)) {
       if (FUNC_2(VAR_11, FUNC_3(VAR_11, VAR_17)))
       {
    *VAR_13 |= VAR_7;
                                *VAR_14 = VAR_17;
    FUNC_5("ON HEADER %d\n", *VAR_14);
    return;
       }
       if (VAR_19) {
    *VAR_13 |= VAR_6;
                                *VAR_14 = FUNC_3(VAR_11, VAR_17);
    FUNC_5("ON DIVOPEN %d\n", *VAR_14);
    return;
       }
       else {
    *VAR_13 |= VAR_5;
                                *VAR_14 = FUNC_3(VAR_11, VAR_17);
    FUNC_5("ON DIVIDER %d\n", *VAR_14);
    return;
       }
   }
      }
      VAR_16 = VAR_15;
      VAR_16.left = VAR_16.right - VAR_0;
      if (!FUNC_2(VAR_11, VAR_17) && FUNC_4 (&VAR_16, *VAR_12))
      {
   *VAR_13 |= VAR_5;
   *VAR_14 = VAR_17;
   FUNC_5("ON DIVIDER %d\n", *VAR_14);
   return;
      }

      *VAR_13 |= VAR_7;
      *VAR_14 = VAR_17;
      FUNC_5("ON HEADER %d\n", VAR_17);
      return;
  }
     }


     if (!FUNC_2(VAR_11, VAR_11->uNumItem - 1))
     {
  VAR_15 = VAR_11->items[VAR_11->uNumItem-1].rect;
  VAR_15.left = VAR_15.right;
  VAR_15.right += VAR_0;
  if (FUNC_4 (&VAR_15, *VAR_12)) {
      if (VAR_19) {
   *VAR_13 |= VAR_6;
   *VAR_14 = VAR_11->uNumItem - 1;
   FUNC_5("ON DIVOPEN %d\n", *VAR_14);
   return;
      }
      else {
   *VAR_13 |= VAR_5;
   *VAR_14 = VAR_11->uNumItem - 1;
   FUNC_5("ON DIVIDER %d\n", *VAR_14);
   return;
      }
  }
     }

     *VAR_13 |= VAR_4;
     *VAR_14 = 1;
     FUNC_5("NOWHERE\n");
     return;
 }
    }
    else {
 if (VAR_12->x < VAR_15.left) {
    FUNC_5("TO LEFT\n");
    *VAR_13 |= VAR_8;
 }
 else if (VAR_12->x > VAR_15.right) {
     FUNC_5("TO RIGHT\n");
     *VAR_13 |= VAR_9;
 }

 if (VAR_12->y < VAR_15.top) {
     FUNC_5("ABOVE\n");
     *VAR_13 |= VAR_2;
 }
 else if (VAR_12->y > VAR_15.bottom) {
     FUNC_5("BELOW\n");
     *VAR_13 |= VAR_3;
 }
    }

    *VAR_14 = 1;
    FUNC_5("flags=0x%X\n", *VAR_13);
    return;
}
