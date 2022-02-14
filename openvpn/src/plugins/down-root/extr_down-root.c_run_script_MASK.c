
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (int,char*,char* const) ;
 int FUNC_1 (char* const,char* const*,char* const*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,char* const) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__,int*,int ) ;
 int FUNC_5 (char*,char* const) ;

__attribute__((used)) static int
FUNC_6(char *const *VAR_1, char *const *VAR_2)
{
    pid_t VAR_3;
    int VAR_4 = 0;

    VAR_3 = FUNC_2();
    if (VAR_3 == (pid_t)0)
    {
        FUNC_1(VAR_1[0], VAR_1, VAR_2);

        FUNC_0(127, "DOWN-ROOT: Failed execute: %s", VAR_1[0]);
    }
    else if (VAR_3 < (pid_t)0)
    {
        FUNC_5("DOWN-ROOT: Failed to fork child to run %s", VAR_1[0]);
        return -1;
    }
    else
    {
        if (FUNC_4(VAR_3, &VAR_4, 0) != VAR_3)
        {

            FUNC_3(VAR_0, "DOWN-ROOT: waitpid() failed, don't know exit code of child (%s)\n", VAR_1[0]);
            return -1;
        }
    }
    return VAR_4;
}
