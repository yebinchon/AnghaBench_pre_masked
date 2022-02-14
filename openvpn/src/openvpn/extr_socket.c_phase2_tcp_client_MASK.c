
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct signal_info {scalar_t__ signal_received; } ;
struct TYPE_7__ {TYPE_2__* lsa; } ;
struct TYPE_5__ {int residual; } ;
struct link_socket {TYPE_3__ info; int sd; int proxy_dest_port; int proxy_dest_host; scalar_t__ socks_proxy; TYPE_1__ stream_buf; int server_poll_timeout; scalar_t__ http_proxy; } ;
struct TYPE_8__ {int ai_addr; } ;
struct TYPE_6__ {TYPE_4__* current_remote; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int ,int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,struct signal_info*) ;

__attribute__((used)) static void
FUNC_6(struct link_socket *VAR_0, struct signal_info *VAR_1)
{
    bool VAR_2 = 0;
    do
    {
        FUNC_5(&VAR_0->sd,
                       VAR_0->info.lsa->current_remote->ai_addr,
                       FUNC_3(VAR_0->server_poll_timeout),
                       VAR_1);

        if (VAR_1->signal_received)
        {
            return;
        }

        if (VAR_0->http_proxy)
        {
            VAR_2 = FUNC_1(VAR_0->http_proxy,
                                                        VAR_0->sd,
                                                        VAR_0->proxy_dest_host,
                                                        VAR_0->proxy_dest_port,
                                                        VAR_0->server_poll_timeout,
                                                        &VAR_0->stream_buf.residual,
                                                        &VAR_1->signal_received);
        }
        else if (VAR_0->socks_proxy)
        {
            FUNC_2(VAR_0->socks_proxy,
                                           VAR_0->sd,
                                           VAR_0->proxy_dest_host,
                                           VAR_0->proxy_dest_port,
                                           &VAR_1->signal_received);
        }
        if (VAR_2)
        {
            FUNC_4(VAR_0->sd);
            VAR_0->sd = FUNC_0(VAR_0->info.lsa->current_remote);
        }

    } while (VAR_2);

}
