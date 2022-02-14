
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WAVEFORMATEX ;
typedef int IUnknown ;
typedef int IStream ;
typedef int IAudioRenderClient ;
typedef int IAudioClient ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ,int *,int ,int *,void**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int,char*,scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_13(void)
{
    IStream *VAR_11;
    IAudioClient *VAR_12, *VAR_13;
    IAudioRenderClient *VAR_14, *VAR_15;
    WAVEFORMATEX *VAR_16;
    HRESULT VAR_17;


    VAR_17 = FUNC_9(VAR_9, &VAR_2, VAR_1,
            ((void*)0), (void**)&VAR_12);
    FUNC_12(VAR_17 == VAR_7, "Activation failed with %08x\n", VAR_17);
    if(VAR_17 != VAR_7)
        return;

    VAR_17 = FUNC_4(VAR_12, &VAR_16);
    FUNC_12(VAR_17 == VAR_7, "GetMixFormat failed: %08x\n", VAR_17);

    VAR_17 = FUNC_6(VAR_12, VAR_0, 0, 5000000,
            0, VAR_16, ((void*)0));
    FUNC_12(VAR_17 == VAR_7, "Initialize failed: %08x\n", VAR_17);

    FUNC_1(VAR_16);

    VAR_17 = FUNC_5(VAR_12, &VAR_3, (void**)&VAR_14);
    FUNC_12(VAR_17 == VAR_7, "GetService failed: %08x\n", VAR_17);
    if(VAR_17 != VAR_7) {
        FUNC_7(VAR_12);
        return;
    }

    VAR_17 = FUNC_3(((void*)0), VAR_8, &VAR_11);
    FUNC_12(VAR_17 == VAR_7, "CreateStreamOnHGlobal failed 0x%08x\n", VAR_17);



    VAR_17 = FUNC_0(VAR_11, &VAR_2, (IUnknown*)VAR_12, VAR_4, ((void*)0), VAR_5);
    FUNC_12(VAR_17 == VAR_7, "CoMarshalInterface IAudioClient failed 0x%08x\n", VAR_17);

    FUNC_11(VAR_11, VAR_10, VAR_6, ((void*)0));
    VAR_17 = FUNC_2(VAR_11, &VAR_2, (void **)&VAR_13);
    FUNC_12(VAR_17 == VAR_7, "CoUnmarshalInterface IAudioClient failed 0x%08x\n", VAR_17);
    if (VAR_17 == VAR_7)
        FUNC_7(VAR_13);

    FUNC_11(VAR_11, VAR_10, VAR_6, ((void*)0));


    VAR_17 = FUNC_0(VAR_11, &VAR_3, (IUnknown*)VAR_14, VAR_4, ((void*)0), VAR_5);
    FUNC_12(VAR_17 == VAR_7, "CoMarshalInterface IAudioRenderClient failed 0x%08x\n", VAR_17);

    FUNC_11(VAR_11, VAR_10, VAR_6, ((void*)0));
    VAR_17 = FUNC_2(VAR_11, &VAR_3, (void **)&VAR_15);
    FUNC_12(VAR_17 == VAR_7, "CoUnmarshalInterface IAudioRenderClient failed 0x%08x\n", VAR_17);
    if (VAR_17 == VAR_7)
        FUNC_8(VAR_15);


    FUNC_10(VAR_11);

    FUNC_7(VAR_12);
    FUNC_8(VAR_14);

}
