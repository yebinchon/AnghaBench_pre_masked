
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IInternetZoneManager ;
typedef int IInternetSecurityManager ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int *,int ,int,int *,int,int *,int ,int ,int ) ;
 int FUNC_1 (int *,int,int,int *,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int,...) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(IInternetSecurityManager *VAR_5, IInternetZoneManager *VAR_6, DWORD VAR_7)
{
    DWORD VAR_8;
    HRESULT VAR_9;

    VAR_8 = 0xdeadbeef;
    VAR_9 = FUNC_1(VAR_6, 3, VAR_7, (BYTE*)&VAR_8,
            sizeof(DWORD), VAR_3);
    FUNC_2(VAR_9 == VAR_1, "GetZoneActionPolicy failed: %08x\n", VAR_9);
    FUNC_2(VAR_8 == VAR_2, "(%x) policy=%x, expected URLPOLICY_DISALLOW\n", VAR_7, VAR_8);

    VAR_8 = 0xdeadbeef;
    VAR_9 = FUNC_0(VAR_5, VAR_4, VAR_7, (BYTE*)&VAR_8,
            sizeof(WCHAR), ((void*)0), 0, 0, 0);
    FUNC_2(VAR_9 == VAR_0, "ProcessUrlAction(%x) failed: %08x, expected S_FALSE\n", VAR_7, VAR_9);

    VAR_8 = 0xdeadbeef;
    VAR_9 = FUNC_0(VAR_5, VAR_4, VAR_7, (BYTE*)&VAR_8,
            sizeof(DWORD), ((void*)0), 0, 0, 0);
    FUNC_2(VAR_9 == VAR_0, "ProcessUrlAction(%x) failed: %08x, expected S_FALSE\n", VAR_7, VAR_9);
    FUNC_2(VAR_8 == VAR_2, "policy = %x\n", VAR_8);
}
