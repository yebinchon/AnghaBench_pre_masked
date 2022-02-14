
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char const* LPWSTR ;
typedef char const* LPCWSTR ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,char const**) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 char const* VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int,char*,...) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static void FUNC_10(void)
{
    BOOL VAR_3;
    HRESULT VAR_4;
    LPWSTR VAR_5;
    LPCWSTR VAR_6;
    const WCHAR VAR_7[] = {'N','o','S','u','c','h',
            'A','p','p','l','i','c','a','t','i','o','n', 0};
    const WCHAR VAR_8[] = {
            'n','o','t','e','p','a','d','.','e','x','e', 0};
    const WCHAR VAR_9[] = {'n','o','t','e','p','a','d', 0};

    VAR_3 = FUNC_7();
    FUNC_5(VAR_3, "Failed to setup test_task\n");
    if (!VAR_3)
    {
        FUNC_8("Failed to create task.  Skipping tests.\n");
        return;
    }


    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetApplicationName failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        FUNC_5(!FUNC_4(VAR_5, VAR_1),
                "Got %s, expected empty string\n", FUNC_9(VAR_5));
        FUNC_0(VAR_5);
    }



    VAR_4 = FUNC_2(VAR_2, VAR_7);
    FUNC_5(VAR_4 == VAR_0, "Failed setting name %s: %08x\n",
            FUNC_9(VAR_7), VAR_4);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetApplicationName failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        VAR_6 = FUNC_6(VAR_7);
        FUNC_5(!FUNC_4(VAR_5, VAR_6), "Got %s, expected %s\n",
                FUNC_9(VAR_5), FUNC_9(VAR_6));
        FUNC_0(VAR_5);
    }



    VAR_4 = FUNC_2(VAR_2, VAR_8);
    FUNC_5(VAR_4 == VAR_0, "Failed setting name %s: %08x\n",
            FUNC_9(VAR_8), VAR_4);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetApplicationName failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        VAR_6 = FUNC_6(VAR_8);
        FUNC_5(!FUNC_4(VAR_5, VAR_6), "Got %s, expected %s\n",
                FUNC_9(VAR_5), FUNC_9(VAR_6));
        FUNC_0(VAR_5);
    }



    VAR_4 = FUNC_2(VAR_2, VAR_9);
    FUNC_5(VAR_4 == VAR_0, "Failed setting name %s: %08x\n", FUNC_9(VAR_9), VAR_4);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetApplicationName failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        VAR_6 = FUNC_6(VAR_8);
        if (FUNC_4(VAR_5, VAR_6) != 0)
        {
            VAR_6 = FUNC_6(VAR_9);
            FUNC_5(!FUNC_4(VAR_5, VAR_6), "Got %s, expected %s\n",
               FUNC_9(VAR_5), FUNC_9(VAR_6));
        }
        FUNC_0(VAR_5);
    }




    VAR_4 = FUNC_2(VAR_2, VAR_7);
    FUNC_5(VAR_4 == VAR_0, "Failed setting name %s: %08x\n",
            FUNC_9(VAR_7), VAR_4);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetApplicationName failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        VAR_6 = FUNC_6(VAR_7);
        FUNC_5(!FUNC_4(VAR_5, VAR_6), "Got %s, expected %s\n",
                FUNC_9(VAR_5), FUNC_9(VAR_6));
        FUNC_0(VAR_5);
    }


    VAR_4 = FUNC_2(VAR_2, VAR_1);
    FUNC_5(VAR_4 == VAR_0, "Failed setting name %s: %08x\n", FUNC_9(VAR_1), VAR_4);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetApplicationName failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        FUNC_5(!FUNC_4(VAR_5, VAR_1),
                "Got %s, expected empty string\n", FUNC_9(VAR_5));
        FUNC_0(VAR_5);
    }

    FUNC_3();
    return;
}
