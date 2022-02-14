
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char const* LPWSTR ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const**) ;
 int FUNC_3 (int ,char const*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 char const* VAR_5 ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int VAR_6 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static void FUNC_12(void)
{
    BOOL VAR_7;
    HRESULT VAR_8;
    LPWSTR VAR_9;
    const WCHAR VAR_10[] = {'N', 'o', 'S', 'u', 'c', 'h',
            'A', 'c', 'c', 'o', 'u', 'n', 't', 0};
    const WCHAR VAR_11[] = {'N', 'o', 'S', 'u', 'c', 'h',
            'A', 'c', 'c', 'o', 'u', 'n', 't', 'B', 0};

    VAR_7 = FUNC_8();
    FUNC_7(VAR_7, "Failed to setup test_task\n");
    if (!VAR_7)
    {
        FUNC_9("Failed to create task.  Skipping tests.\n");
        return;
    }


    VAR_8 = FUNC_2(VAR_6, &VAR_9);



    if (VAR_8 == VAR_2 || VAR_8 == VAR_3)
    {
        FUNC_10("Security services are not supported\n");
        FUNC_5();
        return;
    }
    FUNC_7(VAR_8 == FUNC_1(VAR_0) ||
            VAR_8 == VAR_1,
            "Unset account name generated: 0x%08x\n", VAR_8);



    VAR_8 = FUNC_3(VAR_6, VAR_10, ((void*)0));
    FUNC_7(VAR_8 == VAR_4,
            "Failed setting dummy account with no password: %08x\n", VAR_8);
    VAR_8 = FUNC_2(VAR_6, &VAR_9);
    FUNC_7(VAR_8 == VAR_4 ||
       FUNC_4(VAR_8 == FUNC_1(VAR_0) ||
              VAR_8 == VAR_1 ||
              VAR_8 == 0x200),
       "GetAccountInformation failed: %08x\n", VAR_8);
    if (VAR_8 == VAR_4)
    {
        FUNC_7(!FUNC_6(VAR_9, VAR_10),
                "Got %s, expected %s\n", FUNC_11(VAR_9),
                FUNC_11(VAR_10));
        FUNC_0(VAR_9);
    }



    VAR_8 = FUNC_3(VAR_6, VAR_11,
            VAR_11);
    FUNC_7(VAR_8 == VAR_4,
            "Failed setting dummy account with password: %08x\n", VAR_8);
    VAR_8 = FUNC_2(VAR_6, &VAR_9);
    FUNC_7(VAR_8 == VAR_4 ||
       FUNC_4(VAR_8 == FUNC_1(VAR_0) ||
              VAR_8 == VAR_1 ||
              VAR_8 == 0x200),
       "GetAccountInformation failed: %08x\n", VAR_8);
    if (VAR_8 == VAR_4)
    {
        FUNC_7(!FUNC_6(VAR_9, VAR_11),
                "Got %s, expected %s\n", FUNC_11(VAR_9),
                FUNC_11(VAR_11));
        FUNC_0(VAR_9);
    }


    VAR_8 = FUNC_3(VAR_6, VAR_5, ((void*)0));
    FUNC_7(VAR_8 == VAR_4, "Failed setting system account: %08x\n", VAR_8);
    VAR_8 = FUNC_2(VAR_6, &VAR_9);
    FUNC_7(VAR_8 == VAR_4 ||
       FUNC_4(VAR_8 == FUNC_1(VAR_0) ||
              VAR_8 == VAR_1 ||
              VAR_8 == 0x200),
       "GetAccountInformation failed: %08x\n", VAR_8);
    if (VAR_8 == VAR_4)
    {
        FUNC_7(!FUNC_6(VAR_9, VAR_5),
                "Got %s, expected empty string\n", FUNC_11(VAR_9));
        FUNC_0(VAR_9);
    }

    FUNC_5();
    return;
}
