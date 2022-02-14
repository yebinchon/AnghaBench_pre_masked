
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HINTERNET ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(HINTERNET VAR_5, HINTERNET VAR_6)
{
    BOOL VAR_7;


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_0(((void*)0) , "should_be_non_existing_deadbeef", "new");
    FUNC_3 ( VAR_7 == VAR_4, "Expected FtpRenameFileA to fail\n");
    FUNC_3 ( FUNC_1() == VAR_2,
        "Expected ERROR_INVALID_HANDLE, got %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_0(VAR_5 , ((void*)0), "new");
    FUNC_3 ( VAR_7 == VAR_4, "Expected FtpRenameFileA to fail\n");
    FUNC_3 ( FUNC_1() == VAR_3,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_0(VAR_5 , "should_be_non_existing_deadbeef", ((void*)0));
    FUNC_3 ( VAR_7 == VAR_4, "Expected FtpRenameFileA to fail\n");
    FUNC_3 ( FUNC_1() == VAR_3,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_0(VAR_5 , "should_be_non_existing_deadbeef", "new");
    FUNC_3 ( VAR_7 == VAR_4, "Expected FtpRenameFileA to fail\n");
    FUNC_3 ( FUNC_1() == VAR_0,
        "Expected ERROR_INTERNET_EXTENDED_ERROR, got %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_0(VAR_6 , "should_be_non_existing_deadbeef", ((void*)0));
    FUNC_3 ( VAR_7 == VAR_4, "Expected FtpRenameFileA to fail\n");
    FUNC_3 ( FUNC_1() == VAR_1,
        "Expected ERROR_INTERNET_INCORRECT_HANDLE_TYPE, got %d\n", FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_0(VAR_6 , "should_be_non_existing_deadbeef", "new");
    FUNC_3 ( VAR_7 == VAR_4, "Expected FtpRenameFileA to fail\n");
    FUNC_3 ( FUNC_1() == VAR_1,
        "Expected ERROR_INTERNET_INCORRECT_HANDLE_TYPE, got %d\n", FUNC_1());
}
