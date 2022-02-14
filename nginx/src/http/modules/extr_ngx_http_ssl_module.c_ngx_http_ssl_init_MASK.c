
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {int * ctx; } ;
struct TYPE_32__ {int * certificates; TYPE_14__ ssl; int stapling; } ;
typedef TYPE_6__ ngx_http_ssl_srv_conf_t ;
struct TYPE_33__ {int line; int file_name; TYPE_5__* ctx; } ;
typedef TYPE_7__ ngx_http_core_srv_conf_t ;
struct TYPE_27__ {size_t nelts; TYPE_7__** elts; } ;
struct TYPE_34__ {TYPE_2__* ports; TYPE_1__ servers; } ;
typedef TYPE_8__ ngx_http_core_main_conf_t ;
struct TYPE_35__ {int resolver_timeout; int resolver; } ;
typedef TYPE_9__ ngx_http_core_loc_conf_t ;
struct TYPE_29__ {size_t nelts; TYPE_11__* elts; } ;
struct TYPE_21__ {TYPE_3__ addrs; } ;
typedef TYPE_10__ ngx_http_conf_port_t ;
struct TYPE_30__ {int ssl; } ;
struct TYPE_22__ {TYPE_7__* default_server; TYPE_4__ opt; } ;
typedef TYPE_11__ ngx_http_conf_addr_t ;
struct TYPE_23__ {int log; } ;
typedef TYPE_12__ ngx_conf_t ;
struct TYPE_31__ {TYPE_6__** srv_conf; TYPE_9__** loc_conf; } ;
struct TYPE_28__ {size_t nelts; TYPE_10__* elts; } ;
struct TYPE_26__ {size_t ctx_index; } ;
struct TYPE_25__ {size_t ctx_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_8__* FUNC_0 (TYPE_12__*,TYPE_17__) ;
 TYPE_17__ VAR_3 ;
 TYPE_15__ VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_12__*,TYPE_14__*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_5)
{
    ngx_uint_t VAR_6, VAR_7, VAR_8;
    ngx_http_conf_addr_t *VAR_9;
    ngx_http_conf_port_t *VAR_10;
    ngx_http_ssl_srv_conf_t *VAR_11;
    ngx_http_core_loc_conf_t *VAR_12;
    ngx_http_core_srv_conf_t **VAR_13, *VAR_14;
    ngx_http_core_main_conf_t *VAR_15;

    VAR_15 = FUNC_0(VAR_5, VAR_3);
    VAR_13 = VAR_15->servers.elts;

    for (VAR_8 = 0; VAR_8 < VAR_15->servers.nelts; VAR_8++) {

        VAR_11 = VAR_13[VAR_8]->ctx->srv_conf[VAR_4.ctx_index];

        if (VAR_11->ssl.ctx == ((void*)0) || !VAR_11->stapling) {
            continue;
        }

        VAR_12 = VAR_13[VAR_8]->ctx->loc_conf[VAR_3.ctx_index];

        if (FUNC_2(VAR_5, &VAR_11->ssl, VAR_12->resolver,
                                      VAR_12->resolver_timeout)
            != VAR_2)
        {
            return VAR_0;
        }
    }

    if (VAR_15->ports == ((void*)0)) {
        return VAR_2;
    }

    VAR_10 = VAR_15->ports->elts;
    for (VAR_7 = 0; VAR_7 < VAR_15->ports->nelts; VAR_7++) {

        VAR_9 = VAR_10[VAR_7].addrs.elts;
        for (VAR_6 = 0; VAR_6 < VAR_10[VAR_7].addrs.nelts; VAR_6++) {

            if (!VAR_9[VAR_6].opt.ssl) {
                continue;
            }

            VAR_14 = VAR_9[VAR_6].default_server;
            VAR_11 = VAR_14->ctx->srv_conf[VAR_4.ctx_index];

            if (VAR_11->certificates == ((void*)0)) {
                FUNC_1(VAR_1, VAR_5->log, 0,
                              "no \"ssl_certificate\" is defined for "
                              "the \"listen ... ssl\" directive in %s:%ui",
                              VAR_14->file_name, VAR_14->line);
                return VAR_0;
            }
        }
    }

    return VAR_2;
}
