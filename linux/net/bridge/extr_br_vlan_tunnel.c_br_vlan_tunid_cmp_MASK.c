
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rhashtable_compare_arg {scalar_t__ key; } ;
struct TYPE_2__ {scalar_t__ tunnel_id; } ;
struct net_bridge_vlan {TYPE_1__ tinfo; } ;
typedef scalar_t__ __be64 ;



__attribute__((used)) static inline int FUNC_0(struct rhashtable_compare_arg *VAR_0,
        const void *VAR_1)
{
 const struct net_bridge_vlan *VAR_2 = VAR_1;
 __be64 VAR_3 = *(__be64 *)VAR_0->key;

 return VAR_2->tinfo.tunnel_id != VAR_3;
}
