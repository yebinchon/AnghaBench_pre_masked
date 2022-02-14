
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pwfx; } ;
struct TYPE_4__ {int wBitsPerSample; } ;
typedef TYPE_2__ DirectSoundDevice ;
typedef int DWORD ;



DWORD FUNC_0(const DirectSoundDevice* VAR_0, DWORD VAR_1)
{
    DWORD VAR_2 = VAR_1 * 32 / VAR_0->pwfx->wBitsPerSample;
    if (VAR_0->pwfx->wBitsPerSample == 32)
        VAR_2 *= 2;
    return VAR_2;
}
