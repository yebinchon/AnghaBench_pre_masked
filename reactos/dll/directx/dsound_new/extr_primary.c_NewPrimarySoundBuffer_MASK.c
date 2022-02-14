
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WAVEFORMATEX ;
struct TYPE_4__ {int cbSize; int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int wFormatTag; } ;
struct TYPE_5__ {int ref; int * lpVtbl; int Lock; TYPE_1__ Format; int * hPin; int VolumePan; int Volume; scalar_t__ dwFrequency; void* dwFlags; void* dwLevel; int Filter; } ;
typedef int LPFILTERINFO ;
typedef scalar_t__ LPDIRECTSOUNDBUFFER8 ;
typedef TYPE_2__* LPCDirectSoundBuffer ;
typedef int HRESULT ;
typedef void* DWORD ;
typedef int CDirectSoundBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

HRESULT
FUNC_3(
    LPDIRECTSOUNDBUFFER8 *VAR_7,
    LPFILTERINFO VAR_8,
    DWORD VAR_9,
    DWORD VAR_10)
{
    LPCDirectSoundBuffer VAR_11 = FUNC_1(FUNC_0(), VAR_4, sizeof(CDirectSoundBuffer));

    if (!VAR_11)
    {

        return VAR_2;
    }

    VAR_11->ref = 1;
    VAR_11->lpVtbl = &VAR_6;
    VAR_11->Filter = VAR_8;
    VAR_11->dwLevel = VAR_9;
    VAR_11->dwFlags = VAR_10;
    VAR_11->dwFrequency = 0;
    VAR_11->Volume = VAR_1;
    VAR_11->VolumePan = VAR_0;
    VAR_11->hPin = ((void*)0);


    VAR_11->Format.cbSize = sizeof(WAVEFORMATEX);
    VAR_11->Format.nChannels = 2;
    VAR_11->Format.nSamplesPerSec = 44100;
    VAR_11->Format.wBitsPerSample = 16;
    VAR_11->Format.wFormatTag = VAR_5;
    VAR_11->Format.nBlockAlign = (VAR_11->Format.nChannels * VAR_11->Format.wBitsPerSample) / 8;
    VAR_11->Format.nAvgBytesPerSec = (VAR_11->Format.nChannels * VAR_11->Format.nSamplesPerSec * VAR_11->Format.wBitsPerSample) / 8;

    FUNC_2(&VAR_11->Lock);

    *VAR_7 = (LPDIRECTSOUNDBUFFER8)&VAR_11->lpVtbl;
    return VAR_3;
}
