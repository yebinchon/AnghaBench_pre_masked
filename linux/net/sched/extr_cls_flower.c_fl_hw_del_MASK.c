
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int lock; } ;
struct flow_cls_offload {scalar_t__ cookie; } ;
struct cls_fl_filter {int hw_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tcf_proto *VAR_0, void *VAR_1)
{
 struct flow_cls_offload *VAR_2 = VAR_1;
 struct cls_fl_filter *VAR_3 =
  (struct cls_fl_filter *) VAR_2->cookie;

 FUNC_2(&VAR_0->lock);
 if (!FUNC_1(&VAR_3->hw_list))
  FUNC_0(&VAR_3->hw_list);
 FUNC_3(&VAR_0->lock);
}
