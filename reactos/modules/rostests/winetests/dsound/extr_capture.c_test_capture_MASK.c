
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPDIRECTSOUNDCAPTURE ;
typedef int * LPCLASSFACTORY ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int **,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    HRESULT VAR_18;
    LPDIRECTSOUNDCAPTURE VAR_19=((void*)0);
    LPCLASSFACTORY VAR_20=((void*)0);

    FUNC_6("Testing IDirectSoundCapture\n");

    VAR_18=FUNC_1(&VAR_1, VAR_0, ((void*)0),
                        &VAR_12, (void**)&VAR_20);
    FUNC_4(VAR_18==VAR_16,"CoGetClassObject(CLSID_DirectSoundCapture, IID_IClassFactory) "
       "failed: %08x\n", VAR_18);

    VAR_18=FUNC_1(&VAR_1, VAR_0, ((void*)0),
                        &VAR_14, (void**)&VAR_20);
    FUNC_4(VAR_18==VAR_16,"CoGetClassObject(CLSID_DirectSoundCapture, IID_IUnknown) "
       "failed: %08x\n", VAR_18);


    VAR_18=FUNC_0(&VAR_1, ((void*)0), VAR_0,
                        &VAR_13, (void**)&VAR_19);
    FUNC_4(VAR_18==VAR_16||VAR_18==VAR_15,"CoCreateInstance(CLSID_DirectSoundCapture) failed: %08x\n", VAR_18);
    if (VAR_18==VAR_15) {
        FUNC_6("  Class Not Registered\n");
        return;
    }
    if (VAR_19)
        FUNC_3(VAR_19, VAR_11, ((void*)0));



    VAR_18=FUNC_0(&VAR_1, ((void*)0), VAR_0,
                        &VAR_13, (void**)&VAR_19);
    FUNC_4(VAR_18==VAR_16,"CoCreateInstance(CLSID_DirectSoundCapture) failed: %08x\n", VAR_18);
    if (VAR_19)
        FUNC_3(VAR_19, VAR_11, &VAR_3);



    VAR_18=FUNC_0(&VAR_1, ((void*)0), VAR_0,
                        &VAR_13, (void**)&VAR_19);
    FUNC_4(VAR_18==VAR_16,"CoCreateInstance(CLSID_DirectSoundCapture) failed: %08x\n", VAR_18);
    if (VAR_19)
        FUNC_3(VAR_19, VAR_11, &VAR_4);



    VAR_18=FUNC_0(&VAR_1, ((void*)0), VAR_0,
                        &VAR_2, (void**)&VAR_19);
    FUNC_4(VAR_18==VAR_10,
       "CoCreateInstance(CLSID_DirectSoundCapture,CLSID_DirectSoundPrivate) "
       "should have failed: %08x\n",VAR_18);


    VAR_18=FUNC_5(((void*)0),&VAR_19,((void*)0));
    FUNC_4(VAR_18==VAR_8||VAR_18==VAR_7||VAR_18==VAR_6||VAR_18==VAR_9,
       "DirectSoundCaptureCreate(NULL) failed: %08x\n",VAR_18);
    if (VAR_18==VAR_16 && VAR_19)
        FUNC_3(VAR_19, VAR_17, ((void*)0));


    VAR_18=FUNC_5(&VAR_3,&VAR_19,((void*)0));
    FUNC_4(VAR_18==VAR_8||VAR_18==VAR_7||VAR_18==VAR_6||VAR_18==VAR_9,
       "DirectSoundCaptureCreate(DSDEVID_DefaultCapture) failed: %08x\n", VAR_18);
    if (VAR_18==VAR_8 && VAR_19)
        FUNC_3(VAR_19, VAR_17, ((void*)0));


    VAR_18=FUNC_5(&VAR_4,&VAR_19,((void*)0));
    FUNC_4(VAR_18==VAR_8||VAR_18==VAR_7||VAR_18==VAR_6||VAR_18==VAR_9,
       "DirectSoundCaptureCreate(DSDEVID_DefaultVoiceCapture) failed: %08x\n", VAR_18);
    if (VAR_18==VAR_8 && VAR_19)
        FUNC_3(VAR_19, VAR_17, ((void*)0));


    VAR_18=FUNC_5(&VAR_5,&VAR_19,((void*)0));
    FUNC_4(VAR_18==VAR_7,
       "DirectSoundCaptureCreate(DSDEVID_DefaultVoicePlatback) "
       "should have failed: %08x\n",VAR_18);
    if (VAR_18==VAR_8 && VAR_19)
        FUNC_2(VAR_19);
}
