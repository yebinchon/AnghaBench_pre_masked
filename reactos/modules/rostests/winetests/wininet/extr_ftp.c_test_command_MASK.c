
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int command_test ;
typedef int HINTERNET ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;






 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

 int FUNC_2 (int,char*,unsigned int,char*,...) ;
 scalar_t__ FUNC_3 (int ,int const,int ,char const*,int ,int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(HINTERNET VAR_1, HINTERNET VAR_2)
{
    BOOL VAR_3;
    DWORD VAR_4;
    unsigned int VAR_5;
    static const struct
    {
        BOOL ret;
        DWORD error;
        const char *cmd;
    }
    VAR_6[] =
    {
        { 129, 131, ((void*)0) },
        { 129, 131, "" },
        { 129, 132, "HELO" },
        { 129, 132, "SIZE " },
        { 129, 132, " SIZE" },
        { 129, 132, "SIZE " },
        { 129, 132, "SIZE /welcome.msg /welcome.msg" },
        { 129, 132, "SIZE  /welcome.msg" },
        { 129, 132, "SIZE /welcome.msg " },
        { 128, 130, "SIZE\t/welcome.msg" },
        { 128, 130, "SIZE /welcome.msg" },
        { 129, 132, "PWD /welcome.msg" },
        { 128, 130, "PWD" }
    };

    if (!&FUNC_3)
    {
        FUNC_4("FtpCommandA() is not available. Skipping the Ftp command tests\n");
        return;
    }

    for (VAR_5 = 0; VAR_5 < sizeof(VAR_6) / sizeof(VAR_6[0]); VAR_5++)
    {
        FUNC_1(0xdeadbeef);
        VAR_3 = FUNC_3(VAR_1, 129, VAR_0, VAR_6[VAR_5].cmd, 0, ((void*)0));
        VAR_4 = FUNC_0();

        FUNC_2(VAR_3 == VAR_6[VAR_5].ret, "%d: expected FtpCommandA to %s\n", VAR_5, VAR_6[VAR_5].ret ? "succeed" : "fail");
        FUNC_2(VAR_4 == VAR_6[VAR_5].error, "%d: expected error %u, got %u\n", VAR_5, VAR_6[VAR_5].error, VAR_4);
    }
}
