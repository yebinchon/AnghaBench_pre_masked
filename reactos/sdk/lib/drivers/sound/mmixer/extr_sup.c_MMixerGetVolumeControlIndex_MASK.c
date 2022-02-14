
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_3__ {size_t ValuesCount; scalar_t__* Values; size_t InputSteppingDelta; } ;
typedef TYPE_1__* LPMIXERVOLUME_DATA ;
typedef scalar_t__ LONG ;



ULONG
FUNC_0(
    LPMIXERVOLUME_DATA VAR_0,
    LONG VAR_1)
{
    ULONG VAR_2;

    for(VAR_2 = 0; VAR_2 < VAR_0->ValuesCount; VAR_2++)
    {
        if (VAR_0->Values[VAR_2] > VAR_1)
        {
            return VAR_0->InputSteppingDelta * VAR_2;
        }
    }
    return VAR_0->InputSteppingDelta * (VAR_0->ValuesCount-1);
}
