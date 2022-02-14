
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


typedef int ngx_stream_variable_value_t ;
struct TYPE_16__ {int tree; int tree6; } ;
typedef TYPE_6__ ngx_stream_geo_conf_ctx_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_conf_t ;
struct TYPE_14__ {int mask; int addr; } ;
struct TYPE_12__ {int s6_addr; } ;
struct TYPE_11__ {int s6_addr; } ;
struct TYPE_13__ {TYPE_2__ mask; TYPE_1__ addr; } ;
struct TYPE_15__ {TYPE_4__ in; TYPE_3__ in6; } ;
struct TYPE_17__ {int family; TYPE_5__ u; } ;
typedef TYPE_7__ ngx_cidr_t ;



 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,uintptr_t) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,uintptr_t) ;
 int * FUNC_7 (int *,TYPE_6__*,int *) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_6, ngx_stream_geo_conf_ctx_t *VAR_7,
    ngx_cidr_t *VAR_8, ngx_str_t *VAR_9, ngx_str_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_stream_variable_value_t *VAR_12, *VAR_13;

    VAR_12 = FUNC_7(VAR_6, VAR_7, VAR_9);

    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    switch (VAR_8->family) {
    default:
        VAR_11 = FUNC_6(VAR_7->tree, VAR_8->u.in.addr,
                                    VAR_8->u.in.mask, (uintptr_t) VAR_12);

        if (VAR_11 == VAR_5) {
            return VAR_1;
        }

        if (VAR_11 == VAR_2) {
            return VAR_0;
        }



        VAR_13 = (ngx_stream_variable_value_t *)
                   FUNC_5(VAR_7->tree, VAR_8->u.in.addr);

        FUNC_0(VAR_4, VAR_6, 0,
              "duplicate network \"%V\", value: \"%v\", old value: \"%v\"",
              VAR_10, VAR_12, VAR_13);

        VAR_11 = FUNC_4(VAR_7->tree,
                                    VAR_8->u.in.addr, VAR_8->u.in.mask);

        if (VAR_11 == VAR_2) {
            FUNC_0(VAR_3, VAR_6, 0, "invalid radix tree");
            return VAR_0;
        }

        VAR_11 = FUNC_6(VAR_7->tree, VAR_8->u.in.addr,
                                    VAR_8->u.in.mask, (uintptr_t) VAR_12);

        break;
    }

    if (VAR_11 == VAR_5) {
        return VAR_1;
    }

    return VAR_0;
}
