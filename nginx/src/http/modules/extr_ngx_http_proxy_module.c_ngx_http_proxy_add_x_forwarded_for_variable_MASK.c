
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_13__ {int len; int data; } ;
struct TYPE_16__ {TYPE_3__ value; } ;
typedef TYPE_6__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int valid; size_t len; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_7__ ngx_http_variable_value_t ;
struct TYPE_11__ {size_t nelts; TYPE_6__** elts; } ;
struct TYPE_12__ {TYPE_1__ x_forwarded_for; } ;
struct TYPE_18__ {TYPE_5__* connection; int pool; TYPE_2__ headers_in; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_14__ {size_t len; int * data; } ;
struct TYPE_15__ {TYPE_4__ addr_text; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *,size_t) ;
 int * FUNC_2 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    size_t VAR_5;
    u_char *VAR_6;
    ngx_uint_t VAR_7, VAR_8;
    ngx_table_elt_t **VAR_9;

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    VAR_8 = VAR_2->headers_in.x_forwarded_for.nelts;
    VAR_9 = VAR_2->headers_in.x_forwarded_for.elts;

    VAR_5 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        VAR_5 += VAR_9[VAR_7]->value.len + sizeof(", ") - 1;
    }

    if (VAR_5 == 0) {
        VAR_3->len = VAR_2->connection->addr_text.len;
        VAR_3->data = VAR_2->connection->addr_text.data;
        return VAR_1;
    }

    VAR_5 += VAR_2->connection->addr_text.len;

    VAR_6 = FUNC_2(VAR_2->pool, VAR_5);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->len = VAR_5;
    VAR_3->data = VAR_6;

    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        VAR_6 = FUNC_0(VAR_6, VAR_9[VAR_7]->value.data, VAR_9[VAR_7]->value.len);
        *VAR_6++ = ','; *VAR_6++ = ' ';
    }

    FUNC_1(VAR_6, VAR_2->connection->addr_text.data, VAR_2->connection->addr_text.len);

    return VAR_1;
}
