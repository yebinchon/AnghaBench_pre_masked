
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WAVEFORMATEX ;
typedef int IAudioClient ;
typedef scalar_t__ HRESULT ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int,int ,int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (int ,int *,int ,int *,void**) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_13 (int *,int) ;
 int VAR_13 ;
 int FUNC_14 (int,char*,...) ;

__attribute__((used)) static void FUNC_15(void)
{
    HANDLE VAR_14;
    HRESULT VAR_15;
    DWORD VAR_16;
    IAudioClient *VAR_17;
    WAVEFORMATEX *VAR_18;

    VAR_15 = FUNC_11(VAR_13, &VAR_9, VAR_3,
            ((void*)0), (void**)&VAR_17);
    FUNC_14(VAR_15 == VAR_10, "Activation failed with %08x\n", VAR_15);
    if(VAR_15 != VAR_10)
        return;

    VAR_15 = FUNC_4(VAR_17, &VAR_18);
    FUNC_14(VAR_15 == VAR_10, "GetMixFormat failed: %08x\n", VAR_15);

    VAR_15 = FUNC_5(VAR_17, VAR_1,
            VAR_2, 5000000,
            0, VAR_18, ((void*)0));
    FUNC_14(VAR_15 == VAR_10, "Initialize failed: %08x\n", VAR_15);

    FUNC_1(VAR_18);

    VAR_14 = FUNC_2(((void*)0), VAR_8, VAR_8, ((void*)0));
    FUNC_14(VAR_14 != ((void*)0), "CreateEvent failed\n");

    VAR_15 = FUNC_9(VAR_17);
    FUNC_14(VAR_15 == VAR_0 ||
            VAR_15 == VAR_4 , "Start failed: %08x\n", VAR_15);

    VAR_15 = FUNC_8(VAR_17, VAR_14);
    FUNC_14(VAR_15 == VAR_10, "SetEventHandle failed: %08x\n", VAR_15);

    VAR_15 = FUNC_8(VAR_17, VAR_14);
    FUNC_14(VAR_15 == FUNC_3(VAR_5) ||
            VAR_15 == VAR_7 , "SetEventHandle returns %08x\n", VAR_15);

    VAR_16 = FUNC_13(VAR_14, 40);
    FUNC_14(VAR_16 == VAR_12, "Wait(event) before Start gave %x\n", VAR_16);

    VAR_15 = FUNC_9(VAR_17);
    FUNC_14(VAR_15 == VAR_10, "Start failed: %08x\n", VAR_15);

    VAR_16 = FUNC_13(VAR_14, 20);
    FUNC_14(VAR_16 == VAR_11, "Wait(event) after Start gave %x\n", VAR_16);

    VAR_15 = FUNC_10(VAR_17);
    FUNC_14(VAR_15 == VAR_10, "Stop failed: %08x\n", VAR_15);

    FUNC_14(FUNC_12(VAR_14), "ResetEvent\n");


    VAR_16 = FUNC_13(VAR_14, 20);
    FUNC_14(VAR_16 == VAR_11, "Wait(event) after Stop gave %x\n", VAR_16);

    VAR_15 = FUNC_7(VAR_17);
    FUNC_14(VAR_15 == VAR_10, "Reset failed: %08x\n", VAR_15);

    FUNC_14(FUNC_12(VAR_14), "ResetEvent\n");

    VAR_16 = FUNC_13(VAR_14, 120);
    FUNC_14(VAR_16 == VAR_11, "Wait(event) after Reset gave %x\n", VAR_16);

    VAR_15 = FUNC_8(VAR_17, ((void*)0));
    FUNC_14(VAR_15 == VAR_6, "SetEventHandle(NULL) returns %08x\n", VAR_15);

    VAR_16 = FUNC_13(VAR_14, 70);
    FUNC_14(VAR_16 == VAR_11, "Wait(NULL event) gave %x\n", VAR_16);


    VAR_15 = FUNC_9(VAR_17);
    FUNC_14(VAR_15 == VAR_10, "Start failed: %08x\n", VAR_15);
    FUNC_6(VAR_17);

    FUNC_0(VAR_14);
}
