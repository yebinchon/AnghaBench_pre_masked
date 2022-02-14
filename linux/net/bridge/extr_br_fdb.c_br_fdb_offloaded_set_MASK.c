
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_bridge_port {int dummy; } ;
struct net_bridge_fdb_entry {int offloaded; } ;
struct net_bridge {int hash_lock; } ;


 struct net_bridge_fdb_entry* FUNC_0 (struct net_bridge*,unsigned char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net_bridge *VAR_0, struct net_bridge_port *VAR_1,
     const unsigned char *VAR_2, u16 VAR_3, bool VAR_4)
{
 struct net_bridge_fdb_entry *VAR_5;

 FUNC_1(&VAR_0->hash_lock);

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_5)
  VAR_5->offloaded = VAR_4;

 FUNC_2(&VAR_0->hash_lock);
}
