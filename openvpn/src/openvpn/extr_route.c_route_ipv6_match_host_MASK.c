
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* s6_addr; } ;
struct route_ipv6 {unsigned int netbits; TYPE_1__ network; } ;
struct in6_addr {unsigned int* s6_addr; } ;



__attribute__((used)) static bool
FUNC_0( const struct route_ipv6 *VAR_0,
                       const struct in6_addr *VAR_1 )
{
    unsigned int VAR_2 = VAR_0->netbits;
    int VAR_3;
    unsigned int VAR_4;

    if (VAR_2>128)
    {
        return 0;
    }

    for (VAR_3 = 0; VAR_2 >= 8; VAR_3++, VAR_2 -= 8)
    {
        if (VAR_0->network.s6_addr[VAR_3] != VAR_1->s6_addr[VAR_3])
        {
            return 0;
        }
    }

    if (VAR_2 == 0)
    {
        return 1;
    }

    VAR_4 = 0xff << (8-VAR_2);

    if ( (VAR_0->network.s6_addr[VAR_3] & VAR_4) == (VAR_1->s6_addr[VAR_3] & VAR_4 ))
    {
        return 1;
    }

    return 0;
}
