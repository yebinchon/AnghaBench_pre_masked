
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_7__ {int data; } ;
struct TYPE_9__ {TYPE_1__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int connection_type; } ;
struct TYPE_10__ {TYPE_2__ headers_in; } ;
typedef TYPE_4__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3, ngx_table_elt_t *VAR_4,
    ngx_uint_t VAR_5)
{
    if (FUNC_0(VAR_4->value.data, "close", 5 - 1)) {
        VAR_3->headers_in.connection_type = VAR_0;

    } else if (FUNC_0(VAR_4->value.data, "keep-alive", 10 - 1)) {
        VAR_3->headers_in.connection_type = VAR_1;
    }

    return VAR_2;
}
