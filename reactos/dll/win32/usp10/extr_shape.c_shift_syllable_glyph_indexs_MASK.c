
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ start; scalar_t__ base; scalar_t__ end; scalar_t__ ralf; scalar_t__ blwf; scalar_t__ pref; } ;
typedef TYPE_1__ IndicSyllable ;
typedef scalar_t__ INT ;



__attribute__((used)) static inline void FUNC_0(IndicSyllable *VAR_0, INT VAR_1, INT VAR_2)
{
    if (VAR_2 == 0)
        return;

    if (VAR_0->start > VAR_1)
        VAR_0->start += VAR_2;
    if (VAR_0->base > VAR_1)
        VAR_0->base+= VAR_2;
    if (VAR_0->end > VAR_1)
        VAR_0->end+= VAR_2;
    if (VAR_0->ralf > VAR_1)
        VAR_0->ralf+= VAR_2;
    if (VAR_0->blwf > VAR_1)
        VAR_0->blwf+= VAR_2;
    if (VAR_0->pref > VAR_1)
        VAR_0->pref+= VAR_2;
}
