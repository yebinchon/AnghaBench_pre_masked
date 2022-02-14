
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t nChannels; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef size_t UINT32 ;
typedef int IChannelAudioVolume ;
typedef int IAudioClient ;
typedef float HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
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
 float FUNC_12 (int *,int,float*,int *) ;
 float FUNC_13 (int *,size_t,float,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 float FUNC_14 (int ,int *,int ,int *,void**) ;
 float VAR_6 ;
 float VAR_7 ;
 int VAR_8 ;
 float FUNC_15 (float) ;
 int FUNC_16 (int,char*,...) ;

__attribute__((used)) static void FUNC_17(void)
{
    IAudioClient *VAR_9;
    IChannelAudioVolume *VAR_10;
    WAVEFORMATEX *VAR_11;
    UINT32 VAR_12, VAR_13;
    HRESULT VAR_14;
    float VAR_15, *VAR_16;

    VAR_14 = FUNC_14(VAR_8, &VAR_4, VAR_2,
            ((void*)0), (void**)&VAR_9);
    FUNC_16(VAR_14 == VAR_7, "Activation failed with %08x\n", VAR_14);
    if(VAR_14 != VAR_7)
        return;

    VAR_14 = FUNC_4(VAR_9, &VAR_11);
    FUNC_16(VAR_14 == VAR_7, "GetMixFormat failed: %08x\n", VAR_14);

    VAR_14 = FUNC_6(VAR_9, VAR_0,
            VAR_1, 5000000, 0, VAR_11, ((void*)0));
    FUNC_16(VAR_14 == VAR_7, "Initialize failed: %08x\n", VAR_14);

    VAR_14 = FUNC_5(VAR_9, &VAR_5, (void**)&VAR_10);
    FUNC_16(VAR_14 == VAR_7, "GetService failed: %08x\n", VAR_14);
    if(VAR_14 != VAR_7)
        return;

    VAR_14 = FUNC_9(VAR_10, ((void*)0));
    FUNC_16(VAR_14 == VAR_6, "GetChannelCount gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_9(VAR_10, &VAR_12);
    FUNC_16(VAR_14 == VAR_7, "GetChannelCount failed: %08x\n", VAR_14);
    FUNC_16(VAR_12 == VAR_11->nChannels, "GetChannelCount gave wrong number of channels: %d\n", VAR_12);

    VAR_14 = FUNC_10(VAR_10, VAR_11->nChannels, ((void*)0));
    FUNC_16(VAR_14 == VAR_6, "GetChannelCount gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_10(VAR_10, VAR_11->nChannels, &VAR_15);
    FUNC_16(VAR_14 == VAR_3, "GetChannelCount gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_10(VAR_10, 0, ((void*)0));
    FUNC_16(VAR_14 == VAR_6, "GetChannelCount gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_10(VAR_10, 0, &VAR_15);
    FUNC_16(VAR_14 == VAR_7, "GetChannelCount failed: %08x\n", VAR_14);
    FUNC_16(VAR_15 == 1.f, "Channel volume was not 1: %f\n", VAR_15);

    VAR_14 = FUNC_13(VAR_10, VAR_11->nChannels, -1.f, ((void*)0));
    FUNC_16(VAR_14 == VAR_3, "SetChannelVolume gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_13(VAR_10, 0, -1.f, ((void*)0));
    FUNC_16(VAR_14 == VAR_3, "SetChannelVolume gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_13(VAR_10, 0, 2.f, ((void*)0));
    FUNC_16(VAR_14 == VAR_3, "SetChannelVolume gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_13(VAR_10, 0, 0.2f, ((void*)0));
    FUNC_16(VAR_14 == VAR_7, "SetChannelVolume failed: %08x\n", VAR_14);

    VAR_14 = FUNC_10(VAR_10, 0, &VAR_15);
    FUNC_16(VAR_14 == VAR_7, "GetChannelCount failed: %08x\n", VAR_14);
    FUNC_16(FUNC_15(VAR_15 - 0.2f) < 0.05f, "Channel volume wasn't 0.2: %f\n", VAR_15);

    VAR_14 = FUNC_8(VAR_10, 0, ((void*)0));
    FUNC_16(VAR_14 == VAR_6, "GetAllVolumes gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_8(VAR_10, VAR_11->nChannels, ((void*)0));
    FUNC_16(VAR_14 == VAR_6, "GetAllVolumes gave wrong error: %08x\n", VAR_14);

    VAR_16 = FUNC_2(FUNC_1(), 0, VAR_11->nChannels * sizeof(float));
    FUNC_16(VAR_16 != ((void*)0), "HeapAlloc failed\n");

    VAR_14 = FUNC_8(VAR_10, VAR_11->nChannels - 1, VAR_16);
    FUNC_16(VAR_14 == VAR_3, "GetAllVolumes gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_8(VAR_10, VAR_11->nChannels, VAR_16);
    FUNC_16(VAR_14 == VAR_7, "GetAllVolumes failed: %08x\n", VAR_14);
    FUNC_16(FUNC_15(VAR_16[0] - 0.2f) < 0.05f, "Channel 0 volume wasn't 0.2: %f\n", VAR_15);
    for(VAR_13 = 1; VAR_13 < VAR_11->nChannels; ++VAR_13)
        FUNC_16(VAR_16[VAR_13] == 1.f, "Channel %d volume is not 1: %f\n", VAR_13, VAR_16[VAR_13]);

    VAR_14 = FUNC_12(VAR_10, 0, ((void*)0), ((void*)0));
    FUNC_16(VAR_14 == VAR_6, "SetAllVolumes gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_12(VAR_10, VAR_11->nChannels, ((void*)0), ((void*)0));
    FUNC_16(VAR_14 == VAR_6, "SetAllVolumes gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_12(VAR_10, VAR_11->nChannels - 1, VAR_16, ((void*)0));
    FUNC_16(VAR_14 == VAR_3, "SetAllVolumes gave wrong error: %08x\n", VAR_14);

    VAR_14 = FUNC_12(VAR_10, VAR_11->nChannels, VAR_16, ((void*)0));
    FUNC_16(VAR_14 == VAR_7, "SetAllVolumes failed: %08x\n", VAR_14);

    VAR_14 = FUNC_13(VAR_10, 0, 1.0f, ((void*)0));
    FUNC_16(VAR_14 == VAR_7, "SetChannelVolume failed: %08x\n", VAR_14);

    FUNC_3(FUNC_1(), 0, VAR_16);
    FUNC_11(VAR_10);
    FUNC_7(VAR_9);
    FUNC_0(VAR_11);
}
