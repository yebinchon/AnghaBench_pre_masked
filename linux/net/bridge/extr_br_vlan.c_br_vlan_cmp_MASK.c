
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rhashtable_compare_arg {scalar_t__ key; } ;
struct net_bridge_vlan {scalar_t__ vid; } ;



__attribute__((used)) static inline int FUNC_0(struct rhashtable_compare_arg *VAR_0,
         const void *VAR_1)
{
 const struct net_bridge_vlan *VAR_2 = VAR_1;
 u16 VAR_3 = *(u16 *)VAR_0->key;

 return VAR_2->vid != VAR_3;
}
