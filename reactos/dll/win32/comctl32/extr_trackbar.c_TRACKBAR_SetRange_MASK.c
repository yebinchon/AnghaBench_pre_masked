
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lRangeMin; scalar_t__ lRangeMax; scalar_t__ lPos; int lPageSize; int dwStyle; int flags; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef scalar_t__ SHORT ;
typedef int LRESULT ;
typedef int LONG ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static inline LRESULT
FUNC_4 (TRACKBAR_INFO *VAR_2, BOOL VAR_3, LONG VAR_4)
{
    BOOL VAR_5 = VAR_2->lRangeMin != (SHORT)FUNC_1(VAR_4) ||
                   VAR_2->lRangeMax != (SHORT)FUNC_0(VAR_4);

    VAR_2->lRangeMin = (SHORT)FUNC_1(VAR_4);
    VAR_2->lRangeMax = (SHORT)FUNC_0(VAR_4);


    if (VAR_2->lPos < VAR_2->lRangeMin)
        VAR_2->lPos = VAR_2->lRangeMin;

    if (VAR_2->lPos > VAR_2->lRangeMax)
        VAR_2->lPos = VAR_2->lRangeMax;

    VAR_2->lPageSize = (VAR_2->lRangeMax - VAR_2->lRangeMin) / 5;
    if (VAR_2->lPageSize == 0) VAR_2->lPageSize = 1;

    if (VAR_5) {
        if (VAR_2->dwStyle & VAR_0)
            FUNC_3 (VAR_2);
        VAR_2->flags |= VAR_1;
    }

    if (VAR_3) FUNC_2(VAR_2);

    return 0;
}
