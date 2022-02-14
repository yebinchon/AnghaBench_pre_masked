
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int event ;
typedef int bufdesc ;
struct TYPE_11__ {int nAvgBytesPerSec; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_13__ {void* hEventNotify; void* dwOffset; } ;
struct TYPE_12__ {int dwSize; int dwFlags; int dwBufferBytes; TYPE_1__* lpwfxFormat; } ;
typedef TYPE_2__* LPVOID ;
typedef int LPGUID ;
typedef int * LPDIRECTSOUNDNOTIFY ;
typedef int * LPDIRECTSOUNDBUFFER ;
typedef int * LPDIRECTSOUND ;
typedef scalar_t__ HRESULT ;
typedef void* HANDLE ;
typedef int DWORD ;
typedef TYPE_2__ DSBUFFERDESC ;
typedef TYPE_4__ DSBPOSITIONNOTIFY ;


 void* FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int *,int ,int ,TYPE_2__**,int*,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,int,int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,TYPE_4__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*,int **,int *) ;
 scalar_t__ FUNC_8 (int *,int *,int **) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_14 (int,char*,int) ;
 scalar_t__ FUNC_15 (int ,int **,int *) ;
 int FUNC_16 (int *,int,void**,scalar_t__) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static HRESULT FUNC_18(LPGUID VAR_16)
{
    HRESULT VAR_17;
    LPDIRECTSOUND VAR_18=((void*)0);
    LPDIRECTSOUNDBUFFER VAR_19=((void*)0);
    DSBUFFERDESC VAR_20;
    int VAR_21;


    VAR_17=FUNC_15(VAR_16,&VAR_18,((void*)0));
    FUNC_14(VAR_17==VAR_10||VAR_17==VAR_7||VAR_17==VAR_5,
       "DirectSoundCreate() failed: %08x\n",VAR_17);
    if (VAR_17!=VAR_10)
        return VAR_17;



    VAR_17=FUNC_10(VAR_18,FUNC_12(),VAR_9);
    FUNC_14(VAR_17==VAR_10,"IDirectSound_SetCooperativeLevel() failed: %08x\n", VAR_17);
    if (VAR_17!=VAR_10)
        goto EXIT;

    FUNC_11(&VAR_20, sizeof(VAR_20));
    VAR_20.dwSize=sizeof(VAR_20);
    VAR_20.dwFlags=VAR_2;
    VAR_17=FUNC_7(VAR_18,&VAR_20,&VAR_19,((void*)0));
    FUNC_14(VAR_17==VAR_10 && VAR_19!=((void*)0),"IDirectSound_CreateSoundBuffer() failed "
       "to create a primary buffer %08x\n",VAR_17);

    if (VAR_17==VAR_10 && VAR_19!=((void*)0)) {
        LPDIRECTSOUNDBUFFER VAR_22=((void*)0);
        WAVEFORMATEX VAR_23;

        FUNC_13(&VAR_23,VAR_15,22050,16,1);
        FUNC_11(&VAR_20, sizeof(VAR_20));
        VAR_20.dwSize=sizeof(VAR_20);
        VAR_20.dwFlags=VAR_1|VAR_0;
        VAR_20.dwBufferBytes=VAR_23.nAvgBytesPerSec/100;
        VAR_20.lpwfxFormat=&VAR_23;
        VAR_17=FUNC_7(VAR_18,&VAR_20,&VAR_22,((void*)0));
        FUNC_14(VAR_17==VAR_10 && VAR_22!=((void*)0),
           "IDirectSound_CreateSoundBuffer() failed to create a original "
           "buffer %08x\n",VAR_17);
        if (VAR_17==VAR_10 && VAR_22!=((void*)0)) {
            LPDIRECTSOUNDBUFFER VAR_24=((void*)0);
            LPDIRECTSOUNDNOTIFY VAR_25=((void*)0);
            HANDLE VAR_26[2];
            LPVOID VAR_27=((void*)0);
            DWORD VAR_28;
            int VAR_29;


            for (VAR_29=0;VAR_29<sizeof(VAR_26)/sizeof(VAR_26[0]);VAR_29++) {
                VAR_26[VAR_29] = FUNC_0(((void*)0),VAR_11,VAR_11,((void*)0));
            }


            VAR_17=FUNC_1(VAR_22,0,0,&VAR_27,&VAR_28,
                                       ((void*)0),((void*)0),VAR_3);
            FUNC_14(VAR_17==VAR_10 && VAR_27!=((void*)0),
               "IDirectSoundBuffer_Lock failed to lock the buffer %08x\n",VAR_17);
            if (VAR_17==VAR_10 && VAR_27!=((void*)0)) {
                FUNC_11(VAR_27,VAR_28);
                VAR_17=FUNC_4(VAR_22,VAR_27,VAR_28,
                                             ((void*)0),0);
                FUNC_14(VAR_17==VAR_10,"IDirectSoundBuffer_Unlock failed to unlock "
                   "%08x\n",VAR_17);
            }

            VAR_17=FUNC_2(VAR_22,
                                                 &VAR_12,
                                                 (void**)&VAR_25);
            FUNC_14(VAR_17==VAR_10 && VAR_25!=((void*)0),
               "IDirectSoundBuffer_QueryInterface() failed to create a "
               "notification %08x\n",VAR_17);
            if (VAR_17==VAR_10 && VAR_25!=((void*)0)) {
                DSBPOSITIONNOTIFY VAR_30;
                LPDIRECTSOUNDNOTIFY VAR_31=((void*)0);

                VAR_30.dwOffset=VAR_4;
                VAR_30.hEventNotify=VAR_26[0];
                VAR_17=FUNC_6(VAR_25,
                                                               1,&VAR_30);
                FUNC_14(VAR_17==VAR_10,"IDirectSoundNotify_SetNotificationPositions "
                   "failed %08x\n",VAR_17);

                VAR_17=FUNC_8(VAR_18,VAR_22,&VAR_24);
                FUNC_14(VAR_17==VAR_10 && VAR_24!=((void*)0),
                   "IDirectSound_DuplicateSoundBuffer failed %08x\n",VAR_17);

                FUNC_17("testing duplicated buffer without notifications.\n");
                FUNC_16(VAR_24,sizeof(VAR_26)/sizeof(VAR_26[0]),
                            VAR_26,VAR_14);

                VAR_17=FUNC_2(VAR_24,
                                                     &VAR_12,
                                                     (void**)&VAR_31);
                FUNC_14(VAR_17==VAR_10&&VAR_31!=((void*)0),
                   "IDirectSoundBuffer_QueryInterface() failed to create a "
                   "notification %08x\n",VAR_17);
                if(VAR_17==VAR_10&&VAR_31!=((void*)0)) {
                    VAR_30.dwOffset=VAR_4;
                    VAR_30.hEventNotify=VAR_26[1];
                    VAR_17=FUNC_6(VAR_31,
                                                                   1,&VAR_30);
                    FUNC_14(VAR_17==VAR_10,"IDirectSoundNotify_SetNotificationPositions "
                       "failed %08x\n",VAR_17);

                    FUNC_17("testing duplicated buffer with a notification.\n");
                    FUNC_16(VAR_24,sizeof(VAR_26)/sizeof(VAR_26[0]),
                                VAR_26,VAR_13+1);

                    VAR_21=FUNC_5(VAR_31);
                    FUNC_14(VAR_21==0,"IDirectSoundNotify_Release() has %d references, "
                       "should have 0\n",VAR_21);
                }
                VAR_21=FUNC_5(VAR_25);
                FUNC_14(VAR_21==0,"IDirectSoundNotify_Release() has %d references, "
                   "should have 0\n",VAR_21);

                FUNC_17("testing original buffer with a notification.\n");
                FUNC_16(VAR_22,sizeof(VAR_26)/sizeof(VAR_26[0]),
                            VAR_26,VAR_13);

                VAR_21=FUNC_3(VAR_24);
                FUNC_14(VAR_21==0,"IDirectSoundBuffer_Release() has %d references, "
                   "should have 0\n",VAR_21);
            }
            VAR_21=FUNC_3(VAR_22);
            FUNC_14(VAR_21==0,"IDirectSoundBuffer_Release() has %d references, "
               "should have 0\n",VAR_21);
        }
        VAR_21=FUNC_3(VAR_19);
        FUNC_14(VAR_21==0,"IDirectSoundBuffer_Release() has %d references, "
           "should have 0\n",VAR_21);
    }



    VAR_17=FUNC_10(VAR_18,FUNC_12(),VAR_8);
    FUNC_14(VAR_17==VAR_10,"IDirectSound_SetCooperativeLevel() failed: %08x\n", VAR_17);

EXIT:
    VAR_21=FUNC_9(VAR_18);
    FUNC_14(VAR_21==0,"IDirectSound_Release() has %d references, should have 0\n",VAR_21);
    if (VAR_21!=0)
        return VAR_6;

    return VAR_17;
}
