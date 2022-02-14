
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {int last_modified_time; int * last_modified; int headers; } ;
struct TYPE_9__ {TYPE_3__* upstream; TYPE_1__ headers_out; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_7__ {int last_modified_time; } ;
struct TYPE_8__ {TYPE_2__ headers_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_table_elt_t *VAR_3,
    ngx_uint_t VAR_4)
{
    ngx_table_elt_t *VAR_5;

    VAR_5 = FUNC_0(&VAR_2->headers_out.headers);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = *VAR_3;

    VAR_2->headers_out.last_modified = VAR_5;
    VAR_2->headers_out.last_modified_time =
                                    VAR_2->upstream->headers_in.last_modified_time;

    return VAR_1;
}
