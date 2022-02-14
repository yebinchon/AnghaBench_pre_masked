
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwStyle; scalar_t__ lSelMin; scalar_t__ lSelMax; scalar_t__ lRangeMin; scalar_t__ lRangeMax; int flags; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef void* SHORT ;
typedef int LRESULT ;
typedef int LONG ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline LRESULT
FUNC_3 (TRACKBAR_INFO *VAR_2, BOOL VAR_3, LONG VAR_4)
{
    if (!(VAR_2->dwStyle & VAR_0)){
        VAR_2->lSelMin = 0;
        VAR_2->lSelMax = 0;
        return 0;
    }

    VAR_2->lSelMin = (SHORT)FUNC_1(VAR_4);
    VAR_2->lSelMax = (SHORT)FUNC_0(VAR_4);
    VAR_2->flags |= VAR_1;

    if (VAR_2->lSelMin < VAR_2->lRangeMin)
        VAR_2->lSelMin = VAR_2->lRangeMin;
    if (VAR_2->lSelMax > VAR_2->lRangeMax)
        VAR_2->lSelMax = VAR_2->lRangeMax;

    if (VAR_3) FUNC_2(VAR_2);

    return 0;
}
