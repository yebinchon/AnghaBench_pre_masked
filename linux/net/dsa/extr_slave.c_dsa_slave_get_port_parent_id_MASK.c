
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_phys_item_id {int id_len; int id; } ;
struct net_device {int dummy; } ;
struct dsa_switch_tree {int index; } ;
struct dsa_switch {scalar_t__ devlink; struct dsa_switch_tree* dst; } ;
struct dsa_port {struct dsa_switch* ds; } ;


 int VAR_0 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
     struct netdev_phys_item_id *VAR_2)
{
 struct dsa_port *VAR_3 = FUNC_0(VAR_1);
 struct dsa_switch *VAR_4 = VAR_3->ds;
 struct dsa_switch_tree *VAR_5 = VAR_4->dst;





 if (VAR_3->ds->devlink)
  return -VAR_0;

 VAR_2->id_len = sizeof(VAR_5->index);
 FUNC_1(&VAR_2->id, &VAR_5->index, VAR_2->id_len);

 return 0;
}
