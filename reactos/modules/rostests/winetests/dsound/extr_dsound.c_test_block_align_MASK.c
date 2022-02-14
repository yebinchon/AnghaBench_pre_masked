
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dsbcaps ;
typedef int bufdesc ;
struct TYPE_8__ {scalar_t__ nAvgBytesPerSec; int nBlockAlign; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_9__ {int dwSize; scalar_t__ dwBufferBytes; TYPE_1__* lpwfxFormat; int dwFlags; } ;
typedef int LPGUID ;
typedef int * LPDIRECTSOUNDBUFFER ;
typedef int * LPDIRECTSOUND ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_2__ DSBUFFERDESC ;
typedef TYPE_2__ DSBCAPS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,int **,int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_9 (int,char*,int,...) ;
 scalar_t__ FUNC_10 (int ,int **,int *) ;

__attribute__((used)) static HRESULT FUNC_11(LPGUID VAR_7)
{
    HRESULT VAR_8;
    LPDIRECTSOUND VAR_9=((void*)0);
    LPDIRECTSOUNDBUFFER VAR_10=((void*)0);
    DSBUFFERDESC VAR_11;
    DSBCAPS VAR_12;
    WAVEFORMATEX VAR_13;
    DWORD VAR_14, VAR_15;
    int VAR_16;


    VAR_8=FUNC_10(VAR_7,&VAR_9,((void*)0));
    FUNC_9(VAR_8==VAR_5||VAR_8==VAR_4||VAR_8==VAR_1,
       "DirectSoundCreate() failed: %08x\n",VAR_8);
    if (VAR_8!=VAR_5)
        return VAR_8;

    FUNC_8(&VAR_13,VAR_6,11025,16,2);
    FUNC_6(&VAR_11, sizeof(VAR_11));
    VAR_11.dwSize=sizeof(VAR_11);
    VAR_11.dwFlags=VAR_0;
    VAR_11.dwBufferBytes=VAR_13.nAvgBytesPerSec + 1;
    VAR_11.lpwfxFormat=&VAR_13;
    VAR_8=FUNC_4(VAR_9,&VAR_11,&VAR_10,((void*)0));
    FUNC_9(VAR_8 == VAR_5 || FUNC_7(VAR_8 == VAR_2),
       "IDirectSound_CreateSoundBuffer() should have returned DS_OK, returned: %08x\n", VAR_8);

    if (VAR_8==VAR_5 && VAR_10!=((void*)0)) {
        FUNC_6(&VAR_12, sizeof(VAR_12));
        VAR_12.dwSize = sizeof(VAR_12);
        VAR_8=FUNC_0(VAR_10,&VAR_12);
        FUNC_9(VAR_8==VAR_5,"IDirectSoundBuffer_GetCaps() should have returned DS_OK, "
           "returned: %08x\n", VAR_8);
        if (VAR_8==VAR_5 && VAR_13.nBlockAlign > 1)
        {
            FUNC_9(VAR_12.dwBufferBytes==(VAR_13.nAvgBytesPerSec + VAR_13.nBlockAlign),
               "Buffer size not a multiple of nBlockAlign: requested %d, "
               "got %d, should be %d\n", VAR_11.dwBufferBytes,
               VAR_12.dwBufferBytes, VAR_13.nAvgBytesPerSec + VAR_13.nBlockAlign);

            VAR_8 = FUNC_3(VAR_10, 0);
            FUNC_9(VAR_8 == VAR_5, "Could not set position to 0: %08x\n", VAR_8);
            VAR_8 = FUNC_1(VAR_10, &VAR_14, ((void*)0));
            FUNC_9(VAR_8 == VAR_5, "Could not get position: %08x\n", VAR_8);
            VAR_8 = FUNC_3(VAR_10, 1);
            FUNC_9(VAR_8 == VAR_5, "Could not set position to 1: %08x\n", VAR_8);
            VAR_8 = FUNC_1(VAR_10, &VAR_15, ((void*)0));
            FUNC_9(VAR_8 == VAR_5, "Could not get new position: %08x\n", VAR_8);
            FUNC_9(VAR_14 == VAR_15, "Positions not the same! Old position: %d, new position: %d\n", VAR_14, VAR_15);
        }
        VAR_16=FUNC_2(VAR_10);
        FUNC_9(VAR_16==0,"IDirectSoundBuffer_Release() secondary has %d references, "
           "should have 0\n",VAR_16);
    }

    VAR_16=FUNC_5(VAR_9);
    FUNC_9(VAR_16==0,"IDirectSound_Release() has %d references, should have 0\n",VAR_16);
    if (VAR_16!=0)
        return VAR_3;

    return VAR_8;
}
