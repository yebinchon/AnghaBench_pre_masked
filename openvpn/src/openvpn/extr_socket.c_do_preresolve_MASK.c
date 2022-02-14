
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sockflags; char* ip_remote_hint; struct connection_list* connection_list; } ;
struct context {TYPE_1__ options; } ;
struct connection_list {int len; struct connection_entry** array; } ;
struct connection_entry {char* remote; char const* socks_proxy_server; char const* local; int af; int local_port; scalar_t__ bind_local; int socks_proxy_port; TYPE_2__* http_proxy_options; int remote_port; int proto; } ;
struct TYPE_4__ {char const* server; int port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct context*,char const*,int ,int ,unsigned int const) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(struct context *VAR_9)
{
    int VAR_10;
    struct connection_list *VAR_11 = VAR_9->options.connection_list;
    const unsigned int VAR_12 = VAR_5
                                          |VAR_6
                                          |VAR_2
                                          |VAR_1;


    for (VAR_10 = 0; VAR_10 < VAR_11->len; ++VAR_10)
    {
        int VAR_13;
        const char *VAR_14;
        int VAR_15 = VAR_12;

        struct connection_entry *VAR_16 = VAR_9->options.connection_list->array[VAR_10];

        if (FUNC_1(VAR_16->proto))
        {
            VAR_15 |= VAR_0;
        }

        if (VAR_9->options.sockflags & VAR_7)
        {
            VAR_15 |= VAR_4;
        }

        if (VAR_9->options.ip_remote_hint)
        {
            VAR_14 = VAR_9->options.ip_remote_hint;
        }
        else
        {
            VAR_14 = VAR_16->remote;
        }


        if (!VAR_16->http_proxy_options)
        {
            VAR_13 = FUNC_0(VAR_9, VAR_14, VAR_16->remote_port, VAR_16->af, VAR_15);
            if (VAR_13 != 0)
            {
                goto err;
            }
        }


        if (VAR_16->http_proxy_options)
        {
            VAR_13 = FUNC_0(VAR_9,
                                        VAR_16->http_proxy_options->server,
                                        VAR_16->http_proxy_options->port,
                                        VAR_16->af,
                                        VAR_12);

            if (VAR_13 != 0)
            {
                goto err;
            }
        }

        if (VAR_16->socks_proxy_server)
        {
            VAR_13 = FUNC_0(VAR_9,
                                        VAR_16->socks_proxy_server,
                                        VAR_16->socks_proxy_port,
                                        VAR_16->af,
                                        VAR_15);
            if (VAR_13 != 0)
            {
                goto err;
            }
        }

        if (VAR_16->bind_local)
        {
            VAR_15 |= VAR_3;
            VAR_15 &= ~VAR_4;
            VAR_13 = FUNC_0(VAR_9, VAR_16->local, VAR_16->local_port, VAR_16->af, VAR_15);
            if (VAR_13 != 0)
            {
                goto err;
            }

        }

    }
    return;

err:
    FUNC_2(VAR_8, "Preresolving failed");
}
