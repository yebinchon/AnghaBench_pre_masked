
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
struct xfrm_pol_inexact_node {int prefixlen; int addr; } ;



__attribute__((used)) static void FUNC_0(struct xfrm_pol_inexact_node *VAR_0,
           const xfrm_address_t *VAR_1, u8 VAR_2)
{
 VAR_0->addr = *VAR_1;
 VAR_0->prefixlen = VAR_2;
}
