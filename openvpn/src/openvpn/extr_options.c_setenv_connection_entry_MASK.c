
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct env_set {int dummy; } ;
struct connection_entry {scalar_t__ socks_proxy_port; scalar_t__ socks_proxy_server; TYPE_1__* http_proxy_options; scalar_t__ remote_port; scalar_t__ remote; scalar_t__ local_port; scalar_t__ local; int af; int proto; } ;
struct TYPE_2__ {scalar_t__ port; scalar_t__ server; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct env_set*,char*,scalar_t__,int const) ;

__attribute__((used)) static void
FUNC_2(struct env_set *VAR_0,
                        const struct connection_entry *VAR_1,
                        const int VAR_2)
{
    FUNC_1(VAR_0, "proto", FUNC_0(VAR_1->proto, VAR_1->af, 0), VAR_2);
    FUNC_1(VAR_0, "local", VAR_1->local, VAR_2);
    FUNC_1(VAR_0, "local_port", VAR_1->local_port, VAR_2);
    FUNC_1(VAR_0, "remote", VAR_1->remote, VAR_2);
    FUNC_1(VAR_0, "remote_port", VAR_1->remote_port, VAR_2);

    if (VAR_1->http_proxy_options)
    {
        FUNC_1(VAR_0, "http_proxy_server", VAR_1->http_proxy_options->server, VAR_2);
        FUNC_1(VAR_0, "http_proxy_port", VAR_1->http_proxy_options->port, VAR_2);
    }
    if (VAR_1->socks_proxy_server)
    {
        FUNC_1(VAR_0, "socks_proxy_server", VAR_1->socks_proxy_server, VAR_2);
        FUNC_1(VAR_0, "socks_proxy_port", VAR_1->socks_proxy_port, VAR_2);
    }
}
