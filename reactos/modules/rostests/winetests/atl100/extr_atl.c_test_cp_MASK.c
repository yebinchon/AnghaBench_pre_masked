
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *,int *,int *,int*) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    DWORD VAR_5 = 0;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(((void*)0), (IUnknown*)0xdeed0000, &VAR_0, &VAR_5);
    FUNC_2(VAR_6 == VAR_2, "expect E_INVALIDARG, returned %08x\n", VAR_6);

    VAR_6 = FUNC_1(((void*)0), &VAR_0, 0xdeadbeef);
    FUNC_2(VAR_6 == VAR_2, "expect E_INVALIDARG, returned %08x\n", VAR_6);

    VAR_6 = FUNC_0((IUnknown*)&VAR_1, (IUnknown*)0xdead0000, &VAR_0, &VAR_5);
    FUNC_2(VAR_6 == VAR_3, "AtlAdvise failed: %08x\n", VAR_6);
    FUNC_2(VAR_5 == 0xdeadbeef, "cookie = %x\n", VAR_5);
    FUNC_2(VAR_4 == 1, "advise_cnt = %d\n", VAR_4);

    VAR_6 = FUNC_1((IUnknown*)&VAR_1, &VAR_0, 0xdeadbeef);
    FUNC_2(VAR_6 == VAR_3, "AtlUnadvise failed: %08x\n", VAR_6);
    FUNC_2(!VAR_4, "advise_cnt = %d\n", VAR_4);
}
