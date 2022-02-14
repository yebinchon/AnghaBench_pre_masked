
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* sds ;
typedef int redisReply ;
typedef int buf ;
struct TYPE_2__ {int eval_ldb; char* eval; int prompt; scalar_t__ eval_ldb_sync; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*,char*) ;
 size_t FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char**) ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (int ,char*) ;
 int FUNC_11 () ;
 char* FUNC_12 (char*,char*,size_t) ;
 char* FUNC_13 (char*,char*,int) ;
 char* FUNC_14 () ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*) ;
 int VAR_5 ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,int) ;
 char** FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(int VAR_6, char **VAR_7) {
    sds VAR_8 = ((void*)0);
    FILE *VAR_9;
    char VAR_10[1024];
    size_t VAR_11;
    char **VAR_12;
    int VAR_13, VAR_14, VAR_15;
    int VAR_16 = VAR_1;

    while(1) {
        if (VAR_2.eval_ldb) {
            FUNC_9(
            "Lua debugging session started, please use:\n"
            "quit    -- End the session.\n"
            "restart -- Restart the script in debug mode again.\n"
            "help    -- Show Lua script debugging commands.\n\n"
            );
        }

        FUNC_15(VAR_8);
        VAR_8 = FUNC_14();
        VAR_14 = 0;
        VAR_15 = 0;


        VAR_9 = FUNC_4(VAR_2.eval,"r");
        if (!VAR_9) {
            FUNC_5(VAR_5,
                "Can't open file '%s': %s\n", VAR_2.eval, FUNC_17(VAR_4));
            FUNC_2(1);
        }
        while((VAR_11 = FUNC_6(VAR_10,1,sizeof(VAR_10),VAR_9)) != 0) {
            VAR_8 = FUNC_12(VAR_8,VAR_10,VAR_11);
        }
        FUNC_3(VAR_9);


        if (VAR_2.eval_ldb) {
            redisReply *VAR_17 = FUNC_10(VAR_3,
                    VAR_2.eval_ldb_sync ?
                    "SCRIPT DEBUG sync": "SCRIPT DEBUG yes");
            if (VAR_17) FUNC_7(VAR_17);
        }


        VAR_12 = FUNC_19(sizeof(sds)*(VAR_6+3));
        VAR_12[0] = FUNC_16("EVAL");
        VAR_12[1] = VAR_8;
        for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
            if (!VAR_14 && VAR_7[VAR_13][0] == ',' && VAR_7[VAR_13][1] == 0) {
                VAR_14 = 1;
                continue;
            }
            VAR_12[VAR_13+3-VAR_14] = FUNC_16(VAR_7[VAR_13]);
            if (!VAR_14) VAR_15++;
        }
        VAR_12[2] = FUNC_13(FUNC_14(),"%d",VAR_15);


        int VAR_18 = VAR_2.eval_ldb;
        VAR_16 = FUNC_8(VAR_6+3-VAR_14, VAR_12);
        if (VAR_18) {
            if (!VAR_2.eval_ldb) {



                FUNC_9("Eval debugging session can't start:\n");
                FUNC_1(0);
                break;
            } else {
                FUNC_18(VAR_2.prompt,"lua debugger> ",sizeof(VAR_2.prompt));
                FUNC_11();

                FUNC_0(VAR_0);
                FUNC_9("\n");
            }
        } else {
            break;
        }
    }
    return VAR_16;
}
