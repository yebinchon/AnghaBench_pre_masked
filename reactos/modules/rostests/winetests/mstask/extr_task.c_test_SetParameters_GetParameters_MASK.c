
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef float const* LPWSTR ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int FUNC_0 (float const*) ;
 scalar_t__ FUNC_1 (int ,float const**) ;
 scalar_t__ FUNC_2 (int ,float const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 float const* VAR_1 ;
 int FUNC_4 (float const*,float const*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (float const*) ;

__attribute__((used)) static void FUNC_9(void)
{
    BOOL VAR_3;
    HRESULT VAR_4;
    LPWSTR VAR_5;
    const WCHAR VAR_6[] = {'f','o','o','.','t','x','t', 0};
    const WCHAR VAR_7[] = {'f','o','o','.','t','x','t',' ',
        'b','a','r','.','t','x','t', 0};

    VAR_3 = FUNC_6();
    FUNC_5(VAR_3, "Failed to setup test_task\n");
    if (!VAR_3)
    {
        FUNC_7("Failed to create task.  Skipping tests.\n");
        return;
    }


    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetParameters failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        FUNC_5(!FUNC_4(VAR_5, VAR_1),
                "Got %s, expected empty string\n", FUNC_8(VAR_5));
        FUNC_0(VAR_5);
    }


    VAR_4 = FUNC_2(VAR_2, VAR_6);
    FUNC_5(VAR_4 == VAR_0, "Failed setting parameters %s: %08x\n",
            FUNC_8(VAR_6), VAR_4);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetParameters failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        FUNC_5(!FUNC_4(VAR_5, VAR_6), "Got %s, expected %s\n",
                FUNC_8(VAR_5), FUNC_8(VAR_6));
        FUNC_0(VAR_5);
    }


    VAR_4 = FUNC_2(VAR_2, VAR_7);
    FUNC_5(VAR_4 == VAR_0, "Failed setting parameters %s: %08x\n",
            FUNC_8(VAR_7), VAR_4);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetParameters failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        FUNC_5(!FUNC_4(VAR_5, VAR_7), "Got %s, expected %s\n",
                FUNC_8(VAR_5), FUNC_8(VAR_7));
        FUNC_0(VAR_5);
    }


    VAR_4 = FUNC_2(VAR_2, VAR_1);
    FUNC_5(VAR_4 == VAR_0, "Failed setting parameters %s: %08x\n",
            FUNC_8(VAR_1), VAR_4);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "GetParameters failed: %08x\n", VAR_4);
    if (VAR_4 == VAR_0)
    {
        FUNC_5(!FUNC_4(VAR_5, VAR_1),
                "Got %s, expected empty string\n", FUNC_8(VAR_5));
        FUNC_0(VAR_5);
    }

    FUNC_3();
    return;
}
