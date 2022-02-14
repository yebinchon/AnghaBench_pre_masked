
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HRESULT VAR_4;
    DWORD VAR_5;

    if (!FUNC_3())
    {
        FUNC_5("Unable to create the root IDxDiagContainer\n");
        return;
    }

    VAR_4 = FUNC_0(VAR_2, ((void*)0));
    FUNC_4(VAR_4 == VAR_0,
       "Expected IDxDiagContainer::GetNumberOfChildContainers to return E_INVALIDARG, got 0x%08x\n", VAR_4);

    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_4(VAR_4 == VAR_1,
       "Expected IDxDiagContainer::GetNumberOfChildContainers to return S_OK, got 0x%08x\n", VAR_4);
    if (VAR_4 == VAR_1)
        FUNC_4(VAR_5 != 0, "Expected the number of child containers for the root container to be non-zero\n");

    FUNC_1(VAR_2);
    FUNC_2(VAR_3);
}
