
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;
 int VAR_10 ;
 int FUNC_4 (int,char*,...) ;
 int VAR_11 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    const char VAR_12[] = "empty1";
    int VAR_13, VAR_14;

    if(!VAR_11) {
        FUNC_5("unicode file modes are not available, skipping setmode tests\n");
        return;
    }

    VAR_10 = 0xdeadbeef;
    VAR_14 = FUNC_2(-2, 0);
    FUNC_4(VAR_14 == -1, "_setmode returned %x, expected -1\n", VAR_14);
    FUNC_4(VAR_10 == VAR_1, "errno = %d\n", VAR_10);

    VAR_10 = 0xdeadbeef;
    VAR_14 = FUNC_2(-2, VAR_4);
    FUNC_4(VAR_14 == -1, "_setmode returned %x, expected -1\n", VAR_14);
    FUNC_4(VAR_10 == VAR_0, "errno = %d\n", VAR_10);

    VAR_13 = FUNC_1(VAR_12, VAR_3|VAR_7, VAR_9);
    FUNC_4(VAR_13 != -1, "failed to open file\n");

    VAR_10 = 0xdeadbeef;
    VAR_14 = FUNC_2(VAR_13, 0xffffffff);
    FUNC_4(VAR_14 == -1, "_setmode returned %x, expected -1\n", VAR_14);
    FUNC_4(VAR_10 == VAR_1, "errno = %d\n", VAR_10);

    VAR_10 = 0xdeadbeef;
    VAR_14 = FUNC_2(VAR_13, 0);
    FUNC_4(VAR_14 == -1, "_setmode returned %x, expected -1\n", VAR_14);
    FUNC_4(VAR_10 == VAR_1, "errno = %d\n", VAR_10);

    VAR_10 = 0xdeadbeef;
    VAR_14 = FUNC_2(VAR_13, VAR_2|VAR_4);
    FUNC_4(VAR_14 == -1, "_setmode returned %x, expected -1\n", VAR_14);
    FUNC_4(VAR_10 == VAR_1, "errno = %d\n", VAR_10);

    VAR_10 = 0xdeadbeef;
    VAR_14 = FUNC_2(VAR_13, VAR_8|VAR_5);
    FUNC_4(VAR_14 == -1, "_setmode returned %x, expected -1\n", VAR_14);
    FUNC_4(VAR_10 == VAR_1, "errno = %d\n", VAR_10);

    VAR_14 = FUNC_2(VAR_13, VAR_2);
    FUNC_4(VAR_14 == VAR_4, "_setmode returned %x, expected _O_TEXT\n", VAR_14);

    VAR_14 = FUNC_2(VAR_13, VAR_8);
    FUNC_4(VAR_14 == VAR_2, "_setmode returned %x, expected _O_BINARY\n", VAR_14);

    VAR_14 = FUNC_2(VAR_13, VAR_4);
    FUNC_4(VAR_14 == VAR_8, "_setmode returned %x, expected _O_WTEXT\n", VAR_14);

    VAR_14 = FUNC_2(VAR_13, VAR_5);
    FUNC_4(VAR_14 == VAR_4, "_setmode returned %x, expected _O_TEXT\n", VAR_14);

    VAR_14 = FUNC_2(VAR_13, VAR_6);
    FUNC_4(VAR_14 == VAR_8, "_setmode returned %x, expected _O_WTEXT\n", VAR_14);

    VAR_14 = FUNC_2(VAR_13, VAR_4);
    FUNC_4(VAR_14 == VAR_8, "_setmode returned %x, expected _O_WTEXT\n", VAR_14);

    FUNC_0(VAR_13);
    FUNC_3(VAR_12);
}
