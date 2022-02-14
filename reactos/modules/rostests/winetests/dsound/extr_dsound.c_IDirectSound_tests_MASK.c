
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCLASSFACTORY ;
typedef int IUnknown ;
typedef int IDirectSound ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int **,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_20;
    IDirectSound *VAR_21=(IDirectSound*)0xdeadbeef;
    LPCLASSFACTORY VAR_22=((void*)0);

    FUNC_7("Testing IDirectSound\n");

    VAR_20=FUNC_1(&VAR_2, VAR_1, ((void*)0),
                        &VAR_14, (void**)&VAR_22);
    FUNC_5(VAR_20==VAR_18,"CoGetClassObject(CLSID_DirectSound, IID_IClassFactory) "
       "failed: %08x\n", VAR_20);

    VAR_20=FUNC_1(&VAR_2, VAR_1, ((void*)0),
                        &VAR_16, (void**)&VAR_22);
    FUNC_5(VAR_20==VAR_18,"CoGetClassObject(CLSID_DirectSound, IID_IUnknown) "
       "failed: %08x\n", VAR_20);


    VAR_20=FUNC_0(&VAR_2, (IUnknown*)&VAR_21, VAR_1,
                        &VAR_15, (void**)&VAR_21);
    FUNC_5(VAR_20==VAR_0 || FUNC_4(VAR_20==VAR_8),
       "DirectMusicPerformance create failed: %08x, expected CLASS_E_NOAGGREGATION\n", VAR_20);


    VAR_20=FUNC_0(&VAR_2, ((void*)0), VAR_1,
                        &VAR_15, (void**)&VAR_21);
    FUNC_5(VAR_20==VAR_18,"CoCreateInstance(CLSID_DirectSound) failed: %08x\n", VAR_20);
    if (VAR_21)
        FUNC_3(VAR_21, VAR_13, ((void*)0));



    VAR_20=FUNC_0(&VAR_2, ((void*)0), VAR_1,
                        &VAR_15, (void**)&VAR_21);
    FUNC_5(VAR_20==VAR_18,"CoCreateInstance(CLSID_DirectSound) failed: %08x\n", VAR_20);
    if (VAR_21)
        FUNC_3(VAR_21, VAR_13, &VAR_4);



    VAR_20=FUNC_0(&VAR_2, ((void*)0), VAR_1,
                        &VAR_15, (void**)&VAR_21);
    FUNC_5(VAR_20==VAR_18,"CoCreateInstance(CLSID_DirectSound) failed: %08x\n", VAR_20);
    if (VAR_21)
        FUNC_3(VAR_21, VAR_13, &VAR_6);



    VAR_20=FUNC_0(&VAR_2, ((void*)0), VAR_1,
                        &VAR_3, (void**)&VAR_21);
    FUNC_5(VAR_20==VAR_12,
       "CoCreateInstance(CLSID_DirectSound,CLSID_DirectSoundPrivate) "
       "should have failed: %08x\n",VAR_20);



    VAR_20=FUNC_0(&VAR_3, ((void*)0), VAR_1,
                        &VAR_15, (void**)&VAR_21);
    FUNC_5(VAR_20==VAR_17,
       "CoCreateInstance(CLSID_DirectSoundPrivate,IID_IDirectSound) "
       "should have failed: %08x\n",VAR_20);


    VAR_20=FUNC_6(((void*)0),&VAR_21,((void*)0));
    FUNC_5(VAR_20==VAR_10||VAR_20==VAR_9||VAR_20==VAR_7||VAR_20==VAR_11,
       "DirectSoundCreate(NULL) failed: %08x\n",VAR_20);
    if (VAR_20==VAR_18 && VAR_21)
        FUNC_3(VAR_21, VAR_19, ((void*)0));


    VAR_20=FUNC_6(&VAR_4,&VAR_21,((void*)0));
    FUNC_5(VAR_20==VAR_10||VAR_20==VAR_9||VAR_20==VAR_7||VAR_20==VAR_11,
       "DirectSoundCreate(DSDEVID_DefaultPlayback) failed: %08x\n", VAR_20);
    if (VAR_20==VAR_10 && VAR_21)
        FUNC_3(VAR_21, VAR_19, ((void*)0));


    VAR_20=FUNC_6(&VAR_6,&VAR_21,((void*)0));
    FUNC_5(VAR_20==VAR_10||VAR_20==VAR_9||VAR_20==VAR_7||VAR_20==VAR_11,
       "DirectSoundCreate(DSDEVID_DefaultVoicePlayback) failed: %08x\n", VAR_20);
    if (VAR_20==VAR_10 && VAR_21)
        FUNC_3(VAR_21, VAR_19, ((void*)0));


    VAR_20=FUNC_6(&VAR_5,&VAR_21,((void*)0));
    FUNC_5(VAR_20==VAR_9,"DirectSoundCreate(DSDEVID_DefaultVoiceCapture) "
       "should have failed: %08x\n",VAR_20);
    if (VAR_20==VAR_10 && VAR_21)
        FUNC_2(VAR_21);
}
