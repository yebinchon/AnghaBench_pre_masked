
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


typedef scalar_t__ time_t ;
struct TYPE_26__ {int * data; scalar_t__ len; } ;
struct TYPE_25__ {int default_port; int naddrs; TYPE_6__* resolver; TYPE_1__* addrs; int server; int socklen; int sockaddr; TYPE_5__ url; int err; } ;
typedef TYPE_4__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_21__ {scalar_t__ nelts; } ;
struct TYPE_27__ {int ipv6; int ident; int resend_timeout; int tcp_timeout; int expire; scalar_t__ valid; TYPE_19__ connections; int log_level; int * log; TYPE_2__* event; int addr6_expire_queue; int addr6_resend_queue; int addr6_sentinel; int addr6_rbtree; int addr_expire_queue; int srv_expire_queue; int name_expire_queue; int addr_resend_queue; int srv_resend_queue; int name_resend_queue; int addr_sentinel; int addr_rbtree; int srv_sentinel; int srv_rbtree; int name_sentinel; int name_rbtree; } ;
typedef TYPE_6__ ngx_resolver_t ;
typedef TYPE_4__ ngx_resolver_connection_t ;
struct TYPE_28__ {TYPE_6__* data; int handler; } ;
typedef TYPE_8__ ngx_pool_cleanup_t ;
typedef int ngx_event_t ;
struct TYPE_29__ {int pool; TYPE_3__* cycle; } ;
typedef TYPE_9__ ngx_conf_t ;
struct TYPE_24__ {int new_log; } ;
struct TYPE_23__ {int cancelable; int * log; TYPE_6__* data; int handler; } ;
struct TYPE_22__ {int name; int socklen; int sockaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_19__*,int ,size_t,int) ;
 TYPE_4__* FUNC_1 (TYPE_19__*,int) ;
 int FUNC_2 (int ,TYPE_9__*,int ,char*,...) ;
 int FUNC_3 (TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*) ;
 void* FUNC_6 (int ,int) ;
 TYPE_8__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (int *,char*,int) ;

ngx_resolver_t *
FUNC_12(ngx_conf_t *VAR_9, ngx_str_t *VAR_10, ngx_uint_t VAR_11)
{
    ngx_str_t VAR_12;
    ngx_url_t VAR_13;
    ngx_uint_t VAR_14, VAR_15;
    ngx_resolver_t *VAR_16;
    ngx_pool_cleanup_t *VAR_17;
    ngx_resolver_connection_t *VAR_18;

    VAR_16 = FUNC_6(VAR_9->pool, sizeof(ngx_resolver_t));
    if (VAR_16 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_16->event = FUNC_6(VAR_9->pool, sizeof(ngx_event_t));
    if (VAR_16->event == ((void*)0)) {
        return ((void*)0);
    }

    VAR_17 = FUNC_7(VAR_9->pool, 0);
    if (VAR_17 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_17->handler = VAR_5;
    VAR_17->data = VAR_16;

    FUNC_9(&VAR_16->name_rbtree, &VAR_16->name_sentinel,
                    VAR_7);

    FUNC_9(&VAR_16->srv_rbtree, &VAR_16->srv_sentinel,
                    VAR_7);

    FUNC_9(&VAR_16->addr_rbtree, &VAR_16->addr_sentinel,
                    VAR_4);

    FUNC_8(&VAR_16->name_resend_queue);
    FUNC_8(&VAR_16->srv_resend_queue);
    FUNC_8(&VAR_16->addr_resend_queue);

    FUNC_8(&VAR_16->name_expire_queue);
    FUNC_8(&VAR_16->srv_expire_queue);
    FUNC_8(&VAR_16->addr_expire_queue);
    VAR_16->event->handler = VAR_8;
    VAR_16->event->data = VAR_16;
    VAR_16->event->log = &VAR_9->cycle->new_log;
    VAR_16->event->cancelable = 1;
    VAR_16->ident = -1;

    VAR_16->resend_timeout = 5;
    VAR_16->tcp_timeout = 5;
    VAR_16->expire = 30;
    VAR_16->valid = 0;

    VAR_16->log = &VAR_9->cycle->new_log;
    VAR_16->log_level = VAR_2;

    if (VAR_11) {
        if (FUNC_0(&VAR_16->connections, VAR_9->pool, VAR_11,
                           sizeof(ngx_resolver_connection_t))
            != VAR_3)
        {
            return ((void*)0);
        }
    }

    for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
        if (FUNC_11(VAR_10[VAR_14].data, "valid=", 6) == 0) {
            VAR_12.len = VAR_10[VAR_14].len - 6;
            VAR_12.data = VAR_10[VAR_14].data + 6;

            VAR_16->valid = FUNC_4(&VAR_12, 1);

            if (VAR_16->valid == (time_t) VAR_0) {
                FUNC_2(VAR_1, VAR_9, 0,
                                   "invalid parameter: %V", &VAR_10[VAR_14]);
                return ((void*)0);
            }

            continue;
        }
        FUNC_3(&VAR_13, sizeof(ngx_url_t));

        VAR_13.url = VAR_10[VAR_14];
        VAR_13.default_port = 53;

        if (FUNC_5(VAR_9->pool, &VAR_13) != VAR_3) {
            if (VAR_13.err) {
                FUNC_2(VAR_1, VAR_9, 0,
                                   "%s in resolver \"%V\"",
                                   VAR_13.err, &VAR_13.url);
            }

            return ((void*)0);
        }

        VAR_18 = FUNC_1(&VAR_16->connections, VAR_13.naddrs);
        if (VAR_18 == ((void*)0)) {
            return ((void*)0);
        }

        FUNC_3(VAR_18, VAR_13.naddrs * sizeof(ngx_resolver_connection_t));

        for (VAR_15 = 0; VAR_15 < VAR_13.naddrs; VAR_15++) {
            VAR_18[VAR_15].sockaddr = VAR_13.addrs[VAR_15].sockaddr;
            VAR_18[VAR_15].socklen = VAR_13.addrs[VAR_15].socklen;
            VAR_18[VAR_15].server = VAR_13.addrs[VAR_15].name;
            VAR_18[VAR_15].resolver = VAR_16;
        }
    }

    if (VAR_11 && VAR_16->connections.nelts == 0) {
        FUNC_2(VAR_1, VAR_9, 0, "no name servers defined");
        return ((void*)0);
    }

    return VAR_16;
}
