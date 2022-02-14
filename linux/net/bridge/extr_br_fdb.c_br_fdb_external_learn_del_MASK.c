
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_bridge_port {int dummy; } ;
struct net_bridge_fdb_entry {scalar_t__ added_by_external_learn; } ;
struct net_bridge {int hash_lock; } ;


 int VAR_0 ;
 struct net_bridge_fdb_entry* FUNC_0 (struct net_bridge*,unsigned char const*,int ) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_fdb_entry*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct net_bridge *VAR_1, struct net_bridge_port *VAR_2,
         const unsigned char *VAR_3, u16 VAR_4,
         bool VAR_5)
{
 struct net_bridge_fdb_entry *VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_1->hash_lock);

 VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_4);
 if (VAR_6 && VAR_6->added_by_external_learn)
  FUNC_1(VAR_1, VAR_6, VAR_5);
 else
  VAR_7 = -VAR_0;

 FUNC_3(&VAR_1->hash_lock);

 return VAR_7;
}
