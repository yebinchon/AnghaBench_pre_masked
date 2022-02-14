
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwTotalLeftAmpFactor; scalar_t__ dwTotalRightAmpFactor; double lVolume; scalar_t__ dwVolAmpFactor; double lPan; } ;
typedef TYPE_1__* PDSVOLUMEPAN ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (int) ;

void FUNC_2(PDSVOLUMEPAN VAR_0)
{
    double VAR_1,VAR_2;
    FUNC_0("(%p)\n",VAR_0);

    FUNC_0("left=%x, right=%x\n",VAR_0->dwTotalLeftAmpFactor,VAR_0->dwTotalRightAmpFactor);
    if (VAR_0->dwTotalLeftAmpFactor==0)
        VAR_1=-10000;
    else
        VAR_1=600 * FUNC_1(((double)VAR_0->dwTotalLeftAmpFactor) / 0xffff) / FUNC_1(2);
    if (VAR_0->dwTotalRightAmpFactor==0)
        VAR_2=-10000;
    else
        VAR_2=600 * FUNC_1(((double)VAR_0->dwTotalRightAmpFactor) / 0xffff) / FUNC_1(2);
    if (VAR_1<VAR_2)
    {
        VAR_0->lVolume=VAR_2;
        VAR_0->dwVolAmpFactor=VAR_0->dwTotalRightAmpFactor;
    }
    else
    {
        VAR_0->lVolume=VAR_1;
        VAR_0->dwVolAmpFactor=VAR_0->dwTotalLeftAmpFactor;
    }
    if (VAR_0->lVolume < -10000)
        VAR_0->lVolume=-10000;
    VAR_0->lPan=VAR_2-VAR_1;
    if (VAR_0->lPan < -10000)
        VAR_0->lPan=-10000;

    FUNC_0("Vol=%d Pan=%d\n", VAR_0->lVolume, VAR_0->lPan);
}
