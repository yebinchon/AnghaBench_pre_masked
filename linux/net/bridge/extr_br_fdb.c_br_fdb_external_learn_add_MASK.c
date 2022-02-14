
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_bridge_port {int dummy; } ;
struct net_bridge_fdb_entry {int added_by_user; int added_by_external_learn; void* used; struct net_bridge_port* dst; void* updated; } ;
struct net_bridge {int hash_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_bridge_fdb_entry* FUNC_0 (struct net_bridge*,unsigned char const*,int ) ;
 struct net_bridge_fdb_entry* FUNC_1 (struct net_bridge*,struct net_bridge_port*,unsigned char const*,int ,int ,int ) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_fdb_entry*,int ,int) ;
 void* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_bridge*,struct net_bridge_port*,unsigned char const*,int ) ;

int FUNC_6(struct net_bridge *VAR_3, struct net_bridge_port *VAR_4,
         const unsigned char *VAR_5, u16 VAR_6,
         bool VAR_7)
{
 struct net_bridge_fdb_entry *VAR_8;
 bool VAR_9 = 0;
 int VAR_10 = 0;

 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_3(&VAR_3->hash_lock);

 VAR_8 = FUNC_0(VAR_3, VAR_5, VAR_6);
 if (!VAR_8) {
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, 0, 0);
  if (!VAR_8) {
   VAR_10 = -VAR_0;
   goto err_unlock;
  }
  if (VAR_7)
   VAR_8->added_by_user = 1;
  VAR_8->added_by_external_learn = 1;
  FUNC_2(VAR_3, VAR_8, VAR_1, VAR_7);
 } else {
  VAR_8->updated = VAR_2;

  if (VAR_8->dst != VAR_4) {
   VAR_8->dst = VAR_4;
   VAR_9 = 1;
  }

  if (VAR_8->added_by_external_learn) {

   VAR_8->used = VAR_2;
  } else if (!VAR_8->added_by_user) {

   VAR_8->added_by_external_learn = 1;
   VAR_9 = 1;
  }

  if (VAR_7)
   VAR_8->added_by_user = 1;

  if (VAR_9)
   FUNC_2(VAR_3, VAR_8, VAR_1, VAR_7);
 }

err_unlock:
 FUNC_4(&VAR_3->hash_lock);

 return VAR_10;
}
