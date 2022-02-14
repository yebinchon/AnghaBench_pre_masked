
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WAVEFORMATEX ;
typedef int ISimpleAudioVolume ;
typedef int IAudioClient ;
typedef float HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 float VAR_3 ;
 scalar_t__ VAR_4 ;
 float FUNC_1 (int *,int **) ;
 float FUNC_2 (int *,int *,void**) ;
 float FUNC_3 (int *,int ,int ,int,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 float FUNC_5 (int ,int *,int ,int *,void**) ;
 float FUNC_6 (int *,float*) ;
 float FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *) ;
 float FUNC_9 (int *,float,int *) ;
 float FUNC_10 (int *,scalar_t__,int *) ;
 float VAR_7 ;
 float VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 float FUNC_11 (float) ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    IAudioClient *VAR_11;
    ISimpleAudioVolume *VAR_12;
    WAVEFORMATEX *VAR_13;
    HRESULT VAR_14;
    float VAR_15;
    BOOL VAR_16;

    VAR_14 = FUNC_5(VAR_10, &VAR_5, VAR_2,
            ((void*)0), (void**)&VAR_11);
    FUNC_12(VAR_14 == VAR_8, "Activation failed with %08x\n", VAR_14);
    if(VAR_14 != VAR_8)
        return;

    VAR_14 = FUNC_1(VAR_11, &VAR_13);
    FUNC_12(VAR_14 == VAR_8, "GetMixFormat failed: %08x\n", VAR_14);

    VAR_14 = FUNC_3(VAR_11, VAR_0,
            VAR_1, 5000000, 0, VAR_13, ((void*)0));
    FUNC_12(VAR_14 == VAR_8, "Initialize failed: %08x\n", VAR_14);

    if(VAR_14 == VAR_8){
        VAR_14 = FUNC_2(VAR_11, &VAR_6, (void**)&VAR_12);
        FUNC_12(VAR_14 == VAR_8, "GetService failed: %08x\n", VAR_14);
    }
    if(VAR_14 != VAR_8){
        FUNC_4(VAR_11);
        FUNC_0(VAR_13);
        return;
    }

    VAR_14 = FUNC_6(VAR_12, ((void*)0));
    FUNC_12(VAR_14 == VAR_7, "GetMasterVolume gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_6(VAR_12, &VAR_15);
    FUNC_12(VAR_14 == VAR_8, "GetMasterVolume failed: %08x\n", VAR_14);
    FUNC_12(VAR_15 == 1.f, "Master volume wasn't 1: %f\n", VAR_15);

    VAR_14 = FUNC_9(VAR_12, -1.f, ((void*)0));
    FUNC_12(VAR_14 == VAR_3, "SetMasterVolume gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_9(VAR_12, 2.f, ((void*)0));
    FUNC_12(VAR_14 == VAR_3, "SetMasterVolume gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_9(VAR_12, 0.2f, ((void*)0));
    FUNC_12(VAR_14 == VAR_8, "SetMasterVolume failed: %08x\n", VAR_14);

    VAR_14 = FUNC_6(VAR_12, &VAR_15);
    FUNC_12(VAR_14 == VAR_8, "GetMasterVolume failed: %08x\n", VAR_14);
    FUNC_12(FUNC_11(VAR_15 - 0.2f) < 0.05f, "Master volume wasn't 0.2: %f\n", VAR_15);

    VAR_14 = FUNC_7(VAR_12, ((void*)0));
    FUNC_12(VAR_14 == VAR_7, "GetMute gave wrong error: %08x\n", VAR_14);

    VAR_16 = VAR_9;
    VAR_14 = FUNC_7(VAR_12, &VAR_16);
    FUNC_12(VAR_14 == VAR_8, "GetMute failed: %08x\n", VAR_14);
    FUNC_12(VAR_16 == VAR_4, "Session is already muted\n");

    VAR_14 = FUNC_10(VAR_12, VAR_9, ((void*)0));
    FUNC_12(VAR_14 == VAR_8, "SetMute failed: %08x\n", VAR_14);

    VAR_16 = VAR_4;
    VAR_14 = FUNC_7(VAR_12, &VAR_16);
    FUNC_12(VAR_14 == VAR_8, "GetMute failed: %08x\n", VAR_14);
    FUNC_12(VAR_16 == VAR_9, "Session should have been muted\n");

    VAR_14 = FUNC_6(VAR_12, &VAR_15);
    FUNC_12(VAR_14 == VAR_8, "GetMasterVolume failed: %08x\n", VAR_14);
    FUNC_12(FUNC_11(VAR_15 - 0.2f) < 0.05f, "Master volume wasn't 0.2: %f\n", VAR_15);

    VAR_14 = FUNC_9(VAR_12, 1.f, ((void*)0));
    FUNC_12(VAR_14 == VAR_8, "SetMasterVolume failed: %08x\n", VAR_14);

    VAR_16 = VAR_4;
    VAR_14 = FUNC_7(VAR_12, &VAR_16);
    FUNC_12(VAR_14 == VAR_8, "GetMute failed: %08x\n", VAR_14);
    FUNC_12(VAR_16 == VAR_9, "Session should have been muted\n");

    VAR_14 = FUNC_10(VAR_12, VAR_4, ((void*)0));
    FUNC_12(VAR_14 == VAR_8, "SetMute failed: %08x\n", VAR_14);

    FUNC_8(VAR_12);
    FUNC_4(VAR_11);
    FUNC_0(VAR_13);
}
