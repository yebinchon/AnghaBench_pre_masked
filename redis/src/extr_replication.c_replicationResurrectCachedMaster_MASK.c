
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int connection ;
struct TYPE_7__ {int flags; int authenticated; int * conn; int lastinteraction; } ;
struct TYPE_6__ {TYPE_2__* master; scalar_t__ repl_down_since; int repl_state; int unixtime; TYPE_2__* cached_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(connection *VAR_8) {
    VAR_7.master = VAR_7.cached_master;
    VAR_7.cached_master = ((void*)0);
    VAR_7.master->conn = VAR_8;
    FUNC_1(VAR_7.master->conn, VAR_7.master);
    VAR_7.master->flags &= ~(VAR_0|VAR_1);
    VAR_7.master->authenticated = 1;
    VAR_7.master->lastinteraction = VAR_7.unixtime;
    VAR_7.repl_state = VAR_3;
    VAR_7.repl_down_since = 0;


    FUNC_5(VAR_7.master);
    if (FUNC_2(VAR_7.master->conn, VAR_5)) {
        FUNC_6(VAR_2,"Error resurrecting the cached master, impossible to add the readable handler: %s", FUNC_7(VAR_4));
        FUNC_4(VAR_7.master);
    }



    if (FUNC_0(VAR_7.master)) {
        if (FUNC_3(VAR_7.master->conn, VAR_6)) {
            FUNC_6(VAR_2,"Error resurrecting the cached master, impossible to add the writable handler: %s", FUNC_7(VAR_4));
            FUNC_4(VAR_7.master);
        }
    }
}
