
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct ip_addr {int* addr; } ;



u8_t
FUNC_0(struct ip_addr *VAR_0, struct ip_addr *VAR_1,
                struct ip_addr *VAR_2)
{
  return((VAR_0->addr[0] & VAR_2->addr[0]) == (VAR_1->addr[0] & VAR_2->addr[0]) &&
         (VAR_0->addr[1] & VAR_2->addr[1]) == (VAR_1->addr[1] & VAR_2->addr[1]) &&
         (VAR_0->addr[2] & VAR_2->addr[2]) == (VAR_1->addr[2] & VAR_2->addr[2]) &&
         (VAR_0->addr[3] & VAR_2->addr[3]) == (VAR_1->addr[3] & VAR_2->addr[3]));

}
