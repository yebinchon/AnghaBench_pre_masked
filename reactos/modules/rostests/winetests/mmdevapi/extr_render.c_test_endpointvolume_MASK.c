
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IAudioEndpointVolume ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,float*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,float*,float*,float*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,float,int *) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,int *,int ,int *,void**) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (char*,float,float,float) ;

__attribute__((used)) static void FUNC_9(void)
{
    HRESULT VAR_7;
    IAudioEndpointVolume *VAR_8;
    float VAR_9, VAR_10, VAR_11, VAR_12;
    BOOL VAR_13;

    VAR_7 = FUNC_6(VAR_6, &VAR_3,
            VAR_0, ((void*)0), (void**)&VAR_8);
    FUNC_7(VAR_7 == VAR_5, "Activation failed with %08x\n", VAR_7);
    if(VAR_7 != VAR_5)
        return;

    VAR_7 = FUNC_2(VAR_8, &VAR_9, ((void*)0), ((void*)0));
    FUNC_7(VAR_7 == VAR_2, "GetVolumeRange should have failed with E_POINTER: 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2(VAR_8, &VAR_9, &VAR_10, &VAR_11);
    FUNC_7(VAR_7 == VAR_5, "GetVolumeRange failed: 0x%08x\n", VAR_7);
    FUNC_8("got range: [%f,%f]/%f\n", VAR_9, VAR_10, VAR_11);

    VAR_7 = FUNC_4(VAR_8, VAR_9 - VAR_11, ((void*)0));
    FUNC_7(VAR_7 == VAR_1, "SetMasterVolumeLevel failed: 0x%08x\n", VAR_7);

    VAR_7 = FUNC_0(VAR_8, &VAR_12);
    FUNC_7(VAR_7 == VAR_5, "GetMasterVolumeLevel failed: 0x%08x\n", VAR_7);

    VAR_7 = FUNC_4(VAR_8, VAR_12, ((void*)0));
    FUNC_7(VAR_7 == VAR_5, "SetMasterVolumeLevel failed: 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1(VAR_8, &VAR_13);
    FUNC_7(VAR_7 == VAR_5, "GetMute failed: %08x\n", VAR_7);

    VAR_7 = FUNC_5(VAR_8, VAR_13, ((void*)0));
    FUNC_7(VAR_7 == VAR_5 || VAR_7 == VAR_4, "SetMute failed: %08x\n", VAR_7);

    FUNC_3(VAR_8);
}
