
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t nChannels; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef size_t UINT32 ;
typedef int IAudioStreamVolume ;
typedef int IAudioClient ;
typedef float HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 float VAR_2 ;
 float VAR_3 ;
 int FUNC_1 () ;
 float* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,float*) ;
 float FUNC_4 (int *,TYPE_1__**) ;
 float FUNC_5 (int *,int *,void**) ;
 float FUNC_6 (int *,int ,int ,int,int ,TYPE_1__*,int *) ;
 int FUNC_7 (int *) ;
 float FUNC_8 (int *,int,float*) ;
 float FUNC_9 (int *,size_t*) ;
 float FUNC_10 (int *,size_t,float*) ;
 int FUNC_11 (int *) ;
 float FUNC_12 (int *,int,float*) ;
 float FUNC_13 (int *,size_t,float) ;
 int VAR_4 ;
 int VAR_5 ;
 float FUNC_14 (int ,int *,int ,int *,void**) ;
 float VAR_6 ;
 int VAR_7 ;
 float FUNC_15 (float) ;
 int FUNC_16 (int,char*,...) ;

__attribute__((used)) static void FUNC_17(void)
{
    IAudioClient *VAR_8;
    IAudioStreamVolume *VAR_9;
    WAVEFORMATEX *VAR_10;
    UINT32 VAR_11, VAR_12;
    HRESULT VAR_13;
    float VAR_14, *VAR_15;

    VAR_13 = FUNC_14(VAR_7, &VAR_4, VAR_1,
            ((void*)0), (void**)&VAR_8);
    FUNC_16(VAR_13 == VAR_6, "Activation failed with %08x\n", VAR_13);
    if(VAR_13 != VAR_6)
        return;

    VAR_13 = FUNC_4(VAR_8, &VAR_10);
    FUNC_16(VAR_13 == VAR_6, "GetMixFormat failed: %08x\n", VAR_13);

    VAR_13 = FUNC_6(VAR_8, VAR_0, 0, 5000000,
            0, VAR_10, ((void*)0));
    FUNC_16(VAR_13 == VAR_6, "Initialize failed: %08x\n", VAR_13);

    if(VAR_13 == VAR_6){
        VAR_13 = FUNC_5(VAR_8, &VAR_5, (void**)&VAR_9);
        FUNC_16(VAR_13 == VAR_6, "GetService failed: %08x\n", VAR_13);
    }
    if(VAR_13 != VAR_6){
        FUNC_7(VAR_8);
        FUNC_0(VAR_10);
        return;
    }

    VAR_13 = FUNC_9(VAR_9, ((void*)0));
    FUNC_16(VAR_13 == VAR_3, "GetChannelCount gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_9(VAR_9, &VAR_11);
    FUNC_16(VAR_13 == VAR_6, "GetChannelCount failed: %08x\n", VAR_13);
    FUNC_16(VAR_11 == VAR_10->nChannels, "GetChannelCount gave wrong number of channels: %d\n", VAR_11);

    VAR_13 = FUNC_10(VAR_9, VAR_10->nChannels, ((void*)0));
    FUNC_16(VAR_13 == VAR_3, "GetChannelCount gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_10(VAR_9, VAR_10->nChannels, &VAR_14);
    FUNC_16(VAR_13 == VAR_2, "GetChannelCount gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_10(VAR_9, 0, ((void*)0));
    FUNC_16(VAR_13 == VAR_3, "GetChannelCount gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_10(VAR_9, 0, &VAR_14);
    FUNC_16(VAR_13 == VAR_6, "GetChannelCount failed: %08x\n", VAR_13);
    FUNC_16(VAR_14 == 1.f, "Channel volume was not 1: %f\n", VAR_14);

    VAR_13 = FUNC_13(VAR_9, VAR_10->nChannels, -1.f);
    FUNC_16(VAR_13 == VAR_2, "SetChannelVolume gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_13(VAR_9, 0, -1.f);
    FUNC_16(VAR_13 == VAR_2, "SetChannelVolume gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_13(VAR_9, 0, 2.f);
    FUNC_16(VAR_13 == VAR_2, "SetChannelVolume gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_13(VAR_9, 0, 0.2f);
    FUNC_16(VAR_13 == VAR_6, "SetChannelVolume failed: %08x\n", VAR_13);

    VAR_13 = FUNC_10(VAR_9, 0, &VAR_14);
    FUNC_16(VAR_13 == VAR_6, "GetChannelCount failed: %08x\n", VAR_13);
    FUNC_16(FUNC_15(VAR_14 - 0.2f) < 0.05f, "Channel volume wasn't 0.2: %f\n", VAR_14);

    VAR_13 = FUNC_8(VAR_9, 0, ((void*)0));
    FUNC_16(VAR_13 == VAR_3, "GetAllVolumes gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_8(VAR_9, VAR_10->nChannels, ((void*)0));
    FUNC_16(VAR_13 == VAR_3, "GetAllVolumes gave wrong error: %08x\n", VAR_13);

    VAR_15 = FUNC_2(FUNC_1(), 0, VAR_10->nChannels * sizeof(float));
    FUNC_16(VAR_15 != ((void*)0), "HeapAlloc failed\n");

    VAR_13 = FUNC_8(VAR_9, VAR_10->nChannels - 1, VAR_15);
    FUNC_16(VAR_13 == VAR_2, "GetAllVolumes gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_8(VAR_9, VAR_10->nChannels, VAR_15);
    FUNC_16(VAR_13 == VAR_6, "GetAllVolumes failed: %08x\n", VAR_13);
    FUNC_16(FUNC_15(VAR_15[0] - 0.2f) < 0.05f, "Channel 0 volume wasn't 0.2: %f\n", VAR_14);
    for(VAR_12 = 1; VAR_12 < VAR_10->nChannels; ++VAR_12)
        FUNC_16(VAR_15[VAR_12] == 1.f, "Channel %d volume is not 1: %f\n", VAR_12, VAR_15[VAR_12]);

    VAR_13 = FUNC_12(VAR_9, 0, ((void*)0));
    FUNC_16(VAR_13 == VAR_3, "SetAllVolumes gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_12(VAR_9, VAR_10->nChannels, ((void*)0));
    FUNC_16(VAR_13 == VAR_3, "SetAllVolumes gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_12(VAR_9, VAR_10->nChannels - 1, VAR_15);
    FUNC_16(VAR_13 == VAR_2, "SetAllVolumes gave wrong error: %08x\n", VAR_13);

    VAR_13 = FUNC_12(VAR_9, VAR_10->nChannels, VAR_15);
    FUNC_16(VAR_13 == VAR_6, "SetAllVolumes failed: %08x\n", VAR_13);

    FUNC_3(FUNC_1(), 0, VAR_15);
    FUNC_11(VAR_9);
    FUNC_7(VAR_8);
    FUNC_0(VAR_10);
}
