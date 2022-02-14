
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct signal_info {scalar_t__ signal_received; } ;
struct TYPE_10__ {TYPE_4__* lsa; } ;
struct TYPE_6__ {int dest; } ;
struct link_socket {TYPE_5__ info; int proxy_dest_port; int remote_port; int proxy_dest_host; int remote_host; TYPE_1__ socks_relay; int sd; int ctrl_sd; int socks_proxy; int server_poll_timeout; } ;
struct TYPE_7__ {int dest; } ;
struct TYPE_9__ {int * remote_list; TYPE_3__* current_remote; TYPE_2__ actual; } ;
struct TYPE_8__ {int ai_addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct link_socket*,int,int *,scalar_t__*) ;
 int FUNC_5 (int *,int ,int ,struct signal_info*) ;

__attribute__((used)) static void
FUNC_6(struct link_socket *VAR_0, struct signal_info *VAR_1)
{
    FUNC_5(&VAR_0->ctrl_sd,
                   VAR_0->info.lsa->current_remote->ai_addr,
                   FUNC_3(VAR_0->server_poll_timeout),
                   VAR_1);

    if (VAR_1->signal_received)
    {
        return;
    }

    FUNC_1(VAR_0->socks_proxy,
                                   VAR_0->ctrl_sd,
                                   VAR_0->sd,
                                   &VAR_0->socks_relay.dest,
                                   &VAR_1->signal_received);

    if (VAR_1->signal_received)
    {
        return;
    }

    VAR_0->remote_host = VAR_0->proxy_dest_host;
    VAR_0->remote_port = VAR_0->proxy_dest_port;

    FUNC_0(&VAR_0->info.lsa->actual.dest);
    if (VAR_0->info.lsa->remote_list)
    {
        FUNC_2(VAR_0->info.lsa->remote_list);
        VAR_0->info.lsa->current_remote = ((void*)0);
        VAR_0->info.lsa->remote_list = ((void*)0);
    }

    FUNC_4(VAR_0, 1, ((void*)0), &VAR_1->signal_received);
}
