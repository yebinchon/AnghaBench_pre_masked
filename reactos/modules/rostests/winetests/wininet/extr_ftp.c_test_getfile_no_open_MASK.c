
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*,char*,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_5;


    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_0(((void*)0), "welcome.msg", "should_be_non_existing_deadbeef", VAR_2, VAR_3, VAR_4, 0);
    FUNC_3 ( VAR_5 == VAR_2, "Expected FtpGetFileA to fail\n");
    FUNC_3 ( FUNC_1() == VAR_0 ||
         FUNC_1() == VAR_1,
        "Expected ERROR_INTERNET_NOT_INITIALIZED or ERROR_INVALID_HANDLE (win98), got %d\n", FUNC_1());
}
