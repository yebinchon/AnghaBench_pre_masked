
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_bridge_port {scalar_t__ state; TYPE_1__* dev; } ;
struct net_bridge_fdb_entry {int is_local; int added_by_external_learn; unsigned long updated; int added_by_user; struct net_bridge_port* dst; int is_sticky; } ;
struct net_bridge {int hash_lock; int fdb_hash_tbl; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge*,char*,int ,unsigned char const*,int ) ;
 struct net_bridge_fdb_entry* FUNC_1 (struct net_bridge*,struct net_bridge_port*,unsigned char const*,int ,int ,int ) ;
 struct net_bridge_fdb_entry* FUNC_2 (int *,unsigned char const*,int ) ;
 int FUNC_3 (struct net_bridge*,struct net_bridge_fdb_entry*,int ,int) ;
 scalar_t__ FUNC_4 (struct net_bridge*) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_5 (struct net_bridge_fdb_entry*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_bridge*,struct net_bridge_port*,unsigned char const*,int ,int) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct net_bridge *VAR_4, struct net_bridge_port *VAR_5,
     const unsigned char *VAR_6, u16 VAR_7, bool VAR_8)
{
 struct net_bridge_fdb_entry *VAR_9;
 bool VAR_10 = 0;


 if (FUNC_4(VAR_4) == 0)
  return;


 if (!(VAR_5->state == VAR_1 ||
       VAR_5->state == VAR_0))
  return;

 VAR_9 = FUNC_2(&VAR_4->fdb_hash_tbl, VAR_6, VAR_7);
 if (FUNC_5(VAR_9)) {

  if (FUNC_10(VAR_9->is_local)) {
   if (FUNC_6())
    FUNC_0(VAR_4, "received packet on %s with own address as source address (addr:%pM, vlan:%u)\n",
     VAR_5->dev->name, VAR_6, VAR_7);
  } else {
   unsigned long VAR_11 = VAR_3;


   if (FUNC_10(VAR_5 != VAR_9->dst && !VAR_9->is_sticky)) {
    VAR_9->dst = VAR_5;
    VAR_10 = 1;

    if (FUNC_10(VAR_9->added_by_external_learn))
     VAR_9->added_by_external_learn = 0;
   }
   if (VAR_11 != VAR_9->updated)
    VAR_9->updated = VAR_11;
   if (FUNC_10(VAR_8))
    VAR_9->added_by_user = 1;
   if (FUNC_10(VAR_10)) {
    FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    FUNC_3(VAR_4, VAR_9, VAR_2, 1);
   }
  }
 } else {
  FUNC_7(&VAR_4->hash_lock);
  VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, 0, 0);
  if (VAR_9) {
   if (FUNC_10(VAR_8))
    VAR_9->added_by_user = 1;
   FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8);
   FUNC_3(VAR_4, VAR_9, VAR_2, 1);
  }



  FUNC_8(&VAR_4->hash_lock);
 }
}
