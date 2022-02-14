
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ip_to_octet {int* octet; int ip; } ;
struct TYPE_4__ {int* octet; } ;
struct TYPE_3__ {int* octet; } ;
struct ip_net {TYPE_2__ mask; TYPE_1__ ip; } ;
typedef int in_addr_t ;



__attribute__((used)) static bool FUNC_0(const struct ip_net *VAR_0, in_addr_t VAR_1)
{
    union ip_to_octet VAR_2 = {.ip = VAR_1};
    return (VAR_0->ip.octet[0] & VAR_0->mask.octet[0]) ==
               (VAR_2.octet[0] & VAR_0->mask.octet[0]) &&
           (VAR_0->ip.octet[1] & VAR_0->mask.octet[1]) ==
               (VAR_2.octet[1] & VAR_0->mask.octet[1]) &&
           (VAR_0->ip.octet[2] & VAR_0->mask.octet[2]) ==
               (VAR_2.octet[2] & VAR_0->mask.octet[2]) &&
           (VAR_0->ip.octet[3] & VAR_0->mask.octet[3]) ==
               (VAR_2.octet[3] & VAR_0->mask.octet[3]);
}
