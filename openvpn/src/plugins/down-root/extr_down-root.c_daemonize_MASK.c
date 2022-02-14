
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 char* FUNC_4 (char*,char const**) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0[])
{
    const char *VAR_1 = FUNC_4("daemon", VAR_0);
    if (VAR_1 && VAR_1[0] == '1')
    {
        const char *VAR_2 = FUNC_4("daemon_log_redirect", VAR_0);
        int VAR_3 = -1;
        if (VAR_2 && VAR_2[0] == '1')
        {
            VAR_3 = FUNC_2(2);
        }
        if (FUNC_1(0, 0) < 0)
        {
            FUNC_5("DOWN-ROOT: daemonization failed");
        }
        else if (VAR_3 >= 3)
        {
            FUNC_3(VAR_3, 2);
            FUNC_0(VAR_3);
        }
    }
}
