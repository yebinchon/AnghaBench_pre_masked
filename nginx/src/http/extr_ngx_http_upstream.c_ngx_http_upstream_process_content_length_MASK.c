
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
struct TYPE_9__ {int len; int data; } ;
struct TYPE_10__ {TYPE_2__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int content_length_n; TYPE_3__* content_length; } ;
struct TYPE_11__ {TYPE_1__ headers_in; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_12__ {TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1,
    ngx_table_elt_t *VAR_2, ngx_uint_t VAR_3)
{
    ngx_http_upstream_t *VAR_4;

    VAR_4 = VAR_1->upstream;

    VAR_4->headers_in.content_length = VAR_2;
    VAR_4->headers_in.content_length_n = FUNC_0(VAR_2->value.data, VAR_2->value.len);

    return VAR_0;
}
