
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bufdesc ;
struct TYPE_6__ {int nAvgBytesPerSec; int nBlockAlign; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_7__ {int dwSize; int dwFlags; TYPE_1__* lpwfxFormat; int dwBufferBytes; } ;
typedef int LPGUID ;
typedef int * LPDIRECTSOUNDBUFFER ;
typedef int * LPDIRECTSOUND3DBUFFER ;
typedef int * LPDIRECTSOUND ;
typedef int HRESULT ;
typedef TYPE_2__ DSBUFFERDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*,int **,int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_11 (int,char*,int,...) ;
 int FUNC_12 (int ,int **,int *) ;

__attribute__((used)) static HRESULT FUNC_13(LPGUID VAR_18)
{
    HRESULT VAR_19;
    LPDIRECTSOUND VAR_20=((void*)0);
    int VAR_21;


    VAR_19=FUNC_12(VAR_18,0,((void*)0));
    FUNC_11(VAR_19==VAR_8,"DirectSoundCreate() should have returned "
       "DSERR_INVALIDPARAM, returned: %08x\n",VAR_19);


    VAR_19=FUNC_12(VAR_18,&VAR_20,((void*)0));
    FUNC_11(VAR_19==VAR_10||VAR_19==VAR_9||VAR_19==VAR_5||VAR_19==VAR_11,
       "DirectSoundCreate() failed: %08x\n",VAR_19);
    if (VAR_19!=VAR_10)
        return VAR_19;


    FUNC_6(VAR_20, VAR_16, VAR_18);


    VAR_19=FUNC_0(&VAR_2, ((void*)0), VAR_1,
                        &VAR_13, (void**)&VAR_20);
    FUNC_11(VAR_19==VAR_15,"CoCreateInstance(CLSID_DirectSound) failed: %08x\n", VAR_19);
    if (VAR_20)
        FUNC_6(VAR_20, VAR_12, VAR_18);


    VAR_19=FUNC_12(VAR_18,&VAR_20,((void*)0));
    FUNC_11(VAR_19==VAR_10,"DirectSoundCreate() failed: %08x\n",VAR_19);
    if (VAR_19==VAR_10) {
        LPDIRECTSOUND VAR_22=((void*)0);


        VAR_19=FUNC_12(VAR_18,&VAR_22,((void*)0));
        FUNC_11(VAR_19==VAR_10,"DirectSoundCreate() failed: %08x\n",VAR_19);
        if (VAR_19==VAR_10) {

            VAR_21=FUNC_5(VAR_22);
            FUNC_11(VAR_21==0,"IDirectSound_Release() has %d references, should have "
               "0\n",VAR_21);
            FUNC_11(VAR_20!=VAR_22,"DirectSound objects should be unique: dso=%p,dso1=%p\n",*VAR_20,VAR_22);
        }


        VAR_21=FUNC_5(VAR_20);
        FUNC_11(VAR_21==0,"IDirectSound_Release() has %d references, should have 0\n",
           VAR_21);
        if (VAR_21!=0)
            return VAR_7;
    } else
        return VAR_19;


    VAR_19=FUNC_12(VAR_18,&VAR_20,((void*)0));
    FUNC_11(VAR_19==VAR_10,"DirectSoundCreate() failed: %08x\n",VAR_19);
    if (VAR_19==VAR_10) {
        LPDIRECTSOUNDBUFFER VAR_23;
        DSBUFFERDESC VAR_24;
        WAVEFORMATEX VAR_25;

        FUNC_10(&VAR_25,VAR_17,11025,8,1);
        FUNC_7(&VAR_24, sizeof(VAR_24));
        VAR_24.dwSize=sizeof(VAR_24);
        VAR_24.dwFlags=VAR_4 | VAR_3;
        VAR_24.dwBufferBytes=FUNC_8(VAR_25.nAvgBytesPerSec*VAR_0/1000,
                                    VAR_25.nBlockAlign);
        VAR_24.lpwfxFormat=&VAR_25;
        VAR_19=FUNC_3(VAR_20,&VAR_24,&VAR_23,((void*)0));
        FUNC_11((VAR_19==VAR_10 && VAR_23!=((void*)0)) || FUNC_9(VAR_19 == VAR_6),
           "IDirectSound_CreateSoundBuffer() failed to create a secondary "
           "buffer %08x\n",VAR_19);
        if (VAR_19==VAR_10 && VAR_23!=((void*)0)) {
            LPDIRECTSOUND3DBUFFER VAR_26;
            VAR_19=FUNC_4(VAR_23, &VAR_14,
                                           (void **)&VAR_26);
            FUNC_11(VAR_19==VAR_10 && VAR_26!=((void*)0),"IDirectSound_QueryInterface() "
               "failed: %08x\n",VAR_19);
            if (VAR_19==VAR_10 && VAR_26!=((void*)0)) {
                VAR_21=FUNC_1(VAR_26);
                FUNC_11(VAR_21==2,"IDirectSound3DBuffer_AddRef() has %d references, "
                   "should have 2\n",VAR_21);
            }
            VAR_21=FUNC_2(VAR_23);
            FUNC_11(VAR_21==2,"IDirectSoundBuffer_AddRef() has %d references, "
               "should have 2\n",VAR_21);
        }

        VAR_21=FUNC_5(VAR_20);
        FUNC_11(VAR_21==0,"IDirectSound_Release() has %d references, should have 0\n",
           VAR_21);
        if (VAR_21!=0)
            return VAR_7;
    } else
        return VAR_19;

    return VAR_10;
}
