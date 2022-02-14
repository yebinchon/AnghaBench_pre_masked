
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int WAVEFORMATEX ;
typedef scalar_t__ ULONG ;
struct TYPE_17__ {scalar_t__ cbSize; scalar_t__ nChannels; int wBitsPerSample; } ;
struct TYPE_16__ {int dwBufferBytes; TYPE_5__* lpwfxFormat; } ;
struct TYPE_13__ {scalar_t__ nChannels; int wBitsPerSample; } ;
struct TYPE_15__ {scalar_t__ BufferSize; int ref; int * lpVtbl; struct TYPE_15__* Format; void* bLoop; int State; TYPE_1__* Filter; scalar_t__ MixBufferSize; struct TYPE_15__* Buffer; int hPin; struct TYPE_15__* MixBuffer; TYPE_12__ MixFormat; void* bMix; } ;
struct TYPE_14__ {int hFilter; } ;
typedef TYPE_1__* LPFILTERINFO ;
typedef scalar_t__ LPDIRECTSOUNDCAPTUREBUFFER8 ;
typedef TYPE_2__* LPCDirectSoundCaptureBufferImpl ;
typedef TYPE_3__* LPCDSCBUFFERDESC ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int CDirectSoundCaptureBufferImpl ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_12__*,int *,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,void*,TYPE_5__*,int *,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_1__*,void*,scalar_t__) ;
 int FUNC_7 () ;
 int VAR_4 ;
 void* FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,int ,TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int ,scalar_t__,TYPE_5__*,int *,void*) ;
 int FUNC_11 (TYPE_2__*,TYPE_5__*,scalar_t__) ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

HRESULT
FUNC_12(
    LPDIRECTSOUNDCAPTUREBUFFER8 *VAR_9,
    LPFILTERINFO VAR_10,
    LPCDSCBUFFERDESC VAR_11)
{
    DWORD VAR_12, VAR_13;
    ULONG VAR_14 = 0, VAR_15;
    DWORD VAR_16 = VAR_3;
    WAVEFORMATEX VAR_17;

    LPCDirectSoundCaptureBufferImpl VAR_18 = FUNC_8(FUNC_7(), VAR_4, sizeof(CDirectSoundCaptureBufferImpl));

    if (!VAR_18)
    {

        return VAR_1;
    }


    VAR_12 = sizeof(WAVEFORMATEX) + VAR_11->lpwfxFormat->cbSize;

    VAR_18->Format = FUNC_8(FUNC_7(), 0, VAR_12);
    if (!VAR_18->Format)
    {

        FUNC_9(FUNC_7(), 0, VAR_18);
        return VAR_1;
    }


    FUNC_0(VAR_11->dwBufferBytes);


    VAR_18->Buffer = FUNC_8(FUNC_7(), 0, VAR_11->dwBufferBytes);
    if (!VAR_18->Buffer)
    {

        FUNC_9(FUNC_7(), 0, VAR_18->Format);
        FUNC_9(FUNC_7(), 0, VAR_18);
        return VAR_1;
    }


    VAR_18->BufferSize = VAR_11->dwBufferBytes;
    FUNC_0(VAR_11->lpwfxFormat->cbSize == 0);

    do
    {

        VAR_15 = FUNC_6(VAR_10, VAR_6, VAR_14);

        if (VAR_15 == VAR_7)
            break;

        VAR_16 = FUNC_10(VAR_10->hFilter, VAR_15, VAR_11->lpwfxFormat, &VAR_18->hPin, VAR_6);
        if (VAR_16 == VAR_3)
            break;

        VAR_14++;
    }while(VAR_6);

    if (VAR_16 != VAR_3)
    {





       VAR_14 = 0;
       do
       {

            VAR_15 = FUNC_6(VAR_10, VAR_6, VAR_14);
            FUNC_4("PinId %u DeviceId %u\n", VAR_15, VAR_14);

            if (VAR_15 == VAR_7)
                break;

            if (FUNC_3(VAR_10->hFilter, VAR_15, VAR_6, VAR_11->lpwfxFormat, &VAR_17, &VAR_18->hPin))
            {
                VAR_18->bMix = VAR_6;
                FUNC_2(&VAR_18->MixFormat, &VAR_17, sizeof(WAVEFORMATEX));
                break;
            }

            VAR_14++;
        }while(VAR_6);


        if (!VAR_18->bMix)
        {

            FUNC_4("failed to compute a compatible format\n");
            FUNC_9(FUNC_7(), 0, VAR_18->MixBuffer);
            FUNC_9(FUNC_7(), 0, VAR_18->Buffer);
            FUNC_9(FUNC_7(), 0, VAR_18->Format);
            FUNC_9(FUNC_7(), 0, VAR_18);
            return VAR_0;
        }

        VAR_13 = VAR_11->dwBufferBytes;
        VAR_13 /= VAR_11->lpwfxFormat->nChannels;
        VAR_13 /= (VAR_11->lpwfxFormat->wBitsPerSample/8);

        VAR_13 *= VAR_18->MixFormat.nChannels;
        VAR_13 *= (VAR_18->MixFormat.wBitsPerSample/8);


        VAR_18->MixBuffer = FUNC_8(FUNC_7(), 0, VAR_13);
        if (!VAR_18->Buffer)
        {

            FUNC_1(VAR_18->hPin);
            FUNC_9(FUNC_7(), 0, VAR_18->Buffer);
            FUNC_9(FUNC_7(), 0, VAR_18->Format);
            FUNC_9(FUNC_7(), 0, VAR_18);
            return VAR_1;
        }
        VAR_18->MixBufferSize = VAR_13;
        FUNC_5("MixBufferSize %u BufferSize %u\n", VAR_13, VAR_18->BufferSize);
    }


    VAR_18->ref = 1;
    VAR_18->lpVtbl = &VAR_8;
    VAR_18->Filter = VAR_10;
    VAR_18->State = VAR_5;
    VAR_18->bLoop = VAR_6;

    FUNC_11(VAR_18->Format, VAR_11->lpwfxFormat, VAR_12);

    *VAR_9 = (LPDIRECTSOUNDCAPTUREBUFFER8)&VAR_18->lpVtbl;
    return VAR_2;
}
