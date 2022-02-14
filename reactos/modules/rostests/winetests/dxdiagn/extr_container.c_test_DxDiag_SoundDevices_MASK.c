
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_test {char const* member_0; int const member_1; } ;
typedef int property_tests ;
typedef int child_container ;
typedef char WCHAR ;
typedef int IDxDiagContainer ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,char*,int) ;
 scalar_t__ FUNC_1 (int *,char const*,int **) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;

 int FUNC_6 () ;
 int FUNC_7 (int,char*,...) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,struct property_test const*,int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const WCHAR VAR_4[] = {'s','z','D','e','s','c','r','i','p','t','i','o','n',0};
    static const WCHAR VAR_5[] = {'s','z','G','u','i','d','D','e','v','i','c','e','I','D',0};
    static const WCHAR VAR_6[] = {'s','z','D','r','i','v','e','r','P','a','t','h',0};
    static const WCHAR VAR_7[] = {'s','z','D','r','i','v','e','r','N','a','m','e',0};
    static const WCHAR VAR_8[] = {0};

    static const struct property_test VAR_9[] =
    {
        {VAR_4, 128},
        {VAR_5, 128},
        {VAR_7, 128},
        {VAR_6, 128},
    };

    IDxDiagContainer *VAR_10 = ((void*)0);
    DWORD VAR_11, VAR_12;
    HRESULT VAR_13;

    if (!FUNC_6())
    {
        FUNC_8("Unable to create the root IDxDiagContainer\n");
        return;
    }

    VAR_13 = FUNC_1(VAR_2, VAR_0, &VAR_10);
    FUNC_7(VAR_13 == VAR_1, "Expected IDxDiagContainer::GetChildContainer to return S_OK, got 0x%08x\n", VAR_13);

    if (VAR_13 != VAR_1)
        goto cleanup;

    VAR_13 = FUNC_3(VAR_10, &VAR_11);
    FUNC_7(VAR_13 == VAR_1, "Expected IDxDiagContainer::GetNumberOfProps to return S_OK, got 0x%08x\n", VAR_13);
    if (VAR_13 == VAR_1)
        FUNC_7(VAR_11 == 0, "Expected count to be 0, got %u\n", VAR_11);

    VAR_13 = FUNC_2(VAR_10, &VAR_11);
    FUNC_7(VAR_13 == VAR_1, "Expected IDxDiagContainer::GetNumberOfChildContainers to return S_OK, got 0x%08x\n", VAR_13);

    if (VAR_13 != VAR_1)
        goto cleanup;

    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    {
        WCHAR VAR_14[256];
        IDxDiagContainer *VAR_15, *VAR_16;

        VAR_13 = FUNC_0(VAR_10, VAR_12, VAR_14, sizeof(VAR_14)/sizeof(WCHAR));
        FUNC_7(VAR_13 == VAR_1, "Expected IDxDiagContainer::EnumChildContainerNames to return S_OK, got 0x%08x\n", VAR_13);

        VAR_13 = FUNC_1(VAR_10, VAR_14, &VAR_15);
        FUNC_7(VAR_13 == VAR_1, "Expected IDxDiagContainer::GetChildContainer to return S_OK, got 0x%08x\n", VAR_13);

        if (VAR_13 == VAR_1)
        {
            FUNC_10("Testing container %s\n", FUNC_11(VAR_14));
            FUNC_9(VAR_15, VAR_9, sizeof(VAR_9)/sizeof(VAR_9[0]));
        }

        VAR_16 = ((void*)0);
        VAR_13 = FUNC_1(VAR_15, VAR_8, &VAR_16);
        FUNC_7(VAR_13 == VAR_1, "Expected IDxDiagContainer::GetChildContainer to return S_OK, got 0x%08x\n", VAR_13);
        FUNC_7(VAR_16 != ((void*)0), "Expected child2 != NULL\n");
        FUNC_7(VAR_16 != VAR_15, "Expected child != child2\n");
        if (VAR_13 == VAR_1) FUNC_4(VAR_16);

        FUNC_4(VAR_15);
    }

cleanup:
    if (VAR_10) FUNC_4(VAR_10);
    FUNC_4(VAR_2);
    FUNC_5(VAR_3);
}
