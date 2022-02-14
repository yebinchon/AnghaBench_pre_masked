
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lRangeMin; scalar_t__ lRangeMax; int uNumTics; scalar_t__* tics; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ LONG ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static inline LRESULT
FUNC_4 (TRACKBAR_INFO *VAR_3, LONG VAR_4)
{
    if ((VAR_4 < VAR_3->lRangeMin) || (VAR_4> VAR_3->lRangeMax))
        return VAR_0;

    FUNC_1("lPos=%d\n", VAR_4);

    VAR_3->uNumTics++;
    VAR_3->tics=FUNC_0( VAR_3->tics,
                                    (VAR_3->uNumTics)*sizeof (DWORD));
    if (!VAR_3->tics) {
 VAR_3->uNumTics = 0;
 FUNC_3(VAR_3, VAR_1);
 return VAR_0;
    }
    VAR_3->tics[VAR_3->uNumTics-1] = VAR_4;

    FUNC_2(VAR_3);

    return VAR_2;
}
