
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int left; int top; int right; int bottom; } ;
struct TYPE_8__ {int bottom; int top; int left; int right; } ;
struct TYPE_7__ {int top; int bottom; int left; int right; } ;
struct TYPE_9__ {int lRangeMax; int lRangeMin; TYPE_2__ rcThumb; TYPE_1__ rcChannel; } ;
typedef TYPE_3__ TRACKBAR_INFO ;
typedef TYPE_4__ RECT ;
typedef int LONG ;
typedef int HDC ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (TYPE_4__*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3 (const TRACKBAR_INFO *VAR_6, HDC VAR_7, LONG VAR_8, int VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0, VAR_17 = 3;
    int VAR_18;
    RECT VAR_19;

    if (VAR_9 & VAR_2) {
        VAR_18 = (VAR_6->rcThumb.bottom - VAR_6->rcThumb.top)/2;
        FUNC_2(&VAR_19, VAR_6->rcThumb.left - 2, VAR_6->rcChannel.top + VAR_18,
                VAR_6->rcThumb.right + 2, VAR_6->rcChannel.bottom - VAR_18 - 1);
    } else {
        VAR_18 = (VAR_6->rcThumb.right - VAR_6->rcThumb.left)/2;
        FUNC_2(&VAR_19, VAR_6->rcChannel.left + VAR_18, VAR_6->rcThumb.top - 2,
                VAR_6->rcChannel.right - VAR_18 - 1, VAR_6->rcThumb.bottom + 2);
    }

    if (VAR_9 & (VAR_1 | VAR_0)) {
 VAR_10 = VAR_19.left;
 VAR_11 = VAR_19.top;
 VAR_15 = -1;
    } else {
   VAR_10 = VAR_19.right;
   VAR_11 = VAR_19.bottom;
 VAR_15 = 1;
    }

    VAR_14 = VAR_6->lRangeMax - VAR_6->lRangeMin;
    if (VAR_14 <= 0)
      VAR_14 = 1;

    if (VAR_9 & VAR_4) {
   VAR_16 = (VAR_9 & VAR_5) ? -1 : 1;
    } else if (VAR_9 & VAR_3) {
 VAR_17++;
    }

    if (VAR_9 & VAR_2) {
 int VAR_20 = VAR_19.bottom - VAR_19.top;
 VAR_11 = VAR_19.top + (VAR_20*(VAR_8 - VAR_6->lRangeMin))/VAR_14;
    } else {
        int VAR_21 = VAR_19.right - VAR_19.left;
        VAR_10 = VAR_19.left + (VAR_21*(VAR_8 - VAR_6->lRangeMin))/VAR_14;
    }

    VAR_12 = VAR_10;
    VAR_13 = VAR_11;
    FUNC_1(VAR_7, VAR_10, VAR_11, 0);
    if (VAR_9 & VAR_2) VAR_10 += VAR_17 * VAR_15;
    else VAR_11 += VAR_17 * VAR_15;
    FUNC_0(VAR_7, VAR_10, VAR_11);

    if (VAR_9 & VAR_4) {
 if (VAR_9 & VAR_2) {
     VAR_10 -= VAR_15;
 } else {
     VAR_11 -= VAR_15;
 }
 FUNC_1(VAR_7, VAR_10, VAR_11, 0);
 if (VAR_9 & VAR_2) {
     VAR_11 += 2 * VAR_16;
 } else {
     VAR_10 += 2 * VAR_16;
 }

 FUNC_0(VAR_7, VAR_10, VAR_11);
 FUNC_0(VAR_7, VAR_12, VAR_13);
    }
}
