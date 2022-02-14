
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct cls_fl_head {int ht; int handle_idr; int hw_filters; int masks; int masks_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cls_fl_head* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct cls_fl_head*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct tcf_proto *VAR_3)
{
 struct cls_fl_head *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_6(&VAR_4->masks_lock);
 FUNC_1(&VAR_4->masks);
 FUNC_0(&VAR_4->hw_filters);
 FUNC_4(VAR_3->root, VAR_4);
 FUNC_2(&VAR_4->handle_idr);

 return FUNC_5(&VAR_4->ht, &VAR_2);
}
