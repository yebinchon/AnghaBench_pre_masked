
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IInternetSession ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int **,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void) {
    IInternetSession *VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_4(0, &VAR_3, 0);
    FUNC_3(VAR_4 == VAR_0, "CoInternetGetSession failed: 0x%08x\n", VAR_4);
    if(FUNC_0(VAR_4))
        return;

    VAR_4 = FUNC_2(VAR_3, &VAR_1, VAR_2);
    FUNC_3(VAR_4 == VAR_0, "UnregisterNameSpace failed: 0x%08x\n", VAR_4);

    FUNC_1(VAR_3);
}
