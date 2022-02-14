
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_bridge_mdb_entry {int mdb_node; int rhnode; scalar_t__ ports; int timer; struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; int mdb_hash_tbl; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge_mdb_entry*,int) ;
 struct net_bridge_mdb_entry* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_bridge_mdb_entry*,int ) ;
 struct net_bridge_mdb_entry* VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_4)
{
 struct net_bridge_mdb_entry *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct net_bridge *VAR_6 = VAR_5->br;

 FUNC_6(&VAR_6->multicast_lock);
 if (!FUNC_4(VAR_6->dev) || FUNC_8(&VAR_5->timer))
  goto out;

 FUNC_0(VAR_5, 1);

 if (VAR_5->ports)
  goto out;

 FUNC_5(&VAR_6->mdb_hash_tbl, &VAR_5->rhnode,
          VAR_0);
 FUNC_2(&VAR_5->mdb_node);

 FUNC_3(VAR_5, VAR_2);

out:
 FUNC_7(&VAR_6->multicast_lock);
}
