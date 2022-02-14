
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ remote_host_local; int remote_endpoint; int bypass; } ;
struct route_gateway_address {int addr; int netmask; } ;
struct TYPE_3__ {int const flags; size_t n_addrs; struct route_gateway_address const gateway; struct route_gateway_address* addrs; } ;
struct route_list {int flags; TYPE_2__ spec; TYPE_1__ rgi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct route_list*,struct route_gateway_address const*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct route_list *VAR_5)
{
    const int VAR_6 = (VAR_0|VAR_1);
    if ((VAR_5->flags & VAR_2)
        && (VAR_5->rgi.flags & VAR_6) == VAR_6
        && (VAR_5->spec.flags & VAR_3)
        && VAR_5->spec.remote_host_local != VAR_4)
    {
        size_t VAR_7;



        FUNC_1(&VAR_5->spec.bypass, VAR_5->rgi.gateway.addr);



        FUNC_0(VAR_5, &VAR_5->rgi.gateway, VAR_5->spec.remote_endpoint);


        for (VAR_7 = 0; VAR_7 < VAR_5->rgi.n_addrs; ++VAR_7)
        {
            const struct route_gateway_address *VAR_8 = &VAR_5->rgi.addrs[VAR_7];

            if (!((VAR_5->rgi.gateway.addr & VAR_5->rgi.gateway.netmask) == (VAR_8->addr & VAR_8->netmask)
                  && VAR_5->rgi.gateway.netmask == VAR_8->netmask))
            {
                FUNC_0(VAR_5, VAR_8, VAR_5->spec.remote_endpoint);
            }
        }
    }
}
