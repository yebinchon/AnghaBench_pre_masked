
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_2__ {int interactive; char* prompt; int eval_ldb; scalar_t__ output; scalar_t__ eval_ldb_sync; scalar_t__ eval_ldb_end; int hostport; int hostip; scalar_t__ eval; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char**,int,int) ;
 char** FUNC_8 (char*,int*) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int VAR_11 ;
 char* FUNC_12 (int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int,char**,long) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 () ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int) ;
 long long FUNC_25 () ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (char**,int) ;
 int FUNC_29 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_30 (char*,char*) ;
 long FUNC_31 (char*,char**,int) ;

__attribute__((used)) static void FUNC_32(void) {
    sds VAR_15 = ((void*)0);
    int VAR_16 = 0;
    char *VAR_17;
    int VAR_18;
    sds *VAR_19;



    FUNC_2();
    FUNC_3();

    VAR_8.interactive = 1;
    FUNC_24(1);
    FUNC_21(VAR_7);
    FUNC_23(VAR_12);
    FUNC_22(VAR_11);


    if (FUNC_13(FUNC_10(VAR_13))) {
        VAR_15 = FUNC_12(VAR_6,VAR_5);

        VAR_16 = 1;
        if (VAR_15 != ((void*)0)) {
            FUNC_19(VAR_15);
        }
        FUNC_4();
    }

    FUNC_6();
    while((VAR_17 = FUNC_15(VAR_9 ? VAR_8.prompt : "not connected> ")) != ((void*)0)) {
        if (VAR_17[0] != '\0') {
            long VAR_20 = 1;
            int VAR_21 = 0;
            char *VAR_22 = ((void*)0);

            VAR_19 = FUNC_8(VAR_17,&VAR_18);



            if (VAR_19 && VAR_18 > 0) {
                VAR_10 = 0;
                VAR_20 = FUNC_31(VAR_19[0], &VAR_22, 10);
                if (VAR_18 > 1 && *VAR_22 == '\0') {
                    if (VAR_10 == VAR_2 || VAR_10 == VAR_1 || VAR_20 <= 0) {
                        FUNC_11("Invalid redis-cli repeat command option value.\n", VAR_14);
                        FUNC_28(VAR_19, VAR_18);
                        FUNC_17(VAR_17);
                        continue;
                    }
                    VAR_21 = 1;
                } else {
                    VAR_20 = 1;
                }
            }


            if (!(VAR_19 && VAR_18 > 0 && !FUNC_30(VAR_19[0+VAR_21], "auth"))) {
                if (VAR_16) FUNC_18(VAR_17);
                if (VAR_15) FUNC_20(VAR_15);
            }

            if (VAR_19 == ((void*)0)) {
                FUNC_26("Invalid argument(s)\n");
                FUNC_17(VAR_17);
                continue;
            } else if (VAR_18 > 0) {
                if (FUNC_30(VAR_19[0],"quit") == 0 ||
                    FUNC_30(VAR_19[0],"exit") == 0)
                {
                    FUNC_9(0);
                } else if (VAR_19[0][0] == ':') {
                    FUNC_7(VAR_19,VAR_18,1);
                    FUNC_28(VAR_19,VAR_18);
                    FUNC_17(VAR_17);
                    continue;
                } else if (FUNC_30(VAR_19[0],"restart") == 0) {
                    if (VAR_8.eval) {
                        VAR_8.eval_ldb = 1;
                        VAR_8.output = VAR_3;
                        return;
                    } else {
                        FUNC_26("Use 'restart' only in Lua debugging mode.");
                    }
                } else if (VAR_18 == 3 && !FUNC_30(VAR_19[0],"connect")) {
                    FUNC_27(VAR_8.hostip);
                    VAR_8.hostip = FUNC_29(VAR_19[1]);
                    VAR_8.hostport = FUNC_0(VAR_19[2]);
                    FUNC_6();
                    FUNC_1(VAR_0);
                } else if (VAR_18 == 1 && !FUNC_30(VAR_19[0],"clear")) {
                    FUNC_16();
                } else {
                    long long VAR_23 = FUNC_25(), VAR_24;

                    FUNC_14(VAR_18-VAR_21, VAR_19+VAR_21, VAR_20);



                    if (VAR_8.eval_ldb_end) {
                        VAR_8.eval_ldb_end = 0;
                        FUNC_5(0);
                        FUNC_26("\n(Lua debugging session ended%s)\n\n",
                            VAR_8.eval_ldb_sync ? "" :
                            " -- dataset changes rolled back");
                    }

                    VAR_24 = FUNC_25()-VAR_23;
                    if (VAR_24 >= 500 &&
                        VAR_8.output == VAR_4)
                    {
                        FUNC_26("(%.2fs)\n",(double)VAR_24/1000);
                    }
                }
            }

            FUNC_28(VAR_19,VAR_18);
        }

        FUNC_17(VAR_17);
    }
    FUNC_9(0);
}
