
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WAVEFORMATEX ;
typedef int ISimpleAudioVolume ;
typedef int IMMDevice ;
typedef int IAudioSessionManager ;
typedef int IAudioClient ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int **) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int *,int ,int *,void**) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,float*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,float,int *) ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 float FUNC_14 (float) ;
 int VAR_11 ;
 int FUNC_15 (int,char*,float) ;

__attribute__((used)) static void FUNC_16(void)
{
    IMMDevice *VAR_12;
    IAudioClient *VAR_13;
    IAudioSessionManager *VAR_14;
    ISimpleAudioVolume *VAR_15;
    GUID VAR_16;
    float VAR_17;
    HRESULT VAR_18;
    WAVEFORMATEX *VAR_19;

    FUNC_0(&VAR_16);

    VAR_18 = FUNC_9(VAR_8, &VAR_5,
            VAR_2, ((void*)0), (void**)&VAR_14);
    FUNC_15((VAR_18 == VAR_7)^(VAR_14 == ((void*)0)), "Activate %08x &out pointer\n", VAR_18);
    FUNC_15(VAR_18 == VAR_7, "Activate failed: %08x\n", VAR_18);

    VAR_18 = FUNC_6(VAR_14, &VAR_16,
            VAR_3, &VAR_15);
    FUNC_15(VAR_18 == VAR_7, "GetSimpleAudioVolume failed: %08x\n", VAR_18);

    VAR_18 = FUNC_13(VAR_15, 0.6f, ((void*)0));
    FUNC_15(VAR_18 == VAR_7, "SetMasterVolume failed: %08x\n", VAR_18);


    FUNC_12(VAR_15);
    FUNC_7(VAR_14);



    VAR_18 = FUNC_8(VAR_11, VAR_9,
            VAR_10, &VAR_12);
    if(VAR_18 == VAR_7){
        WAVEFORMATEX *VAR_20;
        IAudioClient *VAR_21;
        ISimpleAudioVolume *VAR_22;
        IAudioSessionManager *VAR_23;

        VAR_18 = FUNC_9(VAR_12, &VAR_5,
                VAR_2, ((void*)0), (void**)&VAR_23);
        FUNC_15((VAR_18 == VAR_7)^(VAR_23 == ((void*)0)), "Activate %08x &out pointer\n", VAR_18);
        FUNC_15(VAR_18 == VAR_7, "Activate failed: %08x\n", VAR_18);

        VAR_18 = FUNC_6(VAR_23, &VAR_16,
                VAR_3, &VAR_22);
        FUNC_15(VAR_18 == VAR_7, "GetSimpleAudioVolume failed: %08x\n", VAR_18);

        VAR_17 = 0.5f;
        VAR_18 = FUNC_11(VAR_22, &VAR_17);
        FUNC_15(VAR_18 == VAR_7, "GetMasterVolume failed: %08x\n", VAR_18);

        FUNC_12(VAR_22);
        FUNC_7(VAR_23);

        VAR_18 = FUNC_9(VAR_12, &VAR_4,
                VAR_2, ((void*)0), (void**)&VAR_21);
        FUNC_15(VAR_18 == VAR_7, "Activate failed: %08x\n", VAR_18);

        FUNC_10(VAR_12);

        VAR_18 = FUNC_2(VAR_21, &VAR_20);
        FUNC_15(VAR_18 == VAR_7, "GetMixFormat failed: %08x\n", VAR_18);

        VAR_18 = FUNC_4(VAR_21, VAR_0,
                0, 5000000, 0, VAR_20, &VAR_16);
        FUNC_15(VAR_18 == VAR_7, "Initialize failed: %08x\n", VAR_18);

        FUNC_1(VAR_20);

        if(VAR_18 == VAR_7){
            VAR_18 = FUNC_3(VAR_21, &VAR_6,
                    (void**)&VAR_22);
            FUNC_15(VAR_18 == VAR_7, "GetService failed: %08x\n", VAR_18);
        }
        if(VAR_18 == VAR_7){
            VAR_17 = 0.5f;
            VAR_18 = FUNC_11(VAR_22, &VAR_17);
            FUNC_15(VAR_18 == VAR_7, "GetMasterVolume failed: %08x\n", VAR_18);

            FUNC_12(VAR_22);
        }

        FUNC_5(VAR_21);
    }

    VAR_18 = FUNC_9(VAR_8, &VAR_4, VAR_2,
            ((void*)0), (void**)&VAR_13);
    FUNC_15((VAR_18 == VAR_7)^(VAR_13 == ((void*)0)), "Activate %08x &out pointer\n", VAR_18);
    FUNC_15(VAR_18 == VAR_7, "Activation failed with %08x\n", VAR_18);
    if(VAR_18 != VAR_7)
        return;

    VAR_18 = FUNC_2(VAR_13, &VAR_19);
    FUNC_15(VAR_18 == VAR_7, "GetMixFormat failed: %08x\n", VAR_18);

    VAR_18 = FUNC_4(VAR_13, VAR_0,
            VAR_1, 5000000, 0, VAR_19, &VAR_16);
    FUNC_15(VAR_18 == VAR_7, "Initialize failed: %08x\n", VAR_18);

    VAR_18 = FUNC_3(VAR_13, &VAR_6, (void**)&VAR_15);
    FUNC_15(VAR_18 == VAR_7, "GetService failed: %08x\n", VAR_18);
    if(VAR_18 == VAR_7){
        VAR_17 = 0.5f;
        VAR_18 = FUNC_11(VAR_15, &VAR_17);
        FUNC_15(VAR_18 == VAR_7, "GetMasterVolume failed: %08x\n", VAR_18);
        FUNC_15(FUNC_14(VAR_17 - 0.6f) < 0.05f, "Got wrong volume: %f\n", VAR_17);

        FUNC_12(VAR_15);
    }

    FUNC_1(VAR_19);
    FUNC_5(VAR_13);
}
