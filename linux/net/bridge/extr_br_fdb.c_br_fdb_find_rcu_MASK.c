
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_fdb_entry {int dummy; } ;
struct net_bridge {int fdb_hash_tbl; } ;
typedef int __u16 ;


 struct net_bridge_fdb_entry* FUNC_0 (int *,unsigned char const*,int ) ;

struct net_bridge_fdb_entry *FUNC_1(struct net_bridge *VAR_0,
          const unsigned char *VAR_1,
          __u16 VAR_2)
{
 return FUNC_0(&VAR_0->fdb_hash_tbl, VAR_1, VAR_2);
}
