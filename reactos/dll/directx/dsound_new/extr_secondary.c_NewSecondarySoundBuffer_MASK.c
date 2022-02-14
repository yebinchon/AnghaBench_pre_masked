
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WAVEFORMATEX ;
typedef int ULONG ;
struct TYPE_9__ {int cbSize; int wBitsPerSample; int nSamplesPerSec; } ;
struct TYPE_8__ {int dwBufferBytes; TYPE_6__* lpwfxFormat; int dwFlags; } ;
struct TYPE_7__ {int ref; int BufferSize; int * lpVtbl; struct TYPE_7__* Format; scalar_t__ PrimaryBuffer; scalar_t__ Position; scalar_t__ Flags; int VolumePan; int Volume; int State; int dwFrequency; int dwFlags; int dwLevel; int Filter; void* Buffer; } ;
typedef int LPFILTERINFO ;
typedef scalar_t__ LPDIRECTSOUNDBUFFER8 ;
typedef TYPE_1__* LPCDirectSoundBuffer ;
typedef TYPE_2__* LPCDSBUFFERDESC ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CDirectSoundBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_6__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 () ;
 int VAR_4 ;
 void* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

HRESULT
FUNC_6(
    LPDIRECTSOUNDBUFFER8 *VAR_7,
    LPFILTERINFO VAR_8,
    DWORD VAR_9,
    LPCDSBUFFERDESC VAR_10,
    LPDIRECTSOUNDBUFFER8 VAR_11)
{
    ULONG VAR_12;
    LPCDirectSoundBuffer VAR_13 = FUNC_4(FUNC_3(), VAR_4, sizeof(CDirectSoundBuffer));

    if (!VAR_13)
    {

        return VAR_2;
    }

    VAR_12 = sizeof(WAVEFORMATEX) + VAR_10->lpwfxFormat->cbSize;

    VAR_13->Format = FUNC_4(FUNC_3(), 0, VAR_12);
    if (!VAR_13->Format)
    {

        FUNC_5(FUNC_3(), 0, VAR_13);
        return VAR_2;
    }


    FUNC_0(VAR_10->dwBufferBytes);


    VAR_13->Buffer = FUNC_4(FUNC_3(), 0, VAR_10->dwBufferBytes);
    if (!VAR_13->Buffer)
    {

        FUNC_5(FUNC_3(), 0, VAR_13->Format);
        FUNC_5(FUNC_3(), 0, VAR_13);
        return VAR_2;
    }


    FUNC_2(VAR_13->Buffer, VAR_10->dwBufferBytes, VAR_10->lpwfxFormat->wBitsPerSample == 8 ? 0x80 : 0);

    VAR_13->ref = 1;
    VAR_13->lpVtbl = &VAR_6;
    VAR_13->Filter = VAR_8;
    VAR_13->dwLevel = VAR_9;
    VAR_13->dwFlags = VAR_10->dwFlags;
    VAR_13->dwFrequency = VAR_10->lpwfxFormat->nSamplesPerSec;
    VAR_13->State = VAR_5;
    VAR_13->Volume = VAR_1;
    VAR_13->VolumePan = VAR_0;
    VAR_13->Flags = 0;
    VAR_13->Position = 0;
    VAR_13->BufferSize = VAR_10->dwBufferBytes;
    VAR_13->PrimaryBuffer = VAR_11;

    FUNC_1(VAR_13->Format, VAR_10->lpwfxFormat, VAR_12);

    *VAR_7 = (LPDIRECTSOUNDBUFFER8)&VAR_13->lpVtbl;
    return VAR_3;
}
