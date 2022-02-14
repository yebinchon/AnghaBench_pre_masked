
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int repl_state; int unixtime; int repl_transfer_lastio; int * repl_transfer_s; int masterport; int masterhost; scalar_t__ tls_replication; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_6 ;

int FUNC_6(void) {
    VAR_5.repl_transfer_s = VAR_5.tls_replication ? FUNC_3() : FUNC_2();
    if (FUNC_1(VAR_5.repl_transfer_s, VAR_5.masterhost, VAR_5.masterport,
                VAR_3, VAR_6) == VAR_0) {
        FUNC_5(VAR_2,"Unable to connect to MASTER: %s",
                FUNC_4(VAR_5.repl_transfer_s));
        FUNC_0(VAR_5.repl_transfer_s);
        VAR_5.repl_transfer_s = ((void*)0);
        return VAR_0;
    }


    VAR_5.repl_transfer_lastio = VAR_5.unixtime;
    VAR_5.repl_state = VAR_4;
    return VAR_1;
}
