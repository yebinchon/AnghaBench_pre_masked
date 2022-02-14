
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int params ;
struct TYPE_3__ {int dwSize; int * pReserved; int bAllowWHQLChecks; int dwDxDiagHeaderVersion; } ;
typedef int LPVOID ;
typedef int IDxDiagProvider ;
typedef int IDxDiagContainer ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DXDIAG_INIT_PARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,char*,scalar_t__,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(void)
{
    HRESULT VAR_8;
    IDxDiagProvider *VAR_9;
    IDxDiagContainer *VAR_10, *VAR_11;
    DXDIAG_INIT_PARAMS VAR_12;

    VAR_8 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_5, (LPVOID*)&VAR_9);
    FUNC_7(VAR_8 == VAR_7 ||
       FUNC_6(VAR_8 == VAR_6),
       "Creating a IDxDiagProvider instance failed with %x\n", VAR_8);
    if (FUNC_1(VAR_8))
    {
        FUNC_8("Failed to create a IDxDiagProvider instance\n");
        return;
    }


    VAR_8 = FUNC_3(VAR_9, ((void*)0));
    FUNC_7(VAR_8 == VAR_2,
       "Expected IDxDiagProvider::GetRootContainer to return CO_E_NOTINITIALIZED, got %x\n", VAR_8);

    VAR_8 = FUNC_3(VAR_9, &VAR_10);
    FUNC_7(VAR_8 == VAR_2,
       "Expected IDxDiagProvider::GetRootContainer to return CO_E_NOTINITIALIZED, got %x\n", VAR_8);

    VAR_12.dwSize = sizeof(VAR_12);
    VAR_12.dwDxDiagHeaderVersion = VAR_3;
    VAR_12.bAllowWHQLChecks = VAR_4;
    VAR_12.pReserved = ((void*)0);
    VAR_8 = FUNC_4(VAR_9, &VAR_12);
    FUNC_7(VAR_8 == VAR_7, "Expected IDxDiagProvider::Initialize to return S_OK, got %x\n", VAR_8);
    if (FUNC_1(VAR_8))
    {
        FUNC_8("IDxDiagProvider::Initialize failed\n");
        FUNC_5(VAR_9);
        return;
    }


    if (0)
    {
        VAR_8 = FUNC_3(VAR_9, ((void*)0));
        FUNC_9("IDxDiagProvider::GetRootContainer returned %x\n", VAR_8);
    }

    VAR_8 = FUNC_3(VAR_9, &VAR_10);
    FUNC_7(VAR_8 == VAR_7, "Expected IDxDiagProvider::GetRootContainer to return S_OK, got %x\n", VAR_8);



    VAR_8 = FUNC_3(VAR_9, &VAR_11);
    FUNC_7(VAR_8 == VAR_7, "Expected IDxDiagProvider::GetRootContainer to return S_OK, got %x\n", VAR_8);
    FUNC_7(VAR_10 != VAR_11, "Expected the two pointers (%p vs. %p) to be unequal\n", VAR_10, VAR_11);

    FUNC_2(VAR_11);
    FUNC_2(VAR_10);
    FUNC_5(VAR_9);
}
