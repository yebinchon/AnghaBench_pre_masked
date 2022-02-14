
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpls_route {int rt_nh_size; scalar_t__ rt_nh; } ;
struct mpls_nh {int dummy; } ;



__attribute__((used)) static struct mpls_nh *FUNC_0(struct mpls_route *VAR_0, u8 VAR_1)
{
 return (struct mpls_nh *)((u8 *)VAR_0->rt_nh + VAR_1 * VAR_0->rt_nh_size);
}
