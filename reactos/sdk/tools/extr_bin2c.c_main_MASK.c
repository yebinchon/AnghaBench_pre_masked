
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*,char*) ;
 size_t FUNC_1 (int *,int *,int) ;
 size_t FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_1, char* VAR_2[])
{
    FILE* VAR_3;
    FILE* VAR_4;
    FILE* VAR_5;
    size_t VAR_6;


    if (VAR_1 < 6)
    {
        FUNC_6(VAR_2[0]);
        return -1;
    }


    if (FUNC_0(VAR_2[4], "BIN" ) != 0 &&
        FUNC_0(VAR_2[4], "BINSTR") != 0 &&
        FUNC_0(VAR_2[4], "STR" ) != 0)
    {
        FUNC_6(VAR_2[0]);
        return -1;
    }


    VAR_3 = FUNC_4(VAR_2[1], "rb");
    if (!VAR_3)
    {
        FUNC_5(&VAR_0, "ERROR: Couldn't open data file '%s'.\n", VAR_2[1]);
        return -1;
    }
    VAR_4 = FUNC_4(VAR_2[2], "w");
    if (!VAR_4)
    {
        FUNC_3(VAR_3);
        FUNC_5(&VAR_0, "ERROR: Couldn't create output source file '%s'.\n", VAR_2[2]);
        return -1;
    }
    VAR_5 = FUNC_4(VAR_2[3], "w");
    if (!VAR_5)
    {
        FUNC_3(VAR_4);
        FUNC_3(VAR_3);
        FUNC_5(&VAR_0, "ERROR: Couldn't create output header file '%s'.\n", VAR_2[3]);
        return -1;
    }


    FUNC_5(VAR_4, "/* This file is autogenerated, do not edit. */\n\n");
    if (VAR_1 >= 8)
    {

        FUNC_5(VAR_4, "#include \"%s\"\n", VAR_2[7]);
    }
    FUNC_5(VAR_4, "#include \"%s\"\n\n", VAR_2[3]);


    if (VAR_1 >= 7)
    {

        FUNC_5(VAR_4, "%s ", VAR_2[6]);
    }
    FUNC_5(VAR_4, "unsigned char %s[] =", VAR_2[5]);


    if (FUNC_0(VAR_2[4], "BIN") == 0)
        VAR_6 = FUNC_1(VAR_3, VAR_4, 0);
    else if (FUNC_0(VAR_2[4], "BINSTR") == 0)
        VAR_6 = FUNC_1(VAR_3, VAR_4, 1);
    else
        VAR_6 = FUNC_2(VAR_3, VAR_4);

    FUNC_5(VAR_4, ";\n");
    FUNC_3(VAR_4);


    FUNC_5(VAR_5, "/* This file is autogenerated, do not edit. */\n\n");
    FUNC_5(VAR_5, "#define %s_SIZE %lu\n" , VAR_2[5], (unsigned long)VAR_6);
    FUNC_5(VAR_5, "extern unsigned char %s[%lu];\n", VAR_2[5], (unsigned long)VAR_6);
    FUNC_3(VAR_5);


    FUNC_3(VAR_3);

    return 0;
}
