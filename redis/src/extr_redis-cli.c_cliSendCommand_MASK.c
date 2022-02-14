
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eval_ldb; int shutdown; int monitor_mode; int pubsub_mode; int slave_mode; int enable_ldb_on_eval; scalar_t__ output; scalar_t__ last_cmd_type; scalar_t__ interval; scalar_t__ cluster_reissue_command; int dbnum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int,char const**,size_t*) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 () ;
 int VAR_6 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (size_t*) ;
 size_t* FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(int VAR_7, char **VAR_8, long VAR_9) {
    char *VAR_10 = VAR_8[0];
    size_t *VAR_11;
    int VAR_12, VAR_13;

    if (!VAR_4.eval_ldb &&
        (!FUNC_11(VAR_10,"help") || !FUNC_11(VAR_10,"?"))) {
        FUNC_1(--VAR_7, ++VAR_8);
        return VAR_2;
    }

    if (VAR_5 == ((void*)0)) return VAR_1;

    VAR_13 = 0;
    if (!FUNC_11(VAR_10,"info") ||
        !FUNC_11(VAR_10,"lolwut") ||
        (VAR_7 >= 2 && !FUNC_11(VAR_10,"debug") &&
                       !FUNC_11(VAR_8[1],"htstats")) ||
        (VAR_7 >= 2 && !FUNC_11(VAR_10,"debug") &&
                       !FUNC_11(VAR_8[1],"htstats-key")) ||
        (VAR_7 >= 2 && !FUNC_11(VAR_10,"memory") &&
                      (!FUNC_11(VAR_8[1],"malloc-stats") ||
                       !FUNC_11(VAR_8[1],"doctor"))) ||
        (VAR_7 == 2 && !FUNC_11(VAR_10,"cluster") &&
                      (!FUNC_11(VAR_8[1],"nodes") ||
                       !FUNC_11(VAR_8[1],"info"))) ||
        (VAR_7 >= 2 && !FUNC_11(VAR_10,"client") &&
                       !FUNC_11(VAR_8[1],"list")) ||
        (VAR_7 == 3 && !FUNC_11(VAR_10,"latency") &&
                       !FUNC_11(VAR_8[1],"graph")) ||
        (VAR_7 == 2 && !FUNC_11(VAR_10,"latency") &&
                       !FUNC_11(VAR_8[1],"doctor")))
    {
        VAR_13 = 1;
    }

    if (!FUNC_11(VAR_10,"shutdown")) VAR_4.shutdown = 1;
    if (!FUNC_11(VAR_10,"monitor")) VAR_4.monitor_mode = 1;
    if (!FUNC_11(VAR_10,"subscribe") ||
        !FUNC_11(VAR_10,"psubscribe")) VAR_4.pubsub_mode = 1;
    if (!FUNC_11(VAR_10,"sync") ||
        !FUNC_11(VAR_10,"psync")) VAR_4.slave_mode = 1;



    if (VAR_7 == 3 && !FUNC_11(VAR_8[0],"script") &&
                     !FUNC_11(VAR_8[1],"debug"))
    {
        if (!FUNC_11(VAR_8[2],"yes") || !FUNC_11(VAR_8[2],"sync")) {
            VAR_4.enable_ldb_on_eval = 1;
        } else {
            VAR_4.enable_ldb_on_eval = 0;
        }
    }


    if (!FUNC_11(VAR_10,"eval") && VAR_4.enable_ldb_on_eval) {
        VAR_4.eval_ldb = 1;
        VAR_4.output = VAR_0;
    }


    VAR_11 = FUNC_14(VAR_7*sizeof(size_t));
    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
        VAR_11[VAR_12] = FUNC_9(VAR_8[VAR_12]);



    while(VAR_9 < 0 || VAR_9-- > 0) {
        FUNC_8(VAR_5,VAR_7,(const char**)VAR_8,VAR_11);
        while (VAR_4.monitor_mode) {
            if (FUNC_2(VAR_13) != VAR_2) FUNC_5(1);
            FUNC_6(VAR_6);
        }

        if (VAR_4.pubsub_mode) {
            if (VAR_4.output != VAR_0)
                FUNC_7("Reading messages... (press Ctrl-C to quit)\n");
            while (1) {
                if (FUNC_2(VAR_13) != VAR_2) FUNC_5(1);
            }
        }

        if (VAR_4.slave_mode) {
            FUNC_7("Entering replica output mode...  (press Ctrl-C to quit)\n");
            FUNC_10();
            VAR_4.slave_mode = 0;
            FUNC_13(VAR_11);
            return VAR_1;
        }

        if (FUNC_2(VAR_13) != VAR_2) {
            FUNC_13(VAR_11);
            return VAR_1;
        } else {

            if (!FUNC_11(VAR_10,"select") && VAR_7 == 2 && VAR_4.last_cmd_type != VAR_3) {
                VAR_4.dbnum = FUNC_0(VAR_8[1]);
                FUNC_3();
            } else if (!FUNC_11(VAR_10,"auth") && (VAR_7 == 2 || VAR_7 == 3))
            {
                FUNC_4();
            }
        }
        if (VAR_4.cluster_reissue_command){


            break;
        }
        if (VAR_4.interval) FUNC_12(VAR_4.interval);
        FUNC_6(VAR_6);
    }

    FUNC_13(VAR_11);
    return VAR_2;
}
