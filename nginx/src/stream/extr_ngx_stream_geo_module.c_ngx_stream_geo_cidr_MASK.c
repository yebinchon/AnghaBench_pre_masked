
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct TYPE_23__ {int * tree; int * tree6; int pool; } ;
typedef TYPE_5__ ngx_stream_geo_conf_ctx_t ;
struct TYPE_24__ {int data; } ;
typedef TYPE_6__ ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_in6_cidr_t ;
typedef int ngx_conf_t ;
struct TYPE_21__ {void* mask; void* addr; } ;
struct TYPE_20__ {int s6_addr; } ;
struct TYPE_19__ {int s6_addr; } ;
struct TYPE_18__ {TYPE_2__ mask; TYPE_1__ addr; } ;
struct TYPE_22__ {TYPE_3__ in; TYPE_16__ in6; } ;
struct TYPE_25__ {int family; TYPE_4__ u; } ;
typedef TYPE_7__ ngx_cidr_t ;


 int VAR_0 ;

 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,TYPE_6__*) ;
 int FUNC_1 (TYPE_16__*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,void*,void*) ;
 void* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 char* FUNC_6 (int *,TYPE_5__*,TYPE_7__*,TYPE_6__*,TYPE_6__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_6__*,TYPE_7__*) ;
 void* FUNC_8 (void*) ;

__attribute__((used)) static char *
FUNC_9(ngx_conf_t *VAR_5, ngx_stream_geo_conf_ctx_t *VAR_6,
    ngx_str_t *VAR_7)
{
    char *VAR_8;
    ngx_int_t VAR_9, VAR_10;
    ngx_str_t *VAR_11;
    ngx_cidr_t VAR_12;

    if (VAR_6->tree == ((void*)0)) {
        VAR_6->tree = FUNC_4(VAR_6->pool, -1);
        if (VAR_6->tree == ((void*)0)) {
            return VAR_1;
        }
    }
    if (FUNC_5(VAR_7[0].data, "default") == 0) {
        VAR_12.family = VAR_0;
        VAR_12.u.in.addr = 0;
        VAR_12.u.in.mask = 0;

        VAR_8 = FUNC_6(VAR_5, VAR_6, &VAR_12, &VAR_7[1], &VAR_7[0]);

        if (VAR_8 != VAR_2) {
            return VAR_8;
        }
        return VAR_2;
    }

    if (FUNC_5(VAR_7[0].data, "delete") == 0) {
        VAR_11 = &VAR_7[1];
        VAR_10 = 1;

    } else {
        VAR_11 = &VAR_7[0];
        VAR_10 = 0;
    }

    if (FUNC_7(VAR_5, VAR_11, &VAR_12) != VAR_4) {
        return VAR_1;
    }

    if (VAR_12.family == VAR_0) {
        VAR_12.u.in.addr = FUNC_8(VAR_12.u.in.addr);
        VAR_12.u.in.mask = FUNC_8(VAR_12.u.in.mask);
    }

    if (VAR_10) {
        switch (VAR_12.family) {
        default:
            VAR_9 = FUNC_3(VAR_6->tree, VAR_12.u.in.addr,
                                        VAR_12.u.in.mask);
            break;
        }

        if (VAR_9 != VAR_4) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "no network \"%V\" to delete", VAR_11);
        }

        return VAR_2;
    }

    return FUNC_6(VAR_5, VAR_6, &VAR_12, &VAR_7[1], VAR_11);
}
