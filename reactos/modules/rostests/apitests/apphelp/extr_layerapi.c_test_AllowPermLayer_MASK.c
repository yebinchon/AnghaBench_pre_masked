
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    char VAR_4[20];
    char VAR_5;
    UINT VAR_6 = 0;
    FUNC_1(FUNC_2(((void*)0)) == VAR_1, "Expected AllowPermLayer to fail for NULL\n");
    if (VAR_3 < VAR_2)
    {
        FUNC_1(FUNC_4("-:"), "Expected AllowPermLayer to succeed\n");
        FUNC_1(FUNC_4("@:"), "Expected AllowPermLayer to succeed\n");
        FUNC_1(FUNC_4("4:"), "Expected AllowPermLayer to succeed\n");
        FUNC_1(FUNC_4("*:"), "Expected AllowPermLayer to succeed\n");
    }
    FUNC_1(FUNC_4("*a") == VAR_1, "Expected AllowPermLayer to fail\n");
    FUNC_1(FUNC_4("*\\") == VAR_1, "Expected AllowPermLayer to fail\n");
    for (VAR_5 = 'a'; VAR_5 <= 'z'; ++VAR_5)
    {
        FUNC_3(VAR_4, "%c:\\", VAR_5);
        VAR_6 = FUNC_0(VAR_4);
        FUNC_1(FUNC_4(VAR_4) == (VAR_6 != VAR_0), "Expected AllowPermLayer to be %d for %c:\\\n", (VAR_6 != VAR_0), VAR_5);
    }
}
