
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ip; } ;
typedef TYPE_1__ ngx_stream_script_engine_t ;
struct TYPE_5__ {size_t len; } ;
typedef TYPE_2__ ngx_stream_script_copy_code_t ;



size_t
FUNC_0(ngx_stream_script_engine_t *VAR_0)
{
    ngx_stream_script_copy_code_t *VAR_1;

    VAR_1 = (ngx_stream_script_copy_code_t *) VAR_0->ip;

    VAR_0->ip += sizeof(ngx_stream_script_copy_code_t);

    return VAR_1->len;
}
