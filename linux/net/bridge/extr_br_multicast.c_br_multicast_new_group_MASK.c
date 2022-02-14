
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct br_ip {int dummy; } ;
struct net_bridge_mdb_entry {int mdb_node; int rhnode; int timer; struct br_ip addr; struct net_bridge* br; } ;
struct TYPE_2__ {int nelems; } ;
struct net_bridge {scalar_t__ hash_max; int mdb_list; TYPE_1__ mdb_hash_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_bridge_mdb_entry* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 struct net_bridge_mdb_entry* FUNC_2 (struct net_bridge*,struct br_ip*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct net_bridge*,int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct net_bridge_mdb_entry*) ;
 struct net_bridge_mdb_entry* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

struct net_bridge_mdb_entry *FUNC_10(struct net_bridge *VAR_6,
          struct br_ip *VAR_7)
{
 struct net_bridge_mdb_entry *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (FUNC_1(&VAR_6->mdb_hash_tbl.nelems) >= VAR_6->hash_max) {
  FUNC_3(VAR_6, VAR_0, 0);
  return FUNC_0(-VAR_1);
 }

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_3);
 if (FUNC_9(!VAR_8))
  return FUNC_0(-VAR_2);

 VAR_8->br = VAR_6;
 VAR_8->addr = *VAR_7;
 FUNC_8(&VAR_8->timer, VAR_5, 0);
 VAR_9 = FUNC_7(&VAR_6->mdb_hash_tbl, &VAR_8->rhnode,
         VAR_4);
 if (VAR_9) {
  FUNC_5(VAR_8);
  VAR_8 = FUNC_0(VAR_9);
 } else {
  FUNC_4(&VAR_8->mdb_node, &VAR_6->mdb_list);
 }

 return VAR_8;
}
