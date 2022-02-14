
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int uTicFreq; unsigned int lRangeMax; unsigned int lRangeMin; int* tics; unsigned int uNumTics; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int DWORD ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* FUNC_1 (int*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3 (TRACKBAR_INFO *VAR_1)
{
    int VAR_2;
    unsigned VAR_3, VAR_4;

    if (VAR_1->uTicFreq && VAR_1->lRangeMax >= VAR_1->lRangeMin) {
        VAR_3=(VAR_1->lRangeMax - VAR_1->lRangeMin)/VAR_1->uTicFreq;

        if (VAR_3 && ((VAR_1->lRangeMax - VAR_1->lRangeMin) % VAR_1->uTicFreq == 0))
          VAR_3--;
    }
    else {
        FUNC_0 (VAR_1->tics);
        VAR_1->tics = ((void*)0);
        VAR_1->uNumTics = 0;
        return;
    }

    if (VAR_3 != VAR_1->uNumTics) {
     VAR_1->tics=FUNC_1 (VAR_1->tics,
                                        (VAR_3+1)*sizeof (DWORD));
 if (!VAR_1->tics) {
     VAR_1->uNumTics = 0;
     FUNC_2(VAR_1, VAR_0);
     return;
 }
     VAR_1->uNumTics = VAR_3;
    }

    VAR_2 = VAR_1->lRangeMin + VAR_1->uTicFreq;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2 += VAR_1->uTicFreq)
        VAR_1->tics[VAR_4] = VAR_2;
}
