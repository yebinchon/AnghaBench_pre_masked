
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_14__ {int value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {int headers; } ;
struct TYPE_15__ {TYPE_1__* connection; TYPE_3__* upstream; TYPE_2__ headers_out; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_13__ {scalar_t__ (* rewrite_cookie ) (TYPE_5__*,TYPE_4__*) ;} ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4, ngx_table_elt_t *VAR_5,
    ngx_uint_t VAR_6)
{
    ngx_int_t VAR_7;
    ngx_table_elt_t *VAR_8;

    VAR_8 = FUNC_0(&VAR_4->headers_out.headers);
    if (VAR_8 == ((void*)0)) {
        return VAR_1;
    }

    *VAR_8 = *VAR_5;

    if (VAR_4->upstream->rewrite_cookie) {
        VAR_7 = VAR_4->upstream->rewrite_cookie(VAR_4, VAR_8);

        if (VAR_7 == VAR_0) {
            return VAR_3;
        }
        return VAR_7;
    }

    return VAR_3;
}
