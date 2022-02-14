
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int sk; } ;
struct smc_init_info {void* vlan_id; } ;
struct list_head {struct list_head* next; } ;
struct TYPE_2__ {struct list_head lower; } ;
struct net_device {int lower_level; TYPE_1__ adj_list; } ;
struct dst_entry {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct list_head*) ;
 scalar_t__ FUNC_3 (struct net_device*,struct list_head**) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct dst_entry* FUNC_6 (int ) ;
 void* FUNC_7 (struct net_device*) ;

int FUNC_8(struct socket *VAR_2, struct smc_init_info *VAR_3)
{
 struct dst_entry *VAR_4 = FUNC_6(VAR_2->sk);
 struct net_device *VAR_5;
 int VAR_6, VAR_7, VAR_8 = 0;

 VAR_3->vlan_id = 0;
 if (!VAR_4) {
  VAR_8 = -VAR_1;
  goto out;
 }
 if (!VAR_4->dev) {
  VAR_8 = -VAR_0;
  goto out_rel;
 }

 VAR_5 = VAR_4->dev;
 if (FUNC_1(VAR_5)) {
  VAR_3->vlan_id = FUNC_7(VAR_5);
  goto out_rel;
 }

 FUNC_4();
 VAR_7 = VAR_5->lower_level;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct list_head *VAR_9 = &VAR_5->adj_list.lower;

  if (FUNC_2(VAR_9))
   break;
  VAR_9 = VAR_9->next;
  VAR_5 = (struct net_device *)FUNC_3(VAR_5, &VAR_9);
  if (FUNC_1(VAR_5)) {
   VAR_3->vlan_id = FUNC_7(VAR_5);
   break;
  }
 }
 FUNC_5();

out_rel:
 FUNC_0(VAR_4);
out:
 return VAR_8;
}
