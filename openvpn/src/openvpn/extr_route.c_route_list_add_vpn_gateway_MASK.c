
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int remote_endpoint; int flags; } ;
struct route_list {TYPE_1__ spec; } ;
struct env_set {int dummy; } ;
typedef int in_addr_t ;


 int FUNC_0 (struct route_list*) ;
 int VAR_0 ;
 int FUNC_1 (struct env_set*,char*,int ,int) ;

void
FUNC_2(struct route_list *VAR_1,
                           struct env_set *VAR_2,
                           const in_addr_t VAR_3)
{
    FUNC_0(VAR_1);
    VAR_1->spec.remote_endpoint = VAR_3;
    VAR_1->spec.flags |= VAR_0;
    FUNC_1(VAR_2, "vpn_gateway", VAR_1->spec.remote_endpoint, -1);
}
