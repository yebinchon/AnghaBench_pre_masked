
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CONFIRMSAFETY {scalar_t__ dwFlags; int * pUnk; scalar_t__ clsid; } ;
typedef int cs ;
typedef int IUnknown ;
typedef int IInternetSecurityManager ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CLSID ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *,int,int *,int,int ,int ) ;
 int FUNC_2 (int *,int ,int *,int **,int*,int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,char*,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(IInternetSecurityManager *VAR_8)
{
    DWORD VAR_9, VAR_10;
    struct CONFIRMSAFETY VAR_11;
    BYTE *VAR_12;
    HRESULT VAR_13;

    VAR_9 = 0xdeadbeef;
    VAR_13 = FUNC_1(VAR_8, VAR_7, VAR_4, (BYTE*)&VAR_9,
            sizeof(DWORD), (BYTE*)&VAR_0, sizeof(CLSID), 0, 0);
    FUNC_3(VAR_13 == VAR_3, "ProcessUrlAction(URLACTION_ACTIVEX_RUN) failed: %08x\n", VAR_13);
    FUNC_3(VAR_9 == VAR_5 || VAR_9 == VAR_6, "policy = %x\n", VAR_9);

    VAR_11.clsid = VAR_0;
    VAR_11.pUnk = (IUnknown*)0xdeadbeef;
    VAR_11.dwFlags = 0;
    VAR_13 = FUNC_2(VAR_8, VAR_7, &VAR_2,
            &VAR_12, &VAR_10, (BYTE*)&VAR_11, sizeof(VAR_11), 0);
    FUNC_3(VAR_13 == FUNC_0(VAR_1), "QueryCusromPolicy failed: %08x\n", VAR_13);
}
