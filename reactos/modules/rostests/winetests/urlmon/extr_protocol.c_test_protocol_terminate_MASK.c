
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IInternetProtocol ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_6(IInternetProtocol *VAR_3)
{
    BYTE VAR_4[3600];
    DWORD VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(VAR_3, 0);
    FUNC_5(VAR_6 == VAR_1, "LockRequest failed: %08x\n", VAR_6);

    VAR_6 = FUNC_1(VAR_3, VAR_4, 1, &VAR_5);
    FUNC_5(VAR_6 == (VAR_2 ? VAR_1 : VAR_0), "Read failed: %08x\n", VAR_6);

    VAR_6 = FUNC_2(VAR_3, 0);
    FUNC_5(VAR_6 == VAR_1, "Terminate failed: %08x\n", VAR_6);
    FUNC_4(100);

    VAR_6 = FUNC_3(VAR_3);
    FUNC_5(VAR_6 == VAR_1, "UnlockRequest failed: %08x\n", VAR_6);
}
