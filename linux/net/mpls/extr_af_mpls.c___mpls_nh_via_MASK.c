
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpls_route {int rt_via_offset; } ;
struct mpls_nh {int dummy; } ;



__attribute__((used)) static u8 *FUNC_0(struct mpls_route *VAR_0, struct mpls_nh *VAR_1)
{
 return (u8 *)VAR_1 + VAR_0->rt_via_offset;
}
