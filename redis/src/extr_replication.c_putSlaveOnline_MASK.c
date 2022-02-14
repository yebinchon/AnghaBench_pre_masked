
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int conn; int repl_ack_time; scalar_t__ repl_put_online_on_ack; int replstate; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int unixtime; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(client *VAR_9) {
    VAR_9->replstate = VAR_5;
    VAR_9->repl_put_online_on_ack = 0;
    VAR_9->repl_ack_time = VAR_8.unixtime;
    if (FUNC_0(VAR_9->conn, VAR_7) == VAR_0) {
        FUNC_5(VAR_2,"Unable to register writable event for replica bulk transfer: %s", FUNC_6(VAR_6));
        FUNC_1(VAR_9);
        return;
    }
    FUNC_3();

    FUNC_2(VAR_3,
                          VAR_4,
                          ((void*)0));
    FUNC_5(VAR_1,"Synchronization with replica %s succeeded",
        FUNC_4(VAR_9));
}
