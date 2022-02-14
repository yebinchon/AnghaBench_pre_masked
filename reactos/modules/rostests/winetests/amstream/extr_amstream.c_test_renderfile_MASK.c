
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int LPVOID ;
typedef int IUnknown ;
typedef int IMediaStream ;
typedef int IDirectDrawSurface ;
typedef int IDirectDrawStreamSample ;
typedef int IDirectDrawMediaStream ;
typedef int IAMMultiMediaStream ;
typedef int * HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int *,int ,int *) ;
 int * FUNC_3 (int *,int *,int **) ;
 int * FUNC_4 (int *,int ,int ,int *) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *,int *,int ,int **) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int **,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int *,void**) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_13 (int *,int *,int *) ;
 int FUNC_14 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_7 ;
 int FUNC_17 (int,char*,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_18 () ;

__attribute__((used)) static void FUNC_19(void)
{
    IAMMultiMediaStream *VAR_10;
    HRESULT VAR_11;
    IMediaStream *VAR_12 = ((void*)0);
    IDirectDrawMediaStream *VAR_13 = ((void*)0);
    IDirectDrawStreamSample *VAR_14 = ((void*)0);
    IDirectDrawSurface *VAR_15;
    RECT VAR_16;

    if (!(VAR_10 = FUNC_15()))
        return;
    if (!FUNC_16())
    {
        FUNC_6(VAR_10);
        return;
    }

    VAR_11 = FUNC_4(VAR_10, VAR_5, 0, ((void*)0));
    FUNC_17(VAR_11==VAR_6, "IAMMultiMediaStream_Initialize returned: %x\n", VAR_11);

    VAR_11 = FUNC_2(VAR_10, (IUnknown*)VAR_8, &VAR_4, 0, ((void*)0));
    FUNC_17(VAR_11==VAR_6, "IAMMultiMediaStream_AddMediaStream returned: %x\n", VAR_11);

    VAR_11 = FUNC_2(VAR_10, ((void*)0), &VAR_3, VAR_0, ((void*)0));
    FUNC_17(VAR_11==VAR_6, "IAMMultiMediaStream_AddMediaStream returned: %x\n", VAR_11);

    VAR_11 = FUNC_5(VAR_10, VAR_7, 0);
    FUNC_17(VAR_11==VAR_6, "IAMMultiMediaStream_OpenFile returned: %x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_10, &VAR_4, &VAR_12);
    FUNC_17(VAR_11==VAR_6, "IAMMultiMediaStream_GetMediaStream returned: %x\n", VAR_11);
    if (FUNC_1(VAR_11)) goto error;

    VAR_11 = FUNC_13(VAR_12, &VAR_1, (LPVOID*)&VAR_13);
    FUNC_17(VAR_11==VAR_6, "IMediaStream_QueryInterface returned: %x\n", VAR_11);
    if (FUNC_1(VAR_11)) goto error;

    VAR_11 = FUNC_7(VAR_13, ((void*)0), ((void*)0), 0, &VAR_14);
    FUNC_17(VAR_11 == VAR_6, "IDirectDrawMediaStream_CreateSample returned: %x\n", VAR_11);

    VAR_15 = ((void*)0);
    VAR_11 = FUNC_9(VAR_14, &VAR_15, &VAR_16);
    FUNC_17(VAR_11 == VAR_6, "got 0x%08x\n", VAR_11);
    FUNC_17(VAR_15 == ((void*)0), "got %p\n", VAR_15);
    FUNC_10(VAR_14);

    VAR_11 = FUNC_11(VAR_9, &VAR_2, (void**)&VAR_15);
    FUNC_17(VAR_11 == VAR_6, "got 0x%08x\n", VAR_11);

    FUNC_0(VAR_15, 1);
    VAR_11 = FUNC_7(VAR_13, VAR_15, ((void*)0), 0, &VAR_14);
    FUNC_17(VAR_11 == VAR_6, "IDirectDrawMediaStream_CreateSample returned: %x\n", VAR_11);
    FUNC_0(VAR_15, 2);
    FUNC_10(VAR_14);
    FUNC_12(VAR_15);

error:
    if (VAR_13)
        FUNC_8(VAR_13);
    if (VAR_12)
        FUNC_14(VAR_12);

    FUNC_18();
    FUNC_6(VAR_10);
}
