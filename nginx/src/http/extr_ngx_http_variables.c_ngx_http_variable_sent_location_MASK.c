
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_5__ ngx_http_variable_value_t ;
struct TYPE_11__ {int part; } ;
struct TYPE_13__ {TYPE_2__ headers; TYPE_3__* location; } ;
struct TYPE_15__ {TYPE_4__ headers_out; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_10__ {int data; int len; } ;
struct TYPE_12__ {TYPE_1__ value; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_1,
    ngx_http_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    ngx_str_t VAR_4;

    if (VAR_1->headers_out.location) {
        VAR_2->len = VAR_1->headers_out.location->value.len;
        VAR_2->valid = 1;
        VAR_2->no_cacheable = 0;
        VAR_2->not_found = 0;
        VAR_2->data = VAR_1->headers_out.location->value.data;

        return VAR_0;
    }

    FUNC_1(&VAR_4, "sent_http_location");

    return FUNC_0(VAR_2, &VAR_4,
                                            &VAR_1->headers_out.headers.part,
                                            sizeof("sent_http_") - 1);
}
