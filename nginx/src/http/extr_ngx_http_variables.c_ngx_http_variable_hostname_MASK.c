
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;
struct TYPE_5__ {int data; int len; } ;
struct TYPE_7__ {TYPE_1__ hostname; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    VAR_3->len = VAR_1->hostname.len;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->data = VAR_1->hostname.data;

    return VAR_0;
}
