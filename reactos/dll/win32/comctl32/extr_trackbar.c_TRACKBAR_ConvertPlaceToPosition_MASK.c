
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double bottom; int top; double right; int left; } ;
struct TYPE_5__ {int bottom; int top; int right; int left; } ;
struct TYPE_7__ {double lRangeMax; double lRangeMin; int dwStyle; TYPE_2__ rcChannel; TYPE_1__ rcThumb; } ;
typedef TYPE_3__ TRACKBAR_INFO ;
typedef int LONG ;


 int VAR_0 ;
 int FUNC_0 (char*,double) ;
 int FUNC_1 (double) ;

__attribute__((used)) static inline LONG
FUNC_2 (const TRACKBAR_INFO *VAR_1, int VAR_2)
{
    double VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_3 = VAR_1->lRangeMax - VAR_1->lRangeMin;
    if (VAR_1->dwStyle & VAR_0) {
        VAR_6 = (VAR_1->rcThumb.bottom - VAR_1->rcThumb.top)/2;
        VAR_4 = VAR_1->rcChannel.bottom - VAR_1->rcChannel.top - (VAR_6 * 2) - 1;
        VAR_5 = (VAR_3*(VAR_2 - VAR_1->rcChannel.top - VAR_6)) / VAR_4;
    } else {
        VAR_6 = (VAR_1->rcThumb.right - VAR_1->rcThumb.left)/2;
        VAR_4 = VAR_1->rcChannel.right - VAR_1->rcChannel.left - (VAR_6 * 2) - 1;
        VAR_5 = (VAR_3*(VAR_2 - VAR_1->rcChannel.left - VAR_6)) / VAR_4;
    }
    VAR_5 += VAR_1->lRangeMin;
    if (VAR_5 > VAR_1->lRangeMax)
        VAR_5 = VAR_1->lRangeMax;
    else if (VAR_5 < VAR_1->lRangeMin)
        VAR_5 = VAR_1->lRangeMin;

    FUNC_0("%.2f\n", VAR_5);
    return (LONG)FUNC_1(VAR_5 + 0.5);
}
