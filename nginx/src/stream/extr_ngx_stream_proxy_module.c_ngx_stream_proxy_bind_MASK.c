
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


struct TYPE_20__ {int transparent; TYPE_13__* addr; TYPE_5__* value; } ;
typedef TYPE_3__ ngx_stream_upstream_local_t ;
struct TYPE_21__ {TYPE_3__* local; } ;
typedef TYPE_4__ ngx_stream_proxy_srv_conf_t ;
struct TYPE_22__ {scalar_t__ lengths; } ;
typedef TYPE_5__ ngx_stream_complex_value_t ;
struct TYPE_23__ {TYPE_5__* complex_value; TYPE_7__* value; TYPE_9__* cf; } ;
typedef TYPE_6__ ngx_stream_compile_complex_value_t ;
struct TYPE_24__ {int data; int len; } ;
typedef TYPE_7__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_25__ {int transparent; } ;
typedef TYPE_8__ ngx_core_conf_t ;
struct TYPE_26__ {TYPE_2__* cycle; TYPE_1__* args; int pool; } ;
typedef TYPE_9__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef int ngx_addr_t ;
struct TYPE_19__ {int conf_ctx; } ;
struct TYPE_18__ {int nelts; TYPE_7__* elts; } ;
struct TYPE_17__ {TYPE_7__ name; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_3__* VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (int ,TYPE_9__*,int ,char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*,int) ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,TYPE_13__*,int ,int ) ;
 TYPE_3__* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_stream_proxy_srv_conf_t *VAR_8 = VAR_7;

    ngx_int_t VAR_9;
    ngx_str_t *VAR_10;
    ngx_stream_complex_value_t VAR_11;
    ngx_stream_upstream_local_t *VAR_12;
    ngx_stream_compile_complex_value_t VAR_13;

    if (VAR_8->local != VAR_2) {
        return "is duplicate";
    }

    VAR_10 = VAR_5->args->elts;

    if (VAR_5->args->nelts == 2 && FUNC_6(VAR_10[1].data, "off") == 0) {
        VAR_8->local = ((void*)0);
        return VAR_1;
    }

    FUNC_2(&VAR_13, sizeof(ngx_stream_compile_complex_value_t));

    VAR_13.cf = VAR_5;
    VAR_13.value = &VAR_10[1];
    VAR_13.complex_value = &VAR_11;

    if (FUNC_7(&VAR_13) != 128) {
        return VAR_0;
    }

    VAR_12 = FUNC_5(VAR_5->pool, sizeof(ngx_stream_upstream_local_t));
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->local = VAR_12;

    if (VAR_11.lengths) {
        VAR_12->value = FUNC_3(VAR_5->pool, sizeof(ngx_stream_complex_value_t));
        if (VAR_12->value == ((void*)0)) {
            return VAR_0;
        }

        *VAR_12->value = VAR_11;

    } else {
        VAR_12->addr = FUNC_3(VAR_5->pool, sizeof(ngx_addr_t));
        if (VAR_12->addr == ((void*)0)) {
            return VAR_0;
        }

        VAR_9 = FUNC_4(VAR_5->pool, VAR_12->addr, VAR_10[1].data,
                                 VAR_10[1].len);

        switch (VAR_9) {
        case 128:
            VAR_12->addr->name = VAR_10[1];
            break;

        case 129:
            FUNC_0(VAR_3, VAR_5, 0,
                               "invalid address \"%V\"", &VAR_10[1]);


        default:
            return VAR_0;
        }
    }

    if (VAR_5->args->nelts > 2) {
        if (FUNC_6(VAR_10[2].data, "transparent") == 0) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "transparent proxying is not supported "
                               "on this platform, ignored");

        } else {
            FUNC_0(VAR_3, VAR_5, 0,
                               "invalid parameter \"%V\"", &VAR_10[2]);
            return VAR_0;
        }
    }

    return VAR_1;
}
