
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lPos; scalar_t__ lRangeMin; scalar_t__ lRangeMax; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ LONG ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline LRESULT
FUNC_2 (TRACKBAR_INFO *VAR_0, BOOL VAR_1, LONG VAR_2)
{
    LONG VAR_3 = VAR_0->lPos;
    VAR_0->lPos = VAR_2;

    if (VAR_0->lPos < VAR_0->lRangeMin)
 VAR_0->lPos = VAR_0->lRangeMin;

    if (VAR_0->lPos > VAR_0->lRangeMax)
 VAR_0->lPos = VAR_0->lRangeMax;

    if (VAR_1 && VAR_3 != VAR_2)
    {
        FUNC_1(VAR_0);
        FUNC_0(VAR_0, VAR_3, VAR_2);
    }

    return 0;
}
