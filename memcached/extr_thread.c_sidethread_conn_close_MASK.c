
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sfd; scalar_t__ ssl; int * ssl_wbuf; int state; } ;
typedef TYPE_1__ conn ;
struct TYPE_7__ {int verbose; } ;
struct TYPE_6__ {int curr_conns; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_4__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

void FUNC_6(conn *VAR_4) {
    VAR_4->state = VAR_0;
    if (VAR_1.verbose > 1)
        FUNC_5(VAR_3, "<%d connection closed from side thread.\n", VAR_4->sfd);







    FUNC_4(VAR_4->sfd);

    FUNC_2();
    VAR_2.curr_conns--;
    FUNC_3();

    return;
}
