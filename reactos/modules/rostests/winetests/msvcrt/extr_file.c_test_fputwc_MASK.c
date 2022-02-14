
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*,char*,int ,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char,int *) ;
 int FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    char VAR_2[VAR_0];
    char VAR_3[VAR_0];
    FILE *VAR_4;
    char VAR_5[1024];
    int VAR_6;

    FUNC_1(VAR_0, VAR_2);
    FUNC_0(VAR_2, "", 0, VAR_3);

    VAR_4 = FUNC_4(VAR_3, "w");
    VAR_6 = FUNC_5('a', VAR_4);
    FUNC_8(VAR_6 == 'a', "fputwc returned %x, expected 'a'\n", VAR_6);
    VAR_6 = FUNC_5('\n', VAR_4);
    FUNC_8(VAR_6 == '\n', "fputwc returned %x, expected '\\n'\n", VAR_6);
    FUNC_3(VAR_4);

    VAR_4 = FUNC_4(VAR_3, "rb");
    VAR_6 = FUNC_6(VAR_5, 1, sizeof(VAR_5), VAR_4);
    FUNC_8(VAR_6 == 3, "fread returned %d, expected 3\n", VAR_6);
    FUNC_8(!FUNC_7(VAR_5, "a\r\n", 3), "incorrect file data\n");
    FUNC_3(VAR_4);

    if(VAR_1) {
        VAR_4 = FUNC_4(VAR_3, "w,ccs=unicode");
        VAR_6 = FUNC_5('a', VAR_4);
        FUNC_8(VAR_6 == 'a', "fputwc returned %x, expected 'a'\n", VAR_6);
        VAR_6 = FUNC_5('\n', VAR_4);
        FUNC_8(VAR_6 == '\n', "fputwc returned %x, expected '\\n'\n", VAR_6);
        FUNC_3(VAR_4);

        VAR_4 = FUNC_4(VAR_3, "rb");
        VAR_6 = FUNC_6(VAR_5, 1, sizeof(VAR_5), VAR_4);
        FUNC_8(VAR_6 == 8, "fread returned %d, expected 8\n", VAR_6);
        FUNC_8(!FUNC_7(VAR_5, "\xff\xfe\x61\x00\r\x00\n\x00", 8), "incorrect file data\n");
        FUNC_3(VAR_4);

        VAR_4 = FUNC_4(VAR_3, "w,ccs=utf-8");
        VAR_6 = FUNC_5('a', VAR_4);
        FUNC_8(VAR_6 == 'a', "fputwc returned %x, expected 'a'\n", VAR_6);
        VAR_6 = FUNC_5('\n', VAR_4);
        FUNC_8(VAR_6 == '\n', "fputwc returned %x, expected '\\n'\n", VAR_6);
        FUNC_3(VAR_4);

        VAR_4 = FUNC_4(VAR_3, "rb");
        VAR_6 = FUNC_6(VAR_5, 1, sizeof(VAR_5), VAR_4);
        FUNC_8(VAR_6 == 6, "fread returned %d, expected 6\n", VAR_6);
        FUNC_8(!FUNC_7(VAR_5, "\xef\xbb\xbf\x61\r\n", 6), "incorrect file data\n");
        FUNC_3(VAR_4);
    }else {
        FUNC_9("fputwc tests on unicode files\n");
    }

    FUNC_2(VAR_3);
}
