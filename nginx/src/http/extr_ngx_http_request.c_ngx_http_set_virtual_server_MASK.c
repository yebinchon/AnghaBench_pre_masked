
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_12__ ;


struct TYPE_26__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_27__ {scalar_t__ verify; } ;
typedef TYPE_3__ ngx_http_ssl_srv_conf_t ;
struct TYPE_28__ {TYPE_8__* connection; int loc_conf; int srv_conf; TYPE_7__* http_connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_29__ {TYPE_14__* ctx; } ;
typedef TYPE_5__ ngx_http_core_srv_conf_t ;
struct TYPE_30__ {int error_log; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_31__ {TYPE_1__* addr_conf; TYPE_12__* ssl_servername; scalar_t__ ssl_servername_regex; } ;
typedef TYPE_7__ ngx_http_connection_t ;
struct TYPE_32__ {int log; } ;
struct TYPE_25__ {TYPE_5__* default_server; int virtual_names; } ;
struct TYPE_24__ {int loc_conf; int srv_conf; } ;
struct TYPE_23__ {int data; int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_8__*,int ,TYPE_2__*,TYPE_4__*,TYPE_5__**) ;
 TYPE_6__* FUNC_3 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_14__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,scalar_t__,TYPE_12__*) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_8, ngx_str_t *VAR_9)
{
    ngx_int_t VAR_10;
    ngx_http_connection_t *VAR_11;
    ngx_http_core_loc_conf_t *VAR_12;
    ngx_http_core_srv_conf_t *VAR_13;





    VAR_11 = VAR_8->http_connection;
    VAR_10 = FUNC_2(VAR_8->connection,
                                      VAR_11->addr_conf->virtual_names,
                                      VAR_9, VAR_8, &VAR_13);

    if (VAR_10 == VAR_1) {
        FUNC_0(VAR_8, VAR_2);
        return VAR_1;
    }
    if (VAR_10 == VAR_0) {
        return VAR_5;
    }

    VAR_8->srv_conf = VAR_13->ctx->srv_conf;
    VAR_8->loc_conf = VAR_13->ctx->loc_conf;

    VAR_12 = FUNC_3(VAR_8, VAR_6);

    FUNC_7(VAR_8->connection, VAR_12->error_log);

    return VAR_5;
}
