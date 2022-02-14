
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RPC_STATUS ;
typedef int RPC_BINDING_HANDLE ;
typedef int * PWSTR ;
typedef int LPWSTR ;
typedef scalar_t__ LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int *,int **) ;
 int FUNC_2 (int **) ;

RPC_STATUS
FUNC_3(LPCWSTR VAR_1,
           RPC_BINDING_HANDLE* VAR_2)
{
    PWSTR VAR_3 = ((void*)0);
    RPC_STATUS VAR_4;

    VAR_4 = FUNC_1(((void*)0),
                                      L"ncacn_np",
                                      (LPWSTR)VAR_1,
                                      L"\\pipe\\plugplay",
                                      ((void*)0),
                                      &VAR_3);
    if (VAR_4 != VAR_0)
        return VAR_4;

    VAR_4 = FUNC_0(VAR_3,
                                          VAR_2);

    FUNC_2(&VAR_3);

    return VAR_4;
}
