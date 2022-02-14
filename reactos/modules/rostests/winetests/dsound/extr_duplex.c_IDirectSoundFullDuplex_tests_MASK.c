
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int wfex ;
struct TYPE_7__ {int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int dwSize; int dwBufferBytes; struct TYPE_7__* lpwfxFormat; int dwFlags; int wFormatTag; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef int * LPDIRECTSOUNDFULLDUPLEX ;
typedef int LPDIRECTSOUNDCAPTUREBUFFER8 ;
typedef int LPDIRECTSOUNDBUFFER8 ;
typedef scalar_t__ HRESULT ;
typedef int DSCBufferDesc ;
typedef TYPE_1__ DSCBUFFERDESC ;
typedef int DSBufferDesc ;
typedef TYPE_1__ DSBUFFERDESC ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int *,TYPE_1__*,TYPE_1__*,int ,int ,int **,int *,int *,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_23;
    LPDIRECTSOUNDFULLDUPLEX VAR_24 = ((void*)0);
    DSCBUFFERDESC VAR_25;
    DSBUFFERDESC VAR_26;
    LPDIRECTSOUNDCAPTUREBUFFER8 VAR_27;
    LPDIRECTSOUNDBUFFER8 VAR_28;
    WAVEFORMATEX VAR_29;

    FUNC_7("Testing IDirectSoundFullDuplex\n");


    VAR_23=FUNC_0(&VAR_2, ((void*)0),
                        VAR_1, &VAR_18,
                        (void**)&VAR_24);
    FUNC_5(VAR_23==VAR_20||VAR_23==VAR_19||VAR_23==VAR_0,
       "CoCreateInstance(CLSID_DirectSoundFullDuplex) failed: 0x%08x\n", VAR_23);
    if (VAR_23==VAR_19) {
        FUNC_7("  Class Not Registered\n");
        return;
    } else if (VAR_23==VAR_0) {
        FUNC_7("  Class Not Available\n");
        return;
    }
    if (VAR_24)
        FUNC_2(VAR_24, VAR_17, ((void*)0), ((void*)0));



    VAR_23=FUNC_0(&VAR_2, ((void*)0),
                        VAR_1, &VAR_18,
                        (void**)&VAR_24);
    FUNC_5(VAR_23==VAR_20,"CoCreateInstance(CLSID_DirectSoundFullDuplex) failed: 0x%08x\n", VAR_23);
    if (VAR_24)
        FUNC_2(VAR_24, VAR_17, &VAR_6,
                                    &VAR_7);



    VAR_23=FUNC_0(&VAR_2, ((void*)0),
                        VAR_1, &VAR_18,
                        (void**)&VAR_24);
    FUNC_5(VAR_23==VAR_20,"CoCreateInstance(CLSID_DirectSoundFullDuplex) failed: 0x%08x\n", VAR_23);
    if (VAR_24)
        FUNC_2(VAR_24, VAR_17, &VAR_8,
                                    &VAR_9);



    VAR_23=FUNC_0(&VAR_2, ((void*)0),
                        VAR_1, &VAR_3,
                        (void**)&VAR_24);
    FUNC_5(VAR_23==VAR_16,
       "CoCreateInstance(CLSID_DirectSoundFullDuplex,CLSID_DirectSoundPrivate) "
       "should have failed: 0x%08x\n", VAR_23);

    FUNC_3(&VAR_29, sizeof(VAR_29));
    VAR_29.wFormatTag = VAR_22;
    VAR_29.nChannels = 1;
    VAR_29.nSamplesPerSec = 8000;
    VAR_29.wBitsPerSample = 16;
    VAR_29.nBlockAlign = (VAR_29.wBitsPerSample * VAR_29.nChannels) / 8;
    VAR_29.nAvgBytesPerSec = VAR_29.nSamplesPerSec * VAR_29.nBlockAlign;

    FUNC_3(&VAR_25, sizeof(VAR_25));
    VAR_25.dwSize = sizeof(VAR_25);
    VAR_25.dwFlags = VAR_5;
    VAR_25.dwBufferBytes = 8192;
    VAR_25.lpwfxFormat = &VAR_29;

    FUNC_3(&VAR_26, sizeof(VAR_26));
    VAR_26.dwSize = sizeof(VAR_26);
    VAR_26.dwFlags = VAR_4;
    VAR_26.dwBufferBytes = 8192;
    VAR_26.lpwfxFormat = &VAR_29;


    VAR_23=FUNC_6(((void*)0),((void*)0),&VAR_25,&VAR_26,
                                    FUNC_4(),VAR_13 ,&VAR_24,&VAR_27,
                                    &VAR_28,((void*)0));
    FUNC_5(VAR_23==VAR_14||VAR_23==VAR_12||VAR_23==VAR_10||VAR_23==VAR_15||VAR_23==VAR_11,
       "DirectSoundFullDuplexCreate(NULL,NULL) failed: %08x\n",VAR_23);
    if (VAR_23==VAR_20 && VAR_24)
        FUNC_2(VAR_24, VAR_21, ((void*)0), ((void*)0));


    VAR_23=FUNC_6(&VAR_6,
                                    &VAR_7,&VAR_25,
                                    &VAR_26,FUNC_4(),VAR_13,&VAR_24,
                                    &VAR_27,&VAR_28,((void*)0));
    FUNC_5(VAR_23==VAR_14||VAR_23==VAR_12||VAR_23==VAR_10||VAR_23==VAR_15||VAR_23==VAR_11,
       "DirectSoundFullDuplexCreate(DSDEVID_DefaultCapture,"
       "DSDEVID_DefaultPlayback) failed: %08x\n", VAR_23);
    if (VAR_23==VAR_14 && VAR_24)
        FUNC_2(VAR_24, VAR_21, ((void*)0), ((void*)0));


    VAR_23=FUNC_6(&VAR_8,
                                    &VAR_9,
                                    &VAR_25,&VAR_26,FUNC_4(),VAR_13,
                                    &VAR_24,&VAR_27,&VAR_28,((void*)0));
    FUNC_5(VAR_23==VAR_14||VAR_23==VAR_12||VAR_23==VAR_10||VAR_23==VAR_15||VAR_23==VAR_11,
       "DirectSoundFullDuplexCreate(DSDEVID_DefaultVoiceCapture,"
       "DSDEVID_DefaultVoicePlayback) failed: %08x\n", VAR_23);
    if (VAR_23==VAR_14 && VAR_24)
        FUNC_2(VAR_24, VAR_21, ((void*)0), ((void*)0));


    VAR_23=FUNC_6(&VAR_9,
                                    &VAR_8,
                                    &VAR_25,&VAR_26,FUNC_4(),VAR_13,
                                    &VAR_24,&VAR_27,&VAR_28,((void*)0));
    FUNC_5(VAR_23==VAR_12||VAR_23==VAR_11,
       "DirectSoundFullDuplexCreate(DSDEVID_DefaultVoicePlayback,"
       "DSDEVID_DefaultVoiceCapture) should have failed: %08x\n", VAR_23);
    if (VAR_23==VAR_14 && VAR_24)
        FUNC_1(VAR_24);
}
