
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_9__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
struct TYPE_8__ {int cbStruct; char* pwszDLLFileName; char* pwszGetFuncName; char* pwszPutFuncName; char* pwszCreateFuncName; char* pwszVerifyFuncName; char* pwszRemoveFuncName; char* pwszIsFunctionNameFmt2; char* pwszIsFunctionName; char* pwszGetCapFuncName; TYPE_3__* pgSubject; } ;
typedef TYPE_2__ SIP_ADD_NEWPROVIDER ;
typedef TYPE_3__ GUID ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    BOOL VAR_3;
    SIP_ADD_NEWPROVIDER VAR_4;
    GUID VAR_5 = { 0xdeadbe, 0xefde, 0xadbe, { 0xef,0xde,0xad,0xbe,0xef,0xde,0xad,0xbe }};
    static WCHAR VAR_6[] = {'d','e','a','d','b','e','e','f','.','d','l','l',0 };
    static WCHAR VAR_7[] = {'d','u','m','m','y','f','u','n','c','t','i','o','n',0 };


    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_1(((void*)0));
    FUNC_5 (!VAR_3, "Expected CryptSIPRemoveProvider to fail.\n");
    FUNC_5 (FUNC_2() == VAR_2,
        "Expected ERROR_INVALID_PARAMETER, got %d.\n", FUNC_2());


    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_1(&VAR_5);
    if (!VAR_3 && FUNC_2() == VAR_0)
    {

        FUNC_6("Need admin rights\n");
    }
    else
    {





        if (!VAR_3)
            FUNC_5 (FUNC_2() == VAR_1,
                "Expected ERROR_FILE_NOT_FOUND, got %d.\n", FUNC_2());
    }




    FUNC_4(&VAR_4, 0, sizeof(SIP_ADD_NEWPROVIDER));
    VAR_4.cbStruct = sizeof(SIP_ADD_NEWPROVIDER);
    VAR_4.pgSubject = &VAR_5;
    VAR_4.pwszDLLFileName = VAR_6;
    VAR_4.pwszGetFuncName = VAR_7;
    VAR_4.pwszPutFuncName = VAR_7;
    VAR_4.pwszCreateFuncName = VAR_7;
    VAR_4.pwszVerifyFuncName = VAR_7;
    VAR_4.pwszRemoveFuncName = VAR_7;
    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_0(&VAR_4);
    if (!VAR_3 && FUNC_2() == VAR_0)
    {
        FUNC_6("Need admin rights\n");
        return;
    }
    FUNC_5 ( VAR_3, "CryptSIPAddProvider should have succeeded, last error %d\n", FUNC_2());





    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_1(&VAR_5);





    if (!VAR_3)
        FUNC_5 (FUNC_2() == VAR_1,
            "Expected ERROR_FILE_NOT_FOUND, got %d.\n", FUNC_2());


    FUNC_4(&VAR_4, 0, sizeof(SIP_ADD_NEWPROVIDER));
    VAR_4.cbStruct = sizeof(SIP_ADD_NEWPROVIDER);
    VAR_4.pgSubject = &VAR_5;
    VAR_4.pwszDLLFileName = VAR_6;
    VAR_4.pwszGetFuncName = VAR_7;
    VAR_4.pwszPutFuncName = VAR_7;
    VAR_4.pwszCreateFuncName = VAR_7;
    VAR_4.pwszVerifyFuncName = VAR_7;
    VAR_4.pwszRemoveFuncName = VAR_7;
    VAR_4.pwszIsFunctionNameFmt2 = VAR_7;
    VAR_4.pwszIsFunctionName = VAR_7;

    VAR_4.pwszGetCapFuncName = VAR_7;

    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_0(&VAR_4);
    FUNC_5 ( VAR_3, "CryptSIPAddProvider should have succeeded, last error %d\n", FUNC_2());


    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_1(&VAR_5);
    FUNC_5 ( VAR_3, "CryptSIPRemoveProvider should have succeeded, last error %d\n", FUNC_2());
}
