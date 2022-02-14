
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef size_t ngx_uint_t ;
struct TYPE_11__ {int ipv6only; int tcp_keepcnt; int tcp_keepintvl; int tcp_keepidle; int proxy_protocol; int so_keepalive; int wildcard; int bind; int ctx; int socklen; int sockaddr; } ;
typedef TYPE_1__ ngx_rtmp_listen_t ;
struct TYPE_15__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_12__ {int family; TYPE_5__ addrs; int port; } ;
typedef TYPE_2__ ngx_rtmp_conf_port_t ;
struct TYPE_13__ {int ipv6only; int tcp_keepcnt; int tcp_keepintvl; int tcp_keepidle; int proxy_protocol; int so_keepalive; int wildcard; int bind; int ctx; int socklen; struct sockaddr* sockaddr; } ;
typedef TYPE_3__ ngx_rtmp_conf_addr_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {int temp_pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef TYPE_5__ ngx_array_t ;
typedef int in_port_t ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,int,int) ;
 void* FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_conf_t *VAR_2, ngx_array_t *VAR_3,
    ngx_rtmp_listen_t *VAR_4)
{
    in_port_t VAR_5;
    ngx_uint_t VAR_6;
    struct sockaddr *VAR_7;
    struct sockaddr_in *VAR_8;
    ngx_rtmp_conf_port_t *VAR_9;
    ngx_rtmp_conf_addr_t *VAR_10;




    VAR_7 = (struct sockaddr *) &VAR_4->sockaddr;

    switch (VAR_7->sa_family) {
    default:
        VAR_8 = (struct sockaddr_in *) VAR_7;
        VAR_5 = VAR_8->sin_port;
        break;
    }

    VAR_9 = VAR_3->elts;
    for (VAR_6 = 0; VAR_6 < VAR_3->nelts; VAR_6++) {
        if (VAR_5 == VAR_9[VAR_6].port && VAR_7->sa_family == VAR_9[VAR_6].family) {



            VAR_9 = &VAR_9[VAR_6];
            goto found;
        }
    }



    VAR_9 = FUNC_1(VAR_3);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9->family = VAR_7->sa_family;
    VAR_9->port = VAR_5;

    if (FUNC_0(&VAR_9->addrs, VAR_2->temp_pool, 2,
                       sizeof(ngx_rtmp_conf_addr_t))
        != VAR_1)
    {
        return VAR_0;
    }

found:

    VAR_10 = FUNC_1(&VAR_9->addrs);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_10->sockaddr = (struct sockaddr *) &VAR_4->sockaddr;
    VAR_10->socklen = VAR_4->socklen;
    VAR_10->ctx = VAR_4->ctx;
    VAR_10->bind = VAR_4->bind;
    VAR_10->wildcard = VAR_4->wildcard;
    VAR_10->so_keepalive = VAR_4->so_keepalive;
    VAR_10->proxy_protocol = VAR_4->proxy_protocol;
    return VAR_1;
}
