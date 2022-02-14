
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef void IDxDiagContainer ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,int *,int ) ;
 int FUNC_3 (void*,int *,void**) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (int,char*,void*,...) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HRESULT VAR_4;
    WCHAR VAR_5[256] = {0};
    IDxDiagContainer *VAR_6;

    if (!FUNC_7())
    {
        FUNC_9("Unable to create the root IDxDiagContainer\n");
        return;
    }


    VAR_4 = FUNC_3(VAR_2, ((void*)0), ((void*)0));
    FUNC_8(VAR_4 == VAR_0,
       "Expected IDxDiagContainer::GetChildContainer to return E_INVALIDARG, got 0x%08x\n", VAR_4);

    VAR_6 = (void*)0xdeadbeef;
    VAR_4 = FUNC_3(VAR_2, ((void*)0), &VAR_6);
    FUNC_8(VAR_4 == VAR_0,
       "Expected IDxDiagContainer::GetChildContainer to return E_INVALIDARG, got 0x%08x\n", VAR_4);
    FUNC_8(VAR_6 == (void*)0xdeadbeef, "Expected output pointer to be unchanged, got %p\n", VAR_6);

    VAR_4 = FUNC_3(VAR_2, VAR_5, ((void*)0));
    FUNC_8(VAR_4 == VAR_0,
       "Expected IDxDiagContainer::GetChildContainer to return E_INVALIDARG, got 0x%08x\n", VAR_4);

    VAR_6 = (void*)0xdeadbeef;
    VAR_4 = FUNC_3(VAR_2, VAR_5, &VAR_6);
    FUNC_8(VAR_4 == VAR_0,
       "Expected IDxDiagContainer::GetChildContainer to return E_INVALIDARG, got 0x%08x\n", VAR_4);
    FUNC_8(VAR_6 == ((void*)0), "Expected output pointer to be NULL, got %p\n", VAR_6);


    VAR_4 = FUNC_2(VAR_2, 0, VAR_5, FUNC_0(VAR_5));
    FUNC_8(VAR_4 == VAR_1,
       "Expected IDxDiagContainer::EnumChildContainerNames to return S_OK, got 0x%08x\n", VAR_4);
    if (FUNC_1(VAR_4))
    {
        FUNC_9("IDxDiagContainer::EnumChildContainerNames failed\n");
        goto cleanup;
    }

    VAR_6 = (void*)0xdeadbeef;
    VAR_4 = FUNC_3(VAR_2, VAR_5, &VAR_6);
    FUNC_8(VAR_4 == VAR_1,
       "Expected IDxDiagContainer::GetChildContainer to return S_OK, got 0x%08x\n", VAR_4);
    FUNC_8(VAR_6 != ((void*)0) && VAR_6 != (void*)0xdeadbeef, "Expected a valid output pointer, got %p\n", VAR_6);

    if (FUNC_6(VAR_4))
    {
        IDxDiagContainer *VAR_7;



        VAR_4 = FUNC_3(VAR_2, VAR_5, &VAR_7);
        FUNC_8(VAR_4 == VAR_1,
           "Expected IDxDiagContainer::GetChildContainer to return S_OK, got 0x%08x\n", VAR_4);
        if (FUNC_6(VAR_4))
            FUNC_8(VAR_7 != VAR_6, "Expected the two pointers (%p vs. %p) to be unequal\n", VAR_6, VAR_7);

        FUNC_4(VAR_7);
        FUNC_4(VAR_6);
    }

cleanup:
    FUNC_4(VAR_2);
    FUNC_5(VAR_3);
}
