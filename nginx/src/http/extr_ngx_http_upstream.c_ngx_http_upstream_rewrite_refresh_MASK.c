
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_17__ {int data; } ;
struct TYPE_15__ {TYPE_8__ value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {TYPE_4__* refresh; int headers; } ;
struct TYPE_16__ {TYPE_3__ headers_out; TYPE_2__* connection; TYPE_1__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_13__ {int log; } ;
struct TYPE_12__ {scalar_t__ (* rewrite_redirect ) (TYPE_5__*,TYPE_4__*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_8__*) ;
 int * FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_4__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_4, ngx_table_elt_t *VAR_5,
    ngx_uint_t VAR_6)
{
    u_char *VAR_7;
    ngx_int_t VAR_8;
    ngx_table_elt_t *VAR_9;

    VAR_9 = FUNC_0(&VAR_4->headers_out.headers);
    if (VAR_9 == ((void*)0)) {
        return VAR_1;
    }

    *VAR_9 = *VAR_5;

    if (VAR_4->upstream->rewrite_redirect) {

        VAR_7 = FUNC_2(VAR_9->value.data, "url=", 4 - 1);

        if (VAR_7) {
            VAR_8 = VAR_4->upstream->rewrite_redirect(VAR_4, VAR_9, VAR_7 + 4 - VAR_9->value.data);

        } else {
            return VAR_3;
        }

        if (VAR_8 == VAR_0) {
            return VAR_3;
        }

        if (VAR_8 == VAR_3) {
            VAR_4->headers_out.refresh = VAR_9;

            FUNC_1(VAR_2, VAR_4->connection->log, 0,
                           "rewritten refresh: \"%V\"", &VAR_9->value);
        }

        return VAR_8;
    }

    VAR_4->headers_out.refresh = VAR_9;

    return VAR_3;
}
