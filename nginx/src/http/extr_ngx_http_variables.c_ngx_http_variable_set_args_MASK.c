
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; int len; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_6__ {int data; int len; } ;
struct TYPE_8__ {scalar_t__ valid_unparsed_uri; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_http_request_t ;



__attribute__((used)) static void
FUNC_0(ngx_http_request_t *VAR_0,
    ngx_http_variable_value_t *VAR_1, uintptr_t VAR_2)
{
    VAR_0->args.len = VAR_1->len;
    VAR_0->args.data = VAR_1->data;
    VAR_0->valid_unparsed_uri = 0;
}
