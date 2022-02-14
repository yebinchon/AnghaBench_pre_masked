
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16_t ;
struct ip_addr {int dummy; } ;
typedef int err_t ;
struct TYPE_3__ {int local_port; struct ip_addr local_ip; } ;
typedef TYPE_1__* PTCP_PCB ;


 int VAR_0 ;
 int VAR_1 ;

err_t
FUNC_0(PTCP_PCB VAR_2, struct ip_addr *const VAR_3, u16_t *const VAR_4)
{
    if (!VAR_2)
        return VAR_0;

    *VAR_3 = VAR_2->local_ip;
    *VAR_4 = VAR_2->local_port;

    return VAR_1;
}
