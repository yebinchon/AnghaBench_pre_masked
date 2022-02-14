
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char**) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;

int FUNC_5(int VAR_1, char *VAR_2[])
{
    char *VAR_3;
    if (VAR_1 < 3) {
        FUNC_0(VAR_0, "Too few arguments:\n");
        FUNC_0(VAR_0, " - input  jpt or jpp file\n");
        FUNC_0(VAR_0, " - output j2k file\n");
        return 1;
    }

    VAR_3 = FUNC_4(VAR_2[2], '.');
    if (VAR_3) {

        if (FUNC_3(VAR_3, ".jp2") == 0) {
            return FUNC_2(VAR_2);
        }
        if (FUNC_3(VAR_3, ".j2k") == 0) {
            return FUNC_1(VAR_2);
        }
    }

    FUNC_0(VAR_0, "Invalid file extension for output file: %s\n", VAR_2[2]);
    return 1;
}
