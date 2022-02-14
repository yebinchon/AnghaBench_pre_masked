
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_mdb_entry {int dummy; } ;
struct net_bridge {int mdb_hash_tbl; } ;
struct br_ip {int dummy; } ;


 int VAR_0 ;
 struct net_bridge_mdb_entry* FUNC_0 (int *,struct br_ip*,int ) ;

__attribute__((used)) static struct net_bridge_mdb_entry *FUNC_1(struct net_bridge *VAR_1,
            struct br_ip *VAR_2)
{
 return FUNC_0(&VAR_1->mdb_hash_tbl, VAR_2, VAR_0);
}
