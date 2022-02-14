
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int is_similar_or_better; int cmp; } ;
struct TYPE_3__ {int primary_set; int update_mac; int disable; int enable; } ;
struct batadv_algo_ops {int list; int name; TYPE_2__ neigh; TYPE_1__ iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct batadv_algo_ops* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct batadv_algo_ops *VAR_3)
{
 struct batadv_algo_ops *VAR_4;

 VAR_4 = FUNC_1(VAR_3->name);
 if (VAR_4) {
  FUNC_3("Trying to register already registered routing algorithm: %s\n",
   VAR_3->name);
  return -VAR_0;
 }


 if (!VAR_3->iface.enable ||
     !VAR_3->iface.disable ||
     !VAR_3->iface.update_mac ||
     !VAR_3->iface.primary_set ||
     !VAR_3->neigh.cmp ||
     !VAR_3->neigh.is_similar_or_better) {
  FUNC_3("Routing algo '%s' does not implement required ops\n",
   VAR_3->name);
  return -VAR_1;
 }

 FUNC_0(&VAR_3->list);
 FUNC_2(&VAR_3->list, &VAR_2);

 return 0;
}
