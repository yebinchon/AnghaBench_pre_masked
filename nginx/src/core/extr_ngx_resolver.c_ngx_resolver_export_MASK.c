
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_4__ sin6_addr; int sin6_family; } ;
struct TYPE_12__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct in6_addr {int s6_addr; } ;
typedef int ngx_uint_t ;
struct TYPE_15__ {struct sockaddr_in6 sockaddr_in6; struct sockaddr_in sockaddr_in; } ;
typedef TYPE_5__ ngx_sockaddr_t ;
typedef int ngx_resolver_t ;
struct TYPE_13__ {struct in6_addr* addrs6; struct in6_addr addr6; } ;
struct TYPE_11__ {int * addrs; int addr; } ;
struct TYPE_16__ {int naddrs; int naddrs6; TYPE_3__ u6; TYPE_1__ u; } ;
typedef TYPE_6__ ngx_resolver_node_t ;
struct TYPE_17__ {int socklen; struct sockaddr* sockaddr; } ;
typedef TYPE_7__ ngx_resolver_addr_t ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_7__*) ;

__attribute__((used)) static ngx_resolver_addr_t *
FUNC_4(ngx_resolver_t *VAR_2, ngx_resolver_node_t *VAR_3,
    ngx_uint_t VAR_4)
{
    ngx_uint_t VAR_5, VAR_6, VAR_7, VAR_8;
    in_addr_t *VAR_9;
    ngx_sockaddr_t *VAR_10;
    struct sockaddr_in *VAR_11;
    ngx_resolver_addr_t *VAR_12;





    VAR_8 = VAR_3->naddrs;




    VAR_12 = FUNC_2(VAR_2, VAR_8 * sizeof(ngx_resolver_addr_t));
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_10 = FUNC_2(VAR_2, VAR_8 * sizeof(ngx_sockaddr_t));
    if (VAR_10 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_12);
        return ((void*)0);
    }

    VAR_6 = 0;
    VAR_5 = VAR_4 ? FUNC_1() % VAR_8 : 0;

    if (VAR_3->naddrs) {
        VAR_7 = VAR_4 ? FUNC_1() % VAR_3->naddrs : 0;

        VAR_9 = (VAR_3->naddrs == 1) ? &VAR_3->u.addr : VAR_3->u.addrs;

        do {
            VAR_11 = &VAR_10[VAR_5].sockaddr_in;
            VAR_11->sin_family = VAR_0;
            VAR_11->sin_addr.s_addr = VAR_9[VAR_7++];
            VAR_12[VAR_5].sockaddr = (struct sockaddr *) VAR_11;
            VAR_12[VAR_5++].socklen = sizeof(struct sockaddr_in);

            if (VAR_5 == VAR_8) {
                VAR_5 = 0;
            }

            if (VAR_7 == (ngx_uint_t) VAR_3->naddrs) {
                VAR_7 = 0;
            }
        } while (++VAR_6 < (ngx_uint_t) VAR_3->naddrs);
    }
    return VAR_12;
}
