
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int right; int left; } ;
struct TYPE_6__ {int right; int left; } ;
struct TYPE_8__ {scalar_t__ uNumTics; int lRangeMax; int lRangeMin; TYPE_2__ rcChannel; TYPE_1__ rcThumb; int tics; } ;
typedef TYPE_3__ TRACKBAR_INFO ;
typedef int LONG ;
typedef scalar_t__ INT ;


 int FUNC_0 (TYPE_3__ const*,scalar_t__) ;

__attribute__((used)) static inline LONG
FUNC_1 (const TRACKBAR_INFO *VAR_0, INT VAR_1)
{
    LONG VAR_2, VAR_3, VAR_4, VAR_5;
    int VAR_6;

    if ((VAR_1 < 0) || (VAR_1 >= VAR_0->uNumTics) || !VAR_0->tics)
 return -1;

    VAR_5 = FUNC_0 (VAR_0, VAR_1);
    VAR_2 = VAR_0->lRangeMax - VAR_0->lRangeMin;
    if (VAR_2 <= 0) VAR_2 = 1;
    VAR_6 = (VAR_0->rcThumb.right - VAR_0->rcThumb.left)/2;
    VAR_3 = VAR_0->rcChannel.right - VAR_0->rcChannel.left - VAR_6*2;
    VAR_4 = VAR_0->rcChannel.left + VAR_6 + (VAR_3 * VAR_5) / VAR_2;

    return VAR_4;
}
