
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

int
FUNC_5(char *VAR_2, char *VAR_3)
{
    char VAR_4[VAR_1];

    FUNC_3(VAR_4, VAR_0, VAR_2, VAR_3);
    FUNC_1(2, "Executing: %s\n", VAR_4);
    FUNC_2(VAR_3);
    if (FUNC_0(VAR_3))
    {
        FUNC_1(0, "Cannot remove dst %s before copy\n", VAR_3);
        return 1;
    }
    if (FUNC_4(VAR_4) < 0)
    {
        FUNC_1(0, "Cannot copy %s to %s\n", VAR_2, VAR_3);
        FUNC_1(1, "Failed to execute: '%s'\n", VAR_4);
        return 2;
    }

    if (!FUNC_0(VAR_3))
    {
        FUNC_1(0, "Dst %s does not exist after copy\n", VAR_3);
        return 2;
    }
    return 0;
}
