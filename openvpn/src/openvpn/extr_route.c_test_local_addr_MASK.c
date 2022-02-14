
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct route_gateway_info {TYPE_1__ gateway; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const,int,int ,struct route_gateway_info const*) ;

int
FUNC_1(const in_addr_t VAR_3, const struct route_gateway_info *VAR_4)
{
    if (VAR_4)
    {
        if (FUNC_0(VAR_3, 0xFFFFFFFF, VAR_4->gateway.addr, VAR_4))
        {
            return VAR_0;
        }
        else
        {
            return VAR_1;
        }
    }
    return VAR_2;
}
