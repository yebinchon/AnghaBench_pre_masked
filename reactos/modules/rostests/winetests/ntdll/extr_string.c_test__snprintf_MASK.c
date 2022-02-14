
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(void)
{
    const char *VAR_0 = "XXXXXXXXXXXX";
    const char *VAR_1 = "hello world";
    char VAR_2[32];
    int VAR_3;

    VAR_3 = FUNC_3(((void*)0), 0, VAR_1);
    FUNC_2(VAR_3 == FUNC_1(VAR_1) || FUNC_0(VAR_3 == -1) ,
       "_snprintf returned %d, expected %d.\n", VAR_3, FUNC_1(VAR_1));

    if (VAR_3 != -1)
    {
        VAR_3 = FUNC_3(((void*)0), 1, VAR_1);
        FUNC_2(VAR_3 == FUNC_1(VAR_1) || VAR_3 < 0 ,
           "_snprintf returned %d, expected %d or < 0.\n", VAR_3, FUNC_1(VAR_1));
    }
    VAR_3 = FUNC_3(VAR_2, FUNC_6(VAR_1) - 1, VAR_1);
    FUNC_2(VAR_3 < 0, "_snprintf returned %d, expected < 0.\n", VAR_3);

    FUNC_5(VAR_2, VAR_0);
    VAR_3 = FUNC_3(VAR_2, FUNC_6(VAR_1), VAR_1);
    FUNC_2(VAR_3 == FUNC_1(VAR_1), "_snprintf returned %d, expected %d.\n", VAR_3, FUNC_1(VAR_1));
    FUNC_2(!FUNC_4(VAR_2, "hello worldX"), "_snprintf returned buffer '%s', expected 'hello worldX'.\n", VAR_2);

    FUNC_5(VAR_2, VAR_0);
    VAR_3 = FUNC_3(VAR_2, FUNC_6(VAR_1) + 1, VAR_1);
    FUNC_2(VAR_3 == FUNC_1(VAR_1), "_snprintf returned %d, expected %d.\n", VAR_3, FUNC_1(VAR_1));
    FUNC_2(!FUNC_4(VAR_2, VAR_1), "_snprintf returned buffer '%s', expected '%s'.\n", VAR_2, VAR_1);
}
