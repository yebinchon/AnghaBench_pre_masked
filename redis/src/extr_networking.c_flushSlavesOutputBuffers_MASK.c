
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_6__ {int flags; scalar_t__ replstate; int repl_put_online_on_ack; int conn; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int slaves; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 TYPE_3__ VAR_2 ;
 int FUNC_5 (TYPE_1__*,int ) ;

void FUNC_6(void) {
    listIter VAR_3;
    listNode *VAR_4;

    FUNC_4(VAR_2.slaves,&VAR_3);
    while((VAR_4 = FUNC_2(&VAR_3))) {
        client *VAR_5 = FUNC_3(VAR_4);
        int VAR_6 = FUNC_1(VAR_5->conn) ||
                                 (VAR_5->flags & VAR_0);
        if (VAR_5->replstate == VAR_1 &&
            VAR_6 &&
            !VAR_5->repl_put_online_on_ack &&
            FUNC_0(VAR_5))
        {
            FUNC_5(VAR_5,0);
        }
    }
}
