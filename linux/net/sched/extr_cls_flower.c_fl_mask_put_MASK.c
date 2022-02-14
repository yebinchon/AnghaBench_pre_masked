
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_mask {int rwork; int list; int ht_node; int refcnt; } ;
struct cls_fl_head {int masks_lock; int ht; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static bool FUNC_6(struct cls_fl_head *VAR_2, struct fl_flow_mask *VAR_3)
{
 if (!FUNC_1(&VAR_3->refcnt))
  return 0;

 FUNC_2(&VAR_2->ht, &VAR_3->ht_node, VAR_1);

 FUNC_3(&VAR_2->masks_lock);
 FUNC_0(&VAR_3->list);
 FUNC_4(&VAR_2->masks_lock);

 FUNC_5(&VAR_3->rwork, VAR_0);

 return 1;
}
