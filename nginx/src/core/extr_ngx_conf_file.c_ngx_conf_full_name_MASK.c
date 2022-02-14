
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_3__ {int pool; int prefix; int conf_prefix; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int FUNC_0 (int ,int *,int *) ;

ngx_int_t
FUNC_1(ngx_cycle_t *VAR_0, ngx_str_t *VAR_1, ngx_uint_t VAR_2)
{
    ngx_str_t *VAR_3;

    VAR_3 = VAR_2 ? &VAR_0->conf_prefix : &VAR_0->prefix;

    return FUNC_0(VAR_0->pool, VAR_3, VAR_1);
}
