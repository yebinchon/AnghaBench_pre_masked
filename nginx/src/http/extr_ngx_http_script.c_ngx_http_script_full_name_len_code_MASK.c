
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ conf_prefix; } ;
typedef TYPE_3__ ngx_http_script_full_name_code_t ;
struct TYPE_10__ {scalar_t__ ip; } ;
typedef TYPE_4__ ngx_http_script_engine_t ;
struct TYPE_8__ {size_t len; } ;
struct TYPE_7__ {size_t len; } ;
struct TYPE_11__ {TYPE_2__ prefix; TYPE_1__ conf_prefix; } ;


 TYPE_6__* VAR_0 ;

__attribute__((used)) static size_t
FUNC_0(ngx_http_script_engine_t *VAR_1)
{
    ngx_http_script_full_name_code_t *VAR_2;

    VAR_2 = (ngx_http_script_full_name_code_t *) VAR_1->ip;

    VAR_1->ip += sizeof(ngx_http_script_full_name_code_t);

    return VAR_2->conf_prefix ? VAR_0->conf_prefix.len:
                               VAR_0->prefix.len;
}
