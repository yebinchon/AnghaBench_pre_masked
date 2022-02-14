
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lRangeMax; int lRangeMin; scalar_t__ lPos; int lPageSize; int dwStyle; int flags; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ LONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static inline LRESULT
FUNC_3 (TRACKBAR_INFO *VAR_2, BOOL VAR_3, LONG VAR_4)
{
    BOOL VAR_5 = VAR_2->lRangeMax != VAR_4;
    LONG VAR_6 = FUNC_2(VAR_4, VAR_2->lRangeMin);

    VAR_2->lRangeMax = VAR_4;
    if (VAR_2->lPos > VAR_6) {
        VAR_2->lPos = VAR_6;
        VAR_2->flags |= VAR_1;
    }

    VAR_2->lPageSize = (VAR_2->lRangeMax - VAR_2->lRangeMin) / 5;
    if (VAR_2->lPageSize == 0) VAR_2->lPageSize = 1;

    if (VAR_5 && (VAR_2->dwStyle & VAR_0))
        FUNC_1 (VAR_2);

    if (VAR_3) FUNC_0(VAR_2);

    return 0;
}
