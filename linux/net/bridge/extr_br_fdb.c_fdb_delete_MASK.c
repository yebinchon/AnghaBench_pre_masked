
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
struct net_bridge_fdb_entry {int rcu; int rhnode; int fdb_node; TYPE_2__ key; scalar_t__ is_static; } ;
struct net_bridge {int fdb_hash_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_bridge*,int ) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_fdb_entry*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct net_bridge*,struct net_bridge_fdb_entry*) ;

__attribute__((used)) static void FUNC_6(struct net_bridge *VAR_3, struct net_bridge_fdb_entry *VAR_4,
         bool VAR_5)
{
 FUNC_5(VAR_3, VAR_4);

 if (VAR_4->is_static)
  FUNC_1(VAR_3, VAR_4->key.addr.addr);

 FUNC_3(&VAR_4->fdb_node);
 FUNC_4(&VAR_3->fdb_hash_tbl, &VAR_4->rhnode,
          VAR_1);
 FUNC_2(VAR_3, VAR_4, VAR_0, VAR_5);
 FUNC_0(&VAR_4->rcu, VAR_2);
}
