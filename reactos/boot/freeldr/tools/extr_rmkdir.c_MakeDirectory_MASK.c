
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_0)
{
    char VAR_1[1024];

    FUNC_1(VAR_1, 1024);

    if (FUNC_0(VAR_0) == 0)
    {
        FUNC_0(VAR_1);
        return 0;
    }
    if (FUNC_2(VAR_0) != 0)
    {
        FUNC_3("Failed to create directory");
        return 1;
    }


    if (FUNC_0(VAR_0) != 0)
    {
        FUNC_3("Failed to change directory");
        return 1;
    }

    FUNC_0(VAR_1);

    return 0;
}
