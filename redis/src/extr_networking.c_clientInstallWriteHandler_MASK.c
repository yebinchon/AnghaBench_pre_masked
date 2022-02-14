
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ replstate; int repl_put_online_on_ack; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {int clients_pending_write; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_3 ;

void FUNC_1(client *VAR_4) {



    if (!(VAR_4->flags & VAR_0) &&
        (VAR_4->replstate == VAR_1 ||
         (VAR_4->replstate == VAR_2 && !VAR_4->repl_put_online_on_ack)))
    {






        VAR_4->flags |= VAR_0;
        FUNC_0(VAR_3.clients_pending_write,VAR_4);
    }
}
