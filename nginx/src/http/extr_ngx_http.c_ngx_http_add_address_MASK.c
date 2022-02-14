
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int ngx_int_t ;
struct TYPE_19__ {int addr_text; scalar_t__ ssl; scalar_t__ http2; } ;
typedef TYPE_3__ ngx_http_listen_opt_t ;
typedef int ngx_http_core_srv_conf_t ;
struct TYPE_16__ {int * elts; } ;
struct TYPE_20__ {TYPE_14__ addrs; } ;
typedef TYPE_4__ ngx_http_conf_port_t ;
struct TYPE_18__ {int * elts; } ;
struct TYPE_17__ {scalar_t__ size; int * buckets; } ;
struct TYPE_21__ {TYPE_2__ servers; int * default_server; int * regex; scalar_t__ nregex; int * wc_tail; int * wc_head; TYPE_1__ hash; TYPE_3__ opt; } ;
typedef TYPE_5__ ngx_http_conf_addr_t ;
struct TYPE_22__ {int temp_pool; } ;
typedef TYPE_6__ ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_14__*,int ,int,int) ;
 TYPE_5__* FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (int ,TYPE_6__*,int ,char*,int *) ;
 int FUNC_3 (TYPE_6__*,int *,TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_conf_t *VAR_3, ngx_http_core_srv_conf_t *VAR_4,
    ngx_http_conf_port_t *VAR_5, ngx_http_listen_opt_t *VAR_6)
{
    ngx_http_conf_addr_t *VAR_7;

    if (VAR_5->addrs.elts == ((void*)0)) {
        if (FUNC_0(&VAR_5->addrs, VAR_3->temp_pool, 4,
                           sizeof(ngx_http_conf_addr_t))
            != VAR_2)
        {
            return VAR_0;
        }
    }
    VAR_7 = FUNC_1(&VAR_5->addrs);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->opt = *VAR_6;
    VAR_7->hash.buckets = ((void*)0);
    VAR_7->hash.size = 0;
    VAR_7->wc_head = ((void*)0);
    VAR_7->wc_tail = ((void*)0);




    VAR_7->default_server = VAR_4;
    VAR_7->servers.elts = ((void*)0);

    return FUNC_3(VAR_3, VAR_4, VAR_7);
}
