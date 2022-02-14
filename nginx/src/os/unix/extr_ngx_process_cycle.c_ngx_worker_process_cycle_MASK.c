
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef intptr_t ngx_int_t ;
struct TYPE_10__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_8 ;
 intptr_t VAR_9 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,intptr_t) ;

__attribute__((used)) static void
FUNC_11(ngx_cycle_t *VAR_10, void *VAR_11)
{
    ngx_int_t VAR_12 = (intptr_t) VAR_11;

    VAR_5 = VAR_3;
    VAR_9 = VAR_12;

    FUNC_10(VAR_10, VAR_12);

    FUNC_8("worker process");

    for ( ;; ) {

        if (VAR_4) {
            if (FUNC_2() == VAR_2) {
                FUNC_4(VAR_1, VAR_10->log, 0, "exiting");
                FUNC_9(VAR_10);
            }
        }

        FUNC_3(VAR_0, VAR_10->log, 0, "worker cycle");

        FUNC_5(VAR_10);

        if (VAR_8) {
            FUNC_4(VAR_1, VAR_10->log, 0, "exiting");
            FUNC_9(VAR_10);
        }

        if (VAR_6) {
            VAR_6 = 0;
            FUNC_4(VAR_1, VAR_10->log, 0,
                          "gracefully shutting down");
            FUNC_8("worker process is shutting down");

            if (!VAR_4) {
                VAR_4 = 1;
                FUNC_7(VAR_10);
                FUNC_1(VAR_10);
                FUNC_0(VAR_10);
            }
        }

        if (VAR_7) {
            VAR_7 = 0;
            FUNC_4(VAR_1, VAR_10->log, 0, "reopening logs");
            FUNC_6(VAR_10, -1);
        }
    }
}
