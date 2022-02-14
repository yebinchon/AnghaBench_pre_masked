
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int last_modified_time; } ;
struct TYPE_10__ {TYPE_1__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int ngx_http_header_val_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, ngx_http_header_val_t *VAR_3,
    ngx_str_t *VAR_4)
{
    if (FUNC_0(VAR_2, VAR_3, VAR_4) != VAR_1) {
        return VAR_0;
    }

    VAR_2->headers_out.last_modified_time =
        (VAR_4->len) ? FUNC_1(VAR_4->data, VAR_4->len) : -1;

    return VAR_1;
}
