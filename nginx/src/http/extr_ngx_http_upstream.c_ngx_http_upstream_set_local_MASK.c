
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {TYPE_7__* local; int transparent; } ;
struct TYPE_19__ {TYPE_2__ peer; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_20__ {int * value; TYPE_7__* addr; int transparent; } ;
typedef TYPE_5__ ngx_http_upstream_local_t ;
struct TYPE_21__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_22__ {TYPE_3__ name; } ;
typedef TYPE_7__ ngx_addr_t ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int *,TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_3__*) ;
 TYPE_7__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_7__*,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3, ngx_http_upstream_t *VAR_4,
    ngx_http_upstream_local_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_str_t VAR_7;
    ngx_addr_t *VAR_8;

    if (VAR_5 == ((void*)0)) {
        VAR_4->peer.local = ((void*)0);
        return VAR_2;
    }





    if (VAR_5->value == ((void*)0)) {
        VAR_4->peer.local = VAR_5->addr;
        return VAR_2;
    }

    if (FUNC_0(VAR_3, VAR_5->value, &VAR_7) != VAR_2) {
        return VAR_0;
    }

    if (VAR_7.len == 0) {
        return VAR_2;
    }

    VAR_8 = FUNC_2(VAR_3->pool, sizeof(ngx_addr_t));
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_3(VAR_3->pool, VAR_8, VAR_7.data, VAR_7.len);
    if (VAR_6 == VAR_0) {
        return VAR_0;
    }

    if (VAR_6 != VAR_2) {
        FUNC_1(VAR_1, VAR_3->connection->log, 0,
                      "invalid local address \"%V\"", &VAR_7);
        return VAR_2;
    }

    VAR_8->name = VAR_7;
    VAR_4->peer.local = VAR_8;

    return VAR_2;
}
