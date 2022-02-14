
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int http_proxy_owned; int socks_proxy_owned; scalar_t__ socks_proxy; scalar_t__ http_proxy; } ;
struct TYPE_4__ {int socks_proxy_authfile; int socks_proxy_port; scalar_t__ socks_proxy_server; scalar_t__ http_proxy_options; } ;
struct TYPE_5__ {TYPE_1__ ce; } ;
struct context {TYPE_3__ c1; TYPE_2__ options; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct context*) ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_0)
{
    bool VAR_1 = 0;

    FUNC_2(VAR_0);

    if (VAR_0->options.ce.http_proxy_options)
    {

        VAR_0->c1.http_proxy = FUNC_0(VAR_0->options.ce.http_proxy_options);
        if (VAR_0->c1.http_proxy)
        {
            VAR_1 = 1;
            VAR_0->c1.http_proxy_owned = 1;
        }
    }

    if (!VAR_1 && VAR_0->options.ce.socks_proxy_server)
    {
        VAR_0->c1.socks_proxy = FUNC_1(VAR_0->options.ce.socks_proxy_server,
                                            VAR_0->options.ce.socks_proxy_port,
                                            VAR_0->options.ce.socks_proxy_authfile);
        if (VAR_0->c1.socks_proxy)
        {
            VAR_0->c1.socks_proxy_owned = 1;
        }
    }
}
