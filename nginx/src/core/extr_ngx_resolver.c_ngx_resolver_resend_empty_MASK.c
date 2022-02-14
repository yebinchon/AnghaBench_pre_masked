
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_3__ {int addr_resend_queue; int addr6_resend_queue; int srv_resend_queue; int name_resend_queue; } ;
typedef TYPE_1__ ngx_resolver_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static ngx_uint_t
FUNC_1(ngx_resolver_t *VAR_0)
{
    return FUNC_0(&VAR_0->name_resend_queue)
           && FUNC_0(&VAR_0->srv_resend_queue)



           && FUNC_0(&VAR_0->addr_resend_queue);
}
