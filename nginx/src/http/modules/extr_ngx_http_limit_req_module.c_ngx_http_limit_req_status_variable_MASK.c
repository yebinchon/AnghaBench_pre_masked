
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_8__ {int not_found; int valid; int data; int len; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_9__ {TYPE_1__* main; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {int data; int len; } ;
struct TYPE_7__ {int limit_req_status; } ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    if (VAR_2->main->limit_req_status == 0) {
        VAR_3->not_found = 1;
        return VAR_0;
    }

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->len = VAR_1[VAR_2->main->limit_req_status - 1].len;
    VAR_3->data = VAR_1[VAR_2->main->limit_req_status - 1].data;

    return VAR_0;
}
