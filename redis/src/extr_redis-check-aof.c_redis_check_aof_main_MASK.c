
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redis_stat {int st_size; } ;
typedef int sig ;
typedef int off_t ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int,char**,int *) ;
 int FUNC_11 (int ,struct redis_stat*) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;

int FUNC_15(int VAR_2, char **VAR_3) {
    char *VAR_4;
    int VAR_5 = 0;

    if (VAR_2 < 2) {
        FUNC_8("Usage: %s [--fix] <file.aof>\n", VAR_3[0]);
        FUNC_0(1);
    } else if (VAR_2 == 2) {
        VAR_4 = VAR_3[1];
    } else if (VAR_2 == 3) {
        if (FUNC_13(VAR_3[1],"--fix") != 0) {
            FUNC_8("Invalid argument: %s\n", VAR_3[1]);
            FUNC_0(1);
        }
        VAR_4 = VAR_3[2];
        VAR_5 = 1;
    } else {
        FUNC_8("Invalid arguments\n");
        FUNC_0(1);
    }

    FILE *VAR_6 = FUNC_4(VAR_4,"r+");
    if (VAR_6 == ((void*)0)) {
        FUNC_8("Cannot open file: %s\n", VAR_4);
        FUNC_0(1);
    }

    struct redis_stat VAR_7;
    if (FUNC_11(FUNC_3(VAR_6),&VAR_7) == -1) {
        FUNC_8("Cannot stat file: %s\n", VAR_4);
        FUNC_0(1);
    }

    off_t VAR_8 = VAR_7.st_size;
    if (VAR_8 == 0) {
        FUNC_8("Empty file: %s\n", VAR_4);
        FUNC_0(1);
    }



    if (VAR_8 >= 8) {
        char VAR_9[5];
        int VAR_10 = FUNC_5(VAR_9,sizeof(VAR_9),1,VAR_6) == 1 &&
                            FUNC_7(VAR_9,"REDIS",sizeof(VAR_9)) == 0;
        FUNC_12(VAR_6);
        if (VAR_10) {
            FUNC_8("The AOF appears to start with an RDB preamble.\n"
                   "Checking the RDB preamble to start:\n");
            if (FUNC_10(VAR_2,VAR_3,VAR_6) == VAR_0) {
                FUNC_8("RDB preamble of AOF file is not sane, aborting.\n");
                FUNC_0(1);
            } else {
                FUNC_8("RDB preamble is OK, proceeding with AOF tail...\n");
            }
        }
    }

    off_t VAR_11 = FUNC_9(VAR_6);
    off_t VAR_12 = VAR_8-VAR_11;
    FUNC_8("AOF analyzed: size=%lld, ok_up_to=%lld, diff=%lld\n",
        (long long) VAR_8, (long long) VAR_11, (long long) VAR_12);
    if (VAR_12 > 0) {
        if (VAR_5) {
            char VAR_13[2];
            FUNC_8("This will shrink the AOF from %lld bytes, with %lld bytes, to %lld bytes\n",(long long)VAR_8,(long long)VAR_12,(long long)VAR_11);
            FUNC_8("Continue? [y/N]: ");
            if (FUNC_2(VAR_13,sizeof(VAR_13),VAR_1) == ((void*)0) ||
                FUNC_14(VAR_13,"y",1) != 0) {
                    FUNC_8("Aborting...\n");
                    FUNC_0(1);
            }
            if (FUNC_6(FUNC_3(VAR_6), VAR_11) == -1) {
                FUNC_8("Failed to truncate AOF\n");
                FUNC_0(1);
            } else {
                FUNC_8("Successfully truncated AOF\n");
            }
        } else {
            FUNC_8("AOF is not valid. "
                   "Use the --fix option to try fixing it.\n");
            FUNC_0(1);
        }
    } else {
        FUNC_8("AOF is valid\n");
    }

    FUNC_1(VAR_6);
    FUNC_0(0);
}
