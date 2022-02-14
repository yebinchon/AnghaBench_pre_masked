
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int * bind_local; int actual; TYPE_2__* current_remote; } ;
struct TYPE_11__ {TYPE_6__ link_socket_addr; } ;
struct TYPE_10__ {int resolve_in_advance; scalar_t__ persist_local_ip; scalar_t__ persist_remote_ip; scalar_t__ no_advance; } ;
struct TYPE_7__ {int * link_socket; scalar_t__ link_socket_owned; } ;
struct context {TYPE_5__ c1; TYPE_4__ options; TYPE_3__* sig; TYPE_1__ c2; } ;
struct TYPE_9__ {scalar_t__ signal_received; scalar_t__ source; } ;
struct TYPE_8__ {scalar_t__ ai_next; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct context *VAR_2)
{
    if (VAR_2->c2.link_socket && VAR_2->c2.link_socket_owned)
    {
        FUNC_3(VAR_2->c2.link_socket);
        VAR_2->c2.link_socket = ((void*)0);
    }





    if (!(VAR_2->sig->signal_received == VAR_0
          && ( (VAR_2->options.persist_remote_ip)
               ||
               ( VAR_2->sig->source != VAR_1
                 && ((VAR_2->c1.link_socket_addr.current_remote && VAR_2->c1.link_socket_addr.current_remote->ai_next)
                     || VAR_2->options.no_advance))
               )))
    {
        FUNC_1(&VAR_2->c1.link_socket_addr, !VAR_2->options.resolve_in_advance);
    }


    if (!(VAR_2->sig->signal_received == VAR_0 && VAR_2->options.persist_remote_ip))
    {
        FUNC_0(VAR_2->c1.link_socket_addr.actual);
    }

    if (!(VAR_2->sig->signal_received == VAR_0 && VAR_2->options.persist_local_ip))
    {
        if (VAR_2->c1.link_socket_addr.bind_local && !VAR_2->options.resolve_in_advance)
        {
            FUNC_2(VAR_2->c1.link_socket_addr.bind_local);
        }

        VAR_2->c1.link_socket_addr.bind_local = ((void*)0);
    }
}
