
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nChannels; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef int UINT32 ;
typedef int ISimpleAudioVolume ;
typedef int IChannelAudioVolume ;
typedef int IAudioStreamVolume ;
typedef int IAudioClient ;
typedef float HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 float FUNC_2 (int *,TYPE_1__**) ;
 float FUNC_3 (int *,int *,void**) ;
 float FUNC_4 (int *,int ,int ,int,int ,TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 float FUNC_6 (int *,int *) ;
 float FUNC_7 (int *,int ,float*) ;
 int FUNC_8 (int *) ;
 float FUNC_9 (int *,int ,float) ;
 float FUNC_10 (int *,int *) ;
 float FUNC_11 (int *,int ,float*) ;
 int FUNC_12 (int *) ;
 float FUNC_13 (int *,int ,float,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 float FUNC_14 (int ,int *,int ,int *,void**) ;
 float FUNC_15 (int *,float*) ;
 int FUNC_16 (int *) ;
 float FUNC_17 (int *,float,int *) ;
 float VAR_7 ;
 int VAR_8 ;
 float FUNC_18 (float) ;
 int FUNC_19 (int,char*,float,...) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static void FUNC_21(void)
{
    IAudioClient *VAR_9, *VAR_10;
    ISimpleAudioVolume *VAR_11;
    IChannelAudioVolume *VAR_12;
    IAudioStreamVolume *VAR_13;
    WAVEFORMATEX *VAR_14;
    HRESULT VAR_15;
    float VAR_16;
    GUID VAR_17;
    UINT32 VAR_18;

    VAR_15 = FUNC_0(&VAR_17);
    FUNC_19(VAR_15 == VAR_7, "CoCreateGuid failed: %08x\n", VAR_15);

    VAR_15 = FUNC_14(VAR_8, &VAR_3, VAR_2,
            ((void*)0), (void**)&VAR_9);
    FUNC_19(VAR_15 == VAR_7, "Activation failed with %08x\n", VAR_15);
    if(VAR_15 != VAR_7)
        return;

    VAR_15 = FUNC_2(VAR_9, &VAR_14);
    FUNC_19(VAR_15 == VAR_7, "GetMixFormat failed: %08x\n", VAR_15);

    VAR_15 = FUNC_4(VAR_9, VAR_0,
            VAR_1, 5000000, 0, VAR_14, &VAR_17);
    FUNC_19(VAR_15 == VAR_7, "Initialize failed: %08x\n", VAR_15);

    if(VAR_15 == VAR_7){
        VAR_15 = FUNC_3(VAR_9, &VAR_6, (void**)&VAR_11);
        FUNC_19(VAR_15 == VAR_7, "GetService (SimpleAudioVolume) failed: %08x\n", VAR_15);
    }
    if(VAR_15 != VAR_7){
        FUNC_5(VAR_9);
        FUNC_1(VAR_14);
        return;
    }

    VAR_15 = FUNC_3(VAR_9, &VAR_5, (void**)&VAR_12);
    FUNC_19(VAR_15 == VAR_7, "GetService (ChannelAudioVolume) failed: %08x\n", VAR_15);

    VAR_15 = FUNC_3(VAR_9, &VAR_4, (void**)&VAR_13);
    FUNC_19(VAR_15 == VAR_7, "GetService (AudioStreamVolume) failed: %08x\n", VAR_15);

    VAR_15 = FUNC_9(VAR_13, 0, 0.2f);
    FUNC_19(VAR_15 == VAR_7, "ASV_SetChannelVolume failed: %08x\n", VAR_15);

    VAR_15 = FUNC_13(VAR_12, 0, 0.4f, ((void*)0));
    FUNC_19(VAR_15 == VAR_7, "CAV_SetChannelVolume failed: %08x\n", VAR_15);

    VAR_15 = FUNC_17(VAR_11, 0.6f, ((void*)0));
    FUNC_19(VAR_15 == VAR_7, "SAV_SetMasterVolume failed: %08x\n", VAR_15);

    VAR_15 = FUNC_7(VAR_13, 0, &VAR_16);
    FUNC_19(VAR_15 == VAR_7, "ASV_GetChannelVolume failed: %08x\n", VAR_15);
    FUNC_19(FUNC_18(VAR_16 - 0.2f) < 0.05f, "ASV_GetChannelVolume gave wrong volume: %f\n", VAR_16);

    VAR_15 = FUNC_11(VAR_12, 0, &VAR_16);
    FUNC_19(VAR_15 == VAR_7, "CAV_GetChannelVolume failed: %08x\n", VAR_15);
    FUNC_19(FUNC_18(VAR_16 - 0.4f) < 0.05f, "CAV_GetChannelVolume gave wrong volume: %f\n", VAR_16);

    VAR_15 = FUNC_15(VAR_11, &VAR_16);
    FUNC_19(VAR_15 == VAR_7, "SAV_GetMasterVolume failed: %08x\n", VAR_15);
    FUNC_19(FUNC_18(VAR_16 - 0.6f) < 0.05f, "SAV_GetMasterVolume gave wrong volume: %f\n", VAR_16);

    VAR_15 = FUNC_14(VAR_8, &VAR_3, VAR_2,
            ((void*)0), (void**)&VAR_10);
    FUNC_19(VAR_15 == VAR_7, "Activation failed with %08x\n", VAR_15);

    if(VAR_15 == VAR_7){
        VAR_15 = FUNC_4(VAR_10, VAR_0,
                VAR_1, 5000000, 0, VAR_14, &VAR_17);
        FUNC_19(VAR_15 == VAR_7, "Initialize failed: %08x\n", VAR_15);
        if(VAR_15 != VAR_7)
            FUNC_5(VAR_10);
    }

    if(VAR_15 == VAR_7){
        IChannelAudioVolume *VAR_19;
        IAudioStreamVolume *VAR_20;

        VAR_15 = FUNC_3(VAR_10, &VAR_5, (void**)&VAR_19);
        FUNC_19(VAR_15 == VAR_7, "GetService failed: %08x\n", VAR_15);

        VAR_15 = FUNC_3(VAR_10, &VAR_4, (void**)&VAR_20);
        FUNC_19(VAR_15 == VAR_7, "GetService failed: %08x\n", VAR_15);

        VAR_15 = FUNC_11(VAR_19, 0, &VAR_16);
        FUNC_19(VAR_15 == VAR_7, "CAV_GetChannelVolume failed: %08x\n", VAR_15);
        FUNC_19(FUNC_18(VAR_16 - 0.4f) < 0.05f, "CAV_GetChannelVolume gave wrong volume: %f\n", VAR_16);

        VAR_15 = FUNC_7(VAR_20, 0, &VAR_16);
        FUNC_19(VAR_15 == VAR_7, "ASV_GetChannelVolume failed: %08x\n", VAR_15);
        FUNC_19(VAR_16 == 1.f, "ASV_GetChannelVolume gave wrong volume: %f\n", VAR_16);

        VAR_15 = FUNC_10(VAR_19, &VAR_18);
        FUNC_19(VAR_15 == VAR_7, "GetChannelCount failed: %08x\n", VAR_15);
        FUNC_19(VAR_18 == VAR_14->nChannels, "Got wrong channel count, expected %u: %u\n", VAR_14->nChannels, VAR_18);

        VAR_15 = FUNC_6(VAR_20, &VAR_18);
        FUNC_19(VAR_15 == VAR_7, "GetChannelCount failed: %08x\n", VAR_15);
        FUNC_19(VAR_18 == VAR_14->nChannels, "Got wrong channel count, expected %u: %u\n", VAR_14->nChannels, VAR_18);

        FUNC_8(VAR_20);
        FUNC_12(VAR_19);
        FUNC_5(VAR_10);
    }else
        FUNC_20("Unable to open the same device twice. Skipping session volume control tests\n");

    VAR_15 = FUNC_13(VAR_12, 0, 1.f, ((void*)0));
    FUNC_19(VAR_15 == VAR_7, "CAV_SetChannelVolume failed: %08x\n", VAR_15);

    VAR_15 = FUNC_17(VAR_11, 1.f, ((void*)0));
    FUNC_19(VAR_15 == VAR_7, "SAV_SetMasterVolume failed: %08x\n", VAR_15);

    FUNC_1(VAR_14);
    FUNC_16(VAR_11);
    FUNC_12(VAR_12);
    FUNC_8(VAR_13);
    FUNC_5(VAR_9);
}
