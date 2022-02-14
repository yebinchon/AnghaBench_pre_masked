
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,int) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12;
    char VAR_13[6], VAR_14[4] = {'a', '\n', 'b', '\n'};

    VAR_12 = &FUNC_11 && &FUNC_12 && !FUNC_11(&VAR_11);
    if (!VAR_12)
        FUNC_13("_fmode can't be set, skipping mode tests\n");

    if (VAR_12)
        FUNC_12(VAR_4);
    VAR_7 = FUNC_4("_creat.tst", 0);
    FUNC_10(VAR_7 > 0, "_creat failed\n");
    FUNC_8(VAR_7, VAR_14, 4);
    if (VAR_12) {
        VAR_8 = FUNC_7(VAR_7);
        FUNC_10(VAR_8 == 6, "expected pos 6 (text mode), got %d\n", VAR_8);
    }
    FUNC_10(FUNC_5(VAR_7, VAR_2, 0) == 0, "_lseek failed\n");
    VAR_9 = FUNC_6(VAR_7, VAR_13, 6);
    FUNC_10(VAR_9 == 4, "_read returned %d, expected 4\n", VAR_9);
    VAR_9 = VAR_9 > 0 ? VAR_9 > 4 ? 4 : VAR_9 : 0;
    FUNC_10(FUNC_9(VAR_13, VAR_14, VAR_9) == 0, "_read returned wrong contents\n");
    FUNC_3(VAR_7);
    VAR_10 = FUNC_1("_creat.tst") & VAR_1;
    FUNC_10(VAR_10, "expected read-only file\n");
    FUNC_2("_creat.tst", VAR_0);
    FUNC_0("_creat.tst");

    if (VAR_12)
        FUNC_12(VAR_3);
    VAR_7 = FUNC_4("_creat.tst", VAR_5 | VAR_6);
    FUNC_10(VAR_7 > 0, "_creat failed\n");
    FUNC_8(VAR_7, VAR_14, 4);
    if (VAR_12) {
        VAR_8 = FUNC_7(VAR_7);
        FUNC_10(VAR_8 == 4, "expected pos 4 (binary mode), got %d\n", VAR_8);
    }
    FUNC_10(FUNC_5(VAR_7, VAR_2, 0) == 0, "_lseek failed\n");
    VAR_9 = FUNC_6(VAR_7, VAR_13, 6);
    FUNC_10(VAR_9 == 4, "_read returned %d, expected 4\n", VAR_9);
    VAR_9 = VAR_9 > 0 ? VAR_9 > 4 ? 4 : VAR_9 : 0;
    FUNC_10(FUNC_9(VAR_13, VAR_14, VAR_9) == 0, "_read returned wrong contents\n");
    FUNC_3(VAR_7);
    VAR_10 = FUNC_1("_creat.tst") & VAR_1;
    FUNC_10(!VAR_10, "expected rw file\n");
    FUNC_2("_creat.tst", VAR_0);
    FUNC_0("_creat.tst");

    if (VAR_12)
        FUNC_12(VAR_11);
}
