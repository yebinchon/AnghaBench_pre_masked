
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lPos; scalar_t__ lRangeMin; scalar_t__ lLineSize; } ;
typedef TYPE_1__ TRACKBAR_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void FUNC_1(TRACKBAR_INFO *VAR_1)
{
    if (VAR_1->lPos == VAR_1->lRangeMin) return;
    VAR_1->lPos -= VAR_1->lLineSize;
    if (VAR_1->lPos < VAR_1->lRangeMin)
        VAR_1->lPos = VAR_1->lRangeMin;
    FUNC_0 (VAR_1, VAR_0);
}
