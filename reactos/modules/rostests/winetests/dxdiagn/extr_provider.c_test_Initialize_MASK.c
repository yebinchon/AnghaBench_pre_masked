
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int params ;
typedef int VOID ;
struct TYPE_3__ {int dwSize; int * pReserved; void* bAllowWHQLChecks; void* dwDxDiagHeaderVersion; } ;
typedef int LPVOID ;
typedef int IDxDiagProvider ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DXDIAG_INIT_PARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_5 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_9;
    IDxDiagProvider *VAR_10;
    DXDIAG_INIT_PARAMS VAR_11;

    VAR_9 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_6, (LPVOID*)&VAR_10);
    FUNC_5(VAR_9 == VAR_8 ||
       FUNC_4(VAR_9 == VAR_7),
       "Creating a IDxDiagProvider instance failed with %x\n", VAR_9);
    if (FUNC_1(VAR_9))
    {
        FUNC_6("Failed to create a IDxDiagProvider instance\n");
        return;
    }


    VAR_9 = FUNC_2(VAR_10, ((void*)0));
    FUNC_5(VAR_9 == VAR_4,
       "Expected IDxDiagProvider::Initialize to return E_POINTER, got %x\n", VAR_9);


    VAR_11.dwSize = 0;
    VAR_9 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_9 == VAR_3,
       "Expected IDxDiagProvider::Initialize to return E_INVALIDARG, got %x\n", VAR_9);

    VAR_11.dwSize = sizeof(VAR_11) + 1;
    VAR_9 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_9 == VAR_3,
       "Expected IDxDiagProvider::Initialize to return E_INVALIDARG, got %x\n", VAR_9);


    VAR_11.dwSize = sizeof(VAR_11);
    VAR_11.dwDxDiagHeaderVersion = 0;
    VAR_11.bAllowWHQLChecks = VAR_5;
    VAR_11.pReserved = ((void*)0);
    VAR_9 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_9 == VAR_3,
       "Expected IDxDiagProvider::Initialize to return E_INVALIDARG, got %x\n", VAR_9);


    if (0)
    {
        VAR_11.dwDxDiagHeaderVersion = VAR_2;
        VAR_11.bAllowWHQLChecks = VAR_5;
        VAR_11.pReserved = (VOID*)0xdeadbeef;
        VAR_9 = FUNC_2(VAR_10, &VAR_11);
        FUNC_7("IDxDiagProvider::Initialize returned %x\n", VAR_9);
    }


    VAR_11.dwDxDiagHeaderVersion = VAR_2;
    VAR_11.bAllowWHQLChecks = VAR_5;
    VAR_11.pReserved = ((void*)0);
    VAR_9 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_9 == VAR_8, "Expected IDxDiagProvider::Initialize to return S_OK, got %x\n", VAR_9);


    VAR_9 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_9 == VAR_8, "Expected IDxDiagProvider::Initialize to return S_OK, got %x\n", VAR_9);

    FUNC_3(VAR_10);
}
