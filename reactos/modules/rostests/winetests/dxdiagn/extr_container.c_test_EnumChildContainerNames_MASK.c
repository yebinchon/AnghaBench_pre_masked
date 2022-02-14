
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zerotestW ;
typedef int testW ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (int,char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    HRESULT VAR_5;
    WCHAR VAR_6[256];
    DWORD VAR_7, VAR_8;
    static const WCHAR VAR_9[] = {'t','e','s','t',0};
    static const WCHAR VAR_10[] = {0,'e','s','t',0};

    if (!FUNC_6())
    {
        FUNC_10("Unable to create the root IDxDiagContainer\n");
        return;
    }


    VAR_5 = FUNC_2(VAR_3, 0, ((void*)0), 0);
    FUNC_9(VAR_5 == VAR_1,
       "Expected IDxDiagContainer::EnumChildContainerNames to return E_INVALIDARG, got 0x%08x\n", VAR_5);

    VAR_5 = FUNC_2(VAR_3, 0, ((void*)0), FUNC_0(VAR_6));
    FUNC_9(VAR_5 == VAR_1,
       "Expected IDxDiagContainer::EnumChildContainerNames to return E_INVALIDARG, got 0x%08x\n", VAR_5);


    FUNC_8(VAR_6, VAR_9, sizeof(VAR_9));
    VAR_5 = FUNC_2(VAR_3, 0, VAR_6, 0);
    FUNC_9(VAR_5 == VAR_1,
       "Expected IDxDiagContainer::EnumChildContainerNames to return E_INVALIDARG, got 0x%08x\n", VAR_5);
    FUNC_9(!FUNC_7(VAR_6, VAR_9, sizeof(VAR_9)),
       "Expected the container buffer to be untouched, got %s\n", FUNC_12(VAR_6));

    FUNC_8(VAR_6, VAR_9, sizeof(VAR_9));
    VAR_5 = FUNC_2(VAR_3, ~0, VAR_6, 0);
    FUNC_9(VAR_5 == VAR_1,
       "Expected IDxDiagContainer::EnumChildContainerNames to return E_INVALIDARG, got 0x%08x\n", VAR_5);
    FUNC_9(!FUNC_7(VAR_6, VAR_9, sizeof(VAR_9)),
       "Expected the container buffer to be untouched, got %s\n", FUNC_12(VAR_6));

    FUNC_8(VAR_6, VAR_9, sizeof(VAR_9));
    VAR_5 = FUNC_2(VAR_3, ~0, VAR_6, FUNC_0(VAR_6));
    FUNC_9(VAR_5 == VAR_1,
       "Expected IDxDiagContainer::EnumChildContainerNames to return E_INVALIDARG, got 0x%08x\n", VAR_5);
    FUNC_9(!FUNC_7(VAR_6, VAR_10, sizeof(VAR_10)),
       "Expected the container buffer string to be empty, got %s\n", FUNC_12(VAR_6));

    VAR_5 = FUNC_3(VAR_3, &VAR_7);
    FUNC_9(VAR_5 == VAR_2, "Expected IDxDiagContainer::GetNumberOfChildContainers to return S_OK, got 0x%08x\n", VAR_5);
    if (FUNC_1(VAR_5))
    {
        FUNC_10("IDxDiagContainer::GetNumberOfChildContainers failed\n");
        goto cleanup;
    }

    FUNC_11("Starting child container enumeration of the root container:\n");



    for (VAR_8 = 0; VAR_8 <= VAR_7; VAR_8++)
    {


        DWORD VAR_11 = 1;
        FUNC_8(VAR_6, VAR_9, sizeof(VAR_9));
        VAR_5 = FUNC_2(VAR_3, VAR_8, VAR_6, VAR_11);
        if (VAR_5 == VAR_1)
        {

            FUNC_9(VAR_7 == VAR_8,
               "Expected IDxDiagContainer::EnumChildContainerNames to return E_INVALIDARG "
               "on the last index %d, got 0x%08x\n", VAR_8, VAR_5);
            FUNC_9(VAR_6[0] == '\0',
               "Expected the container buffer string to be empty, got %s\n", FUNC_12(VAR_6));
            break;
        }
        else if (VAR_5 == VAR_0)
        {
            WCHAR VAR_12[256];

            FUNC_9(VAR_6[0] == '\0',
               "Expected the container buffer string to be empty, got %s\n", FUNC_12(VAR_6));


            VAR_5 = FUNC_2(VAR_3, VAR_8, VAR_12, FUNC_0(VAR_12));
            FUNC_9(VAR_5 == VAR_2,
               "Expected IDxDiagContainer::EnumChildContainerNames to return S_OK, got 0x%08x\n", VAR_5);






            for (VAR_11 = 2; VAR_11 <= 256; VAR_11++)
            {
                FUNC_8(VAR_6, VAR_9, sizeof(VAR_9));
                VAR_5 = FUNC_2(VAR_3, VAR_8, VAR_6, VAR_11);
                if (VAR_5 != VAR_0)
                    break;

                FUNC_9(!FUNC_7(VAR_12, VAR_6, sizeof(WCHAR)*(VAR_11 - 1)),
                   "Expected truncated container name string, got %s\n", FUNC_12(VAR_6));
            }

            FUNC_9(VAR_5 == VAR_2,
               "Expected IDxDiagContainer::EnumChildContainerNames to return S_OK, "
               "got hr = 0x%08x, buffersize = %d\n", VAR_5, VAR_11);
            if (VAR_5 == VAR_2)
                FUNC_11("pddc[%d] = %s, length = %d\n", VAR_8, FUNC_12(VAR_6), VAR_11);
        }
        else
        {
            FUNC_9(0, "IDxDiagContainer::EnumChildContainerNames unexpectedly returned 0x%08x\n", VAR_5);
            break;
        }
    }

cleanup:
    FUNC_4(VAR_3);
    FUNC_5(VAR_4);
}
