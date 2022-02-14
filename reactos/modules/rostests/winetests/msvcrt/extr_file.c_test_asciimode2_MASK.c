
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obuf ;
typedef int ibuf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char const*,int,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int,char*,...) ;
 scalar_t__ FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    FILE *VAR_0;
    char VAR_1[4];
    int VAR_2;
    static const char VAR_3[] =
"00\n"
"000000000000000000000000000000000000000000000000000000000000000000000000000000\n"
"000000000000000000000000000000000000000000000000000000000000000000000000000000\n"
"000000000000000000000000000000000000000000000000000000000000000000000000000000\n"
"000000000000000000000000000000000000000000000000000000000000000000000000000000\n"
"000000000000000000000000000000000000000000000000000000000000000000000000000000\n"
"000000000000000000000000000000000000000000000000000000000000000000000000000000\n"
"000000000000000000\n"
"1111111111111111111";

    VAR_0 = FUNC_1("ascii2.tst", "wt");
    FUNC_3(VAR_3, 1, sizeof(VAR_3), VAR_0);
    FUNC_0(VAR_0);

    VAR_0 = FUNC_1("ascii2.tst", "rt");
    FUNC_6(FUNC_4(VAR_0) == '0', "first char not 0\n");
    FUNC_5(VAR_1, 0, sizeof(VAR_1));
    VAR_2 = FUNC_2(VAR_1, 1, sizeof(VAR_1), VAR_0);
    FUNC_6(VAR_2 == sizeof(VAR_1), "fread i %d != sizeof(ibuf)\n", VAR_2);
    FUNC_6(0 == FUNC_7(VAR_1, VAR_3+1, sizeof(VAR_1)), "ibuf != obuf\n");
    FUNC_0(VAR_0);
    FUNC_8("ascii2.tst");
}
