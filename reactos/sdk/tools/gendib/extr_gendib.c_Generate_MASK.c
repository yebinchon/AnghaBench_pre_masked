
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PROPINFO ;
typedef int FILE ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,unsigned int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 int * FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 unsigned int VAR_0 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,unsigned int) ;
 int VAR_1 ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(char *VAR_2, unsigned VAR_3)
{
    FILE *VAR_4;
    unsigned VAR_5;
    PROPINFO VAR_6;
    char *VAR_7;

    VAR_7 = FUNC_12(FUNC_17(VAR_2) + 12);
    if (((void*)0) == VAR_7)
    {
        FUNC_10(VAR_1, "Out of memory\n");
        FUNC_7(1);
    }
    FUNC_16(VAR_7, VAR_2);
    if ('/' != VAR_7[FUNC_17(VAR_7) - 1])
    {
        FUNC_15(VAR_7, "/");
    }
    FUNC_14(VAR_7 + FUNC_17(VAR_7), "dib%ugen.c", VAR_3);

    VAR_4 = FUNC_9(VAR_7, "w");
    FUNC_11(VAR_7);
    if (((void*)0) == VAR_4)
    {
        FUNC_13("Error opening output file");
        FUNC_7(1);
    }

    FUNC_5(VAR_4);
    FUNC_6(VAR_4, "/* This is a generated file. Please do not edit */\n");
    FUNC_6(VAR_4, "\n");
    FUNC_6(VAR_4, "#include <win32k.h>\n");
    FUNC_2(VAR_4);

    VAR_6 = FUNC_4(VAR_0);
    FUNC_1(VAR_4, VAR_3, VAR_6);
    for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
    {
        VAR_6 = FUNC_4(VAR_5);
        if (((void*)0) != VAR_6)
        {
            FUNC_1(VAR_4, VAR_3, VAR_6);
        }
    }
    FUNC_3(VAR_4, VAR_3);
    FUNC_0(VAR_4, VAR_3);

    FUNC_8(VAR_4);
}
