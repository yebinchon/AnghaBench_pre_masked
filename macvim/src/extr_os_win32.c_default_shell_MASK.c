
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

char *
FUNC_1(void)
{
    char* VAR_3 = ((void*)0);

    FUNC_0();

    if (VAR_2 == VAR_0)
 VAR_3 = "cmd.exe";
    else if (VAR_2 == VAR_1)
 VAR_3 = "command.com";

    return VAR_3;
}
