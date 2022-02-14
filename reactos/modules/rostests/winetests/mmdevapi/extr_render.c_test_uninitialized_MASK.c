
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int REFERENCE_TIME ;
typedef int IUnknown ;
typedef int IAudioClient ;
typedef scalar_t__ HRESULT ;
typedef int HANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_2 ;
 int FUNC_10 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(IAudioClient *VAR_3)
{
    HRESULT VAR_4;
    UINT32 VAR_5;
    REFERENCE_TIME VAR_6;

    HANDLE VAR_7 = FUNC_1(((void*)0), VAR_1, VAR_1, ((void*)0));
    IUnknown *VAR_8;

    VAR_4 = FUNC_2(VAR_3, &VAR_5);
    FUNC_10(VAR_4 == VAR_0, "Uninitialized GetBufferSize call returns %08x\n", VAR_4);

    VAR_4 = FUNC_5(VAR_3, &VAR_6);
    FUNC_10(VAR_4 == VAR_0, "Uninitialized GetStreamLatency call returns %08x\n", VAR_4);

    VAR_4 = FUNC_3(VAR_3, &VAR_5);
    FUNC_10(VAR_4 == VAR_0, "Uninitialized GetCurrentPadding call returns %08x\n", VAR_4);

    VAR_4 = FUNC_8(VAR_3);
    FUNC_10(VAR_4 == VAR_0, "Uninitialized Start call returns %08x\n", VAR_4);

    VAR_4 = FUNC_9(VAR_3);
    FUNC_10(VAR_4 == VAR_0, "Uninitialized Stop call returns %08x\n", VAR_4);

    VAR_4 = FUNC_6(VAR_3);
    FUNC_10(VAR_4 == VAR_0, "Uninitialized Reset call returns %08x\n", VAR_4);

    VAR_4 = FUNC_7(VAR_3, VAR_7);
    FUNC_10(VAR_4 == VAR_0, "Uninitialized SetEventHandle call returns %08x\n", VAR_4);

    VAR_4 = FUNC_4(VAR_3, &VAR_2, (void**)&VAR_8);
    FUNC_10(VAR_4 == VAR_0, "Uninitialized GetService call returns %08x\n", VAR_4);

    FUNC_0(VAR_7);
}
