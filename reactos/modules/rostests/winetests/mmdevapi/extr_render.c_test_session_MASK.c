
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WAVEFORMATEX ;
typedef int ULONG ;
typedef int IMMDevice ;
typedef int IAudioSessionControl2 ;
typedef int IAudioClient ;
typedef int HRESULT ;
typedef int GUID ;
typedef int AudioSessionState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *,int ,int ,int,int ,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int ,int ,int **) ;
 int FUNC_12 (int *,int *,int ,int *,void**) ;
 int FUNC_13 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (char*,...) ;

__attribute__((used)) static void FUNC_16(void)
{
    IAudioClient *VAR_14, *VAR_15, *VAR_16;
    IAudioSessionControl2 *VAR_17, *VAR_18, *VAR_19 = ((void*)0);
    IMMDevice *VAR_20;
    GUID VAR_21;
    AudioSessionState VAR_22;
    WAVEFORMATEX *VAR_23;
    ULONG VAR_24;
    HRESULT VAR_25;

    VAR_25 = FUNC_0(&VAR_21);
    FUNC_14(VAR_25 == VAR_9, "CoCreateGuid failed: %08x\n", VAR_25);

    VAR_25 = FUNC_12(VAR_10, &VAR_5, VAR_3,
            ((void*)0), (void**)&VAR_14);
    FUNC_14(VAR_25 == VAR_9, "Activation failed with %08x\n", VAR_25);
    if (FUNC_2(VAR_25)) return;

    VAR_25 = FUNC_3(VAR_14, &VAR_23);
    FUNC_14(VAR_25 == VAR_9, "GetMixFormat failed: %08x\n", VAR_25);

    VAR_25 = FUNC_5(VAR_14, VAR_0,
            0, 5000000, 0, VAR_23, &VAR_21);
    FUNC_14(VAR_25 == VAR_9, "Initialize failed: %08x\n", VAR_25);

    if(VAR_25 == VAR_9){
        VAR_25 = FUNC_12(VAR_10, &VAR_5, VAR_3,
                ((void*)0), (void**)&VAR_15);
        FUNC_14(VAR_25 == VAR_9, "Activation failed with %08x\n", VAR_25);
    }
    if(VAR_25 != VAR_9){
        FUNC_15("Unable to open the same device twice. Skipping session tests\n");

        VAR_24 = FUNC_6(VAR_14);
        FUNC_14(VAR_24 == 0, "AudioClient wasn't released: %u\n", VAR_24);
        FUNC_1(VAR_23);
        return;
    }

    VAR_25 = FUNC_5(VAR_15, VAR_0,
            0, 5000000, 0, VAR_23, &VAR_21);
    FUNC_14(VAR_25 == VAR_9, "Initialize failed: %08x\n", VAR_25);

    VAR_25 = FUNC_11(VAR_13, VAR_11,
            VAR_12, &VAR_20);
    if(VAR_25 == VAR_9){
        VAR_25 = FUNC_12(VAR_20, &VAR_5, VAR_3,
                ((void*)0), (void**)&VAR_16);
        FUNC_14((VAR_25 == VAR_9)^(VAR_16 == ((void*)0)), "Activate %08x &out pointer\n", VAR_25);
        FUNC_14(VAR_25 == VAR_9, "Activate failed: %08x\n", VAR_25);
        FUNC_13(VAR_20);
    }
    if(VAR_25 == VAR_9){
        WAVEFORMATEX *VAR_26;

        VAR_25 = FUNC_3(VAR_16, &VAR_26);
        FUNC_14(VAR_25 == VAR_9, "GetMixFormat failed: %08x\n", VAR_25);

        VAR_25 = FUNC_5(VAR_16, VAR_0,
                0, 5000000, 0, VAR_26, &VAR_21);
        FUNC_14(VAR_25 == VAR_9, "Initialize failed for capture in rendering session: %08x\n", VAR_25);
        FUNC_1(VAR_26);
    }
    if(VAR_25 == VAR_9){
        VAR_25 = FUNC_4(VAR_16, &VAR_6, (void**)&VAR_19);
        FUNC_14(VAR_25 == VAR_9, "GetService failed: %08x\n", VAR_25);
        if(FUNC_2(VAR_25))
            VAR_19 = ((void*)0);
    }else
        FUNC_15("No capture session: %08x; skipping capture device in render session tests\n", VAR_25);

    VAR_25 = FUNC_4(VAR_14, &VAR_7, (void**)&VAR_17);
    FUNC_14(VAR_25 == VAR_4, "GetService gave wrong error: %08x\n", VAR_25);

    VAR_25 = FUNC_4(VAR_14, &VAR_6, (void**)&VAR_17);
    FUNC_14(VAR_25 == VAR_9, "GetService failed: %08x\n", VAR_25);

    VAR_25 = FUNC_4(VAR_14, &VAR_6, (void**)&VAR_18);
    FUNC_14(VAR_25 == VAR_9, "GetService failed: %08x\n", VAR_25);
    FUNC_14(VAR_17 == VAR_18, "Got different controls: %p %p\n", VAR_17, VAR_18);
    VAR_24 = FUNC_10(VAR_18);
    FUNC_14(VAR_24 != 0, "AudioSessionControl was destroyed\n");

    VAR_25 = FUNC_4(VAR_15, &VAR_6, (void**)&VAR_18);
    FUNC_14(VAR_25 == VAR_9, "GetService failed: %08x\n", VAR_25);

    VAR_25 = FUNC_9(VAR_17, ((void*)0));
    FUNC_14(VAR_25 == VAR_8, "GetState gave wrong error: %08x\n", VAR_25);

    VAR_25 = FUNC_9(VAR_17, &VAR_22);
    FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
    FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

    VAR_25 = FUNC_9(VAR_18, &VAR_22);
    FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
    FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

    if(VAR_19){
        VAR_25 = FUNC_9(VAR_19, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);
    }

    VAR_25 = FUNC_7(VAR_14);
    FUNC_14(VAR_25 == VAR_9, "Start failed: %08x\n", VAR_25);

    VAR_25 = FUNC_9(VAR_17, &VAR_22);
    FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
    FUNC_14(VAR_22 == VAR_1, "Got wrong state: %d\n", VAR_22);

    VAR_25 = FUNC_9(VAR_18, &VAR_22);
    FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
    FUNC_14(VAR_22 == VAR_1, "Got wrong state: %d\n", VAR_22);

    if(VAR_19){
        VAR_25 = FUNC_9(VAR_19, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);
    }

    VAR_25 = FUNC_8(VAR_14);
    FUNC_14(VAR_25 == VAR_9, "Start failed: %08x\n", VAR_25);

    VAR_25 = FUNC_9(VAR_17, &VAR_22);
    FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
    FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

    VAR_25 = FUNC_9(VAR_18, &VAR_22);
    FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
    FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

    if(VAR_19){
        VAR_25 = FUNC_9(VAR_19, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

        VAR_25 = FUNC_7(VAR_16);
        FUNC_14(VAR_25 == VAR_9, "Start failed: %08x\n", VAR_25);

        VAR_25 = FUNC_9(VAR_17, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

        VAR_25 = FUNC_9(VAR_18, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

        VAR_25 = FUNC_9(VAR_19, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_1, "Got wrong state: %d\n", VAR_22);

        VAR_25 = FUNC_8(VAR_16);
        FUNC_14(VAR_25 == VAR_9, "Stop failed: %08x\n", VAR_25);

        VAR_25 = FUNC_9(VAR_17, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

        VAR_25 = FUNC_9(VAR_18, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

        VAR_25 = FUNC_9(VAR_19, &VAR_22);
        FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
        FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

        VAR_24 = FUNC_10(VAR_19);
        FUNC_14(VAR_24 == 0, "AudioSessionControl wasn't released: %u\n", VAR_24);

        VAR_24 = FUNC_6(VAR_16);
        FUNC_14(VAR_24 == 0, "AudioClient wasn't released: %u\n", VAR_24);
    }

    VAR_24 = FUNC_10(VAR_17);
    FUNC_14(VAR_24 == 0, "AudioSessionControl wasn't released: %u\n", VAR_24);

    VAR_24 = FUNC_6(VAR_14);
    FUNC_14(VAR_24 == 0, "AudioClient wasn't released: %u\n", VAR_24);

    VAR_24 = FUNC_6(VAR_15);
    FUNC_14(VAR_24 == 1, "AudioClient had wrong refcount: %u\n", VAR_24);


    VAR_25 = FUNC_9(VAR_18, &VAR_22);
    FUNC_14(VAR_25 == VAR_9, "GetState failed: %08x\n", VAR_25);
    FUNC_14(VAR_22 == VAR_2, "Got wrong state: %d\n", VAR_22);

    VAR_24 = FUNC_10(VAR_18);
    FUNC_14(VAR_24 == 0, "AudioSessionControl wasn't released: %u\n", VAR_24);

    FUNC_1(VAR_23);
}
