
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_bridge_port {int dummy; } ;
struct net_bridge_fdb_entry {struct net_bridge_port const* dst; int added_by_user; scalar_t__ is_local; } ;
struct net_bridge {int hash_lock; } ;


 struct net_bridge_fdb_entry* FUNC_0 (struct net_bridge*,unsigned char const*,int ) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port const*,struct net_bridge_fdb_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_bridge *VAR_0,
         const struct net_bridge_port *VAR_1,
         const unsigned char *VAR_2, u16 VAR_3)
{
 struct net_bridge_fdb_entry *VAR_4;

 FUNC_2(&VAR_0->hash_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_4 && VAR_4->is_local && !VAR_4->added_by_user && VAR_4->dst == VAR_1)
  FUNC_1(VAR_0, VAR_1, VAR_4);
 FUNC_3(&VAR_0->hash_lock);
}
