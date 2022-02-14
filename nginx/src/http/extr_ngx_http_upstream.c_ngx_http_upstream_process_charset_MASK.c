
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_11__ {int value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int * override_charset; } ;
struct TYPE_12__ {TYPE_3__ headers_out; TYPE_2__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_9__ {TYPE_1__* conf; } ;
struct TYPE_8__ {int ignore_headers; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_2, ngx_table_elt_t *VAR_3,
    ngx_uint_t VAR_4)
{
    if (VAR_2->upstream->conf->ignore_headers & VAR_0) {
        return VAR_1;
    }

    VAR_2->headers_out.override_charset = &VAR_3->value;

    return VAR_1;
}
