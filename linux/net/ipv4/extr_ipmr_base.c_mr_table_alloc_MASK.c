
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct mr_table_ops {int rht_params; } ;
struct mr_table {int mroute_reg_vif_num; int ipmr_expire_timer; int mfc_unres_queue; int mfc_cache_list; struct mr_table_ops ops; int mfc_hash; int net; int id; } ;


 int VAR_0 ;
 struct mr_table* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mr_table*) ;
 struct mr_table* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,void (*) (struct timer_list*),int ) ;
 int FUNC_6 (int *,struct net*) ;

struct mr_table *
FUNC_7(struct net *VAR_2, u32 VAR_3,
        struct mr_table_ops *VAR_4,
        void (*VAR_5)(struct timer_list *VAR_6),
        void (*VAR_7)(struct mr_table *VAR_8,
     struct net *VAR_9))
{
 struct mr_table *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);
 VAR_10->id = VAR_3;
 FUNC_6(&VAR_10->net, VAR_2);

 VAR_10->ops = *VAR_4;
 VAR_11 = FUNC_4(&VAR_10->mfc_hash, VAR_10->ops.rht_params);
 if (VAR_11) {
  FUNC_2(VAR_10);
  return FUNC_0(VAR_11);
 }
 FUNC_1(&VAR_10->mfc_cache_list);
 FUNC_1(&VAR_10->mfc_unres_queue);

 FUNC_5(&VAR_10->ipmr_expire_timer, VAR_5, 0);

 VAR_10->mroute_reg_vif_num = -1;
 VAR_7(VAR_10, VAR_2);
 return VAR_10;
}
