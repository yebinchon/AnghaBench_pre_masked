
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int http_proxy_owned; int socks_proxy_owned; int * socks_proxy; int * http_proxy; } ;
struct context {TYPE_1__ c1; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_0)
{
    if (VAR_0->c1.http_proxy_owned && VAR_0->c1.http_proxy)
    {
        FUNC_0(VAR_0->c1.http_proxy);
        VAR_0->c1.http_proxy = ((void*)0);
        VAR_0->c1.http_proxy_owned = 0;
    }
    if (VAR_0->c1.socks_proxy_owned && VAR_0->c1.socks_proxy)
    {
        FUNC_1(VAR_0->c1.socks_proxy);
        VAR_0->c1.socks_proxy = ((void*)0);
        VAR_0->c1.socks_proxy_owned = 0;
    }
}
