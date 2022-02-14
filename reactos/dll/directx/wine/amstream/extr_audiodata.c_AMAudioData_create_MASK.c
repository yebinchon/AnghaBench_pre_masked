
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int wFormatTag; } ;
struct TYPE_9__ {int ref; TYPE_2__ IAudioData_iface; TYPE_1__ wave_format; } ;
typedef TYPE_2__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_3__ AMAudioDataImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int *,TYPE_2__**) ;
 int VAR_5 ;

HRESULT FUNC_3(IUnknown *VAR_6, LPVOID *VAR_7)
{
    AMAudioDataImpl *VAR_8;

    FUNC_2("(%p,%p)\n", VAR_6, VAR_7);

    if (VAR_6)
        return VAR_1;

    VAR_8 = FUNC_1(FUNC_0(), VAR_3, sizeof(AMAudioDataImpl));
    if (!VAR_8)
        return VAR_2;

    VAR_8->IAudioData_iface.lpVtbl = &VAR_0;
    VAR_8->ref = 1;

    VAR_8->wave_format.wFormatTag = VAR_5;
    VAR_8->wave_format.nChannels = 1;
    VAR_8->wave_format.nSamplesPerSec = 11025;
    VAR_8->wave_format.wBitsPerSample = 16;
    VAR_8->wave_format.nBlockAlign = VAR_8->wave_format.wBitsPerSample * VAR_8->wave_format.nChannels / 8;
    VAR_8->wave_format.nAvgBytesPerSec = VAR_8->wave_format.nBlockAlign * VAR_8->wave_format.nSamplesPerSec;

    *VAR_7 = &VAR_8->IAudioData_iface;

    return VAR_4;
}
