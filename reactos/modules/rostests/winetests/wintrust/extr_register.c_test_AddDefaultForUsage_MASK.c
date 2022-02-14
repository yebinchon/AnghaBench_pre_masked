
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_8__ {int cbStruct; char* pwszDllName; char* pwszLoadCallbackDataFunctionName; char* pwszFreeCallbackDataFunctionName; TYPE_2__* pgActionID; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef TYPE_2__ GUID ;
typedef TYPE_3__ CRYPT_PROVIDER_REGDEFUSAGE ;
typedef char CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (char const*,TYPE_3__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_1;
    static GUID VAR_2 = { 0xdeadbeef, 0xdead, 0xbeef, { 0xde,0xad,0xbe,0xef,0xde,0xad,0xbe,0xef }};
    static WCHAR VAR_3[] = {'d','e','a','d','b','e','e','f','.','d','l','l',0 };
    static CHAR VAR_4[] = "dummyfunction";
    static const CHAR VAR_5[] = "1.2.3.4.5.6.7.8.9.10";
    static CRYPT_PROVIDER_REGDEFUSAGE VAR_6;

    if (!&FUNC_4)
    {
        FUNC_5("WintrustAddDefaultForUsage is not available\n");
        return;
    }


    FUNC_1(0xdeadbeef);
    VAR_1 = FUNC_4(((void*)0), ((void*)0));
    FUNC_3 (!VAR_1, "Expected WintrustAddDefaultForUsage to fail.\n");
    FUNC_3 (FUNC_0() == VAR_0,
        "Expected ERROR_INVALID_PARAMETER, got %u.\n", FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_1 = FUNC_4(VAR_5, ((void*)0));
    FUNC_3 (!VAR_1, "Expected WintrustAddDefaultForUsage to fail.\n");
    FUNC_3 (FUNC_0() == VAR_0,
        "Expected ERROR_INVALID_PARAMETER, got %u.\n", FUNC_0());


    FUNC_2(&VAR_6, 0 , sizeof(CRYPT_PROVIDER_REGDEFUSAGE));
    VAR_6.cbStruct = sizeof(CRYPT_PROVIDER_REGDEFUSAGE);
    VAR_6.pgActionID = &VAR_2;
    VAR_6.pwszDllName = VAR_3;
    VAR_6.pwszLoadCallbackDataFunctionName = VAR_4;
    VAR_6.pwszFreeCallbackDataFunctionName = VAR_4;
    FUNC_1(0xdeadbeef);
    VAR_1 = FUNC_4(((void*)0), &VAR_6);
    FUNC_3 (!VAR_1, "Expected WintrustAddDefaultForUsage to fail.\n");
    FUNC_3 (FUNC_0() == VAR_0,
        "Expected ERROR_INVALID_PARAMETER, got %u.\n", FUNC_0());


    FUNC_2(&VAR_6, 0 , sizeof(CRYPT_PROVIDER_REGDEFUSAGE));
    VAR_6.cbStruct = 0;
    VAR_6.pgActionID = &VAR_2;
    VAR_6.pwszDllName = VAR_3;
    VAR_6.pwszLoadCallbackDataFunctionName = VAR_4;
    VAR_6.pwszFreeCallbackDataFunctionName = VAR_4;
    FUNC_1(0xdeadbeef);
    VAR_1 = FUNC_4(VAR_5, &VAR_6);
    FUNC_3 (!VAR_1, "Expected WintrustAddDefaultForUsage to fail.\n");
    FUNC_3 (FUNC_0() == VAR_0,
        "Expected ERROR_INVALID_PARAMETER, got %u.\n", FUNC_0());
}
