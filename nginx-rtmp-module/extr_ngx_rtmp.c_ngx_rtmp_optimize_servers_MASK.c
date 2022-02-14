
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_28__ {size_t naddrs; } ;
typedef TYPE_5__ ngx_rtmp_port_t ;
struct TYPE_24__ {size_t nelts; TYPE_7__* elts; } ;
struct TYPE_29__ {TYPE_1__ addrs; } ;
typedef TYPE_6__ ngx_rtmp_conf_port_t ;
struct TYPE_30__ {int bind; int ipv6only; int tcp_keepcnt; int tcp_keepintvl; int tcp_keepidle; int so_keepalive; int socklen; int sockaddr; scalar_t__ wildcard; } ;
typedef TYPE_7__ ngx_rtmp_conf_addr_t ;
struct TYPE_26__ {int handler; int * data; } ;
struct TYPE_31__ {int addr_ntop; int pool_size; TYPE_4__* sockaddr; TYPE_5__* servers; int ipv6only; int keepcnt; int keepintvl; int keepidle; int keepalive; TYPE_3__ log; int addr_text; int * logp; int handler; } ;
typedef TYPE_8__ ngx_listening_t ;
struct TYPE_32__ {int pool; TYPE_2__* cycle; } ;
typedef TYPE_9__ ngx_conf_t ;
struct TYPE_23__ {size_t nelts; TYPE_6__* elts; } ;
typedef TYPE_10__ ngx_array_t ;
struct TYPE_27__ {int sa_family; } ;
struct TYPE_25__ {int new_log; } ;



 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__* FUNC_0 (TYPE_9__*,int ,int ) ;
 TYPE_5__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_9__*,TYPE_5__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_9__*,TYPE_5__*,TYPE_7__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_7__*,size_t,int,int ) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_6, ngx_array_t *VAR_7)
{
    ngx_uint_t VAR_8, VAR_9, VAR_10, VAR_11;
    ngx_listening_t *VAR_12;
    ngx_rtmp_port_t *VAR_13;
    ngx_rtmp_conf_port_t *VAR_14;
    ngx_rtmp_conf_addr_t *VAR_15;

    VAR_14 = VAR_7->elts;
    for (VAR_9 = 0; VAR_9 < VAR_7->nelts; VAR_9++) {

        FUNC_4(VAR_14[VAR_9].addrs.elts, (size_t) VAR_14[VAR_9].addrs.nelts,
                 sizeof(ngx_rtmp_conf_addr_t), VAR_4);

        VAR_15 = VAR_14[VAR_9].addrs.elts;
        VAR_10 = VAR_14[VAR_9].addrs.nelts;






        if (VAR_15[VAR_10 - 1].wildcard) {
            VAR_15[VAR_10 - 1].bind = 1;
            VAR_11 = 1;

        } else {
            VAR_11 = 0;
        }

        VAR_8 = 0;

        while (VAR_8 < VAR_10) {

            if (VAR_11 && !VAR_15[VAR_8].bind) {
                VAR_8++;
                continue;
            }

            VAR_12 = FUNC_0(VAR_6, VAR_15[VAR_8].sockaddr, VAR_15[VAR_8].socklen);
            if (VAR_12 == ((void*)0)) {
                return VAR_0;
            }

            VAR_12->addr_ntop = 1;
            VAR_12->handler = VAR_5;
            VAR_12->pool_size = 4096;


            VAR_12->logp = &VAR_6->cycle->new_log;
            VAR_12->log.data = &VAR_12->addr_text;
            VAR_12->log.handler = VAR_3;

            VAR_12->keepalive = VAR_15[VAR_8].so_keepalive;
            VAR_13 = FUNC_1(VAR_6->pool, sizeof(ngx_rtmp_port_t));
            if (VAR_13 == ((void*)0)) {
                return VAR_0;
            }

            VAR_12->servers = VAR_13;

            if (VAR_8 == VAR_10 - 1) {
                VAR_13->naddrs = VAR_10;

            } else {
                VAR_13->naddrs = 1;
                VAR_8 = 0;
            }

            switch (VAR_12->sockaddr->sa_family) {







            default:
                if (FUNC_2(VAR_6, VAR_13, VAR_15) != VAR_2) {
                    return VAR_0;
                }
                break;
            }

            VAR_15++;
            VAR_10--;
        }
    }

    return VAR_1;
}
