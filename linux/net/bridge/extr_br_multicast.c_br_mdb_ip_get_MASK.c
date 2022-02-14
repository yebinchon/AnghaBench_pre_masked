
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_mdb_entry {int dummy; } ;
struct net_bridge {int mdb_hash_tbl; int multicast_lock; } ;
struct br_ip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct net_bridge_mdb_entry* FUNC_3 (int *,struct br_ip*,int ) ;

struct net_bridge_mdb_entry *FUNC_4(struct net_bridge *VAR_1,
        struct br_ip *VAR_2)
{
 struct net_bridge_mdb_entry *VAR_3;

 FUNC_0(&VAR_1->multicast_lock);

 FUNC_1();
 VAR_3 = FUNC_3(&VAR_1->mdb_hash_tbl, VAR_2, VAR_0);
 FUNC_2();

 return VAR_3;
}
