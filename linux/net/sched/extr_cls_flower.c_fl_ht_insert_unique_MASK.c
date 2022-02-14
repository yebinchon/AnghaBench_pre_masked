
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_mask {int filter_ht_params; int ht; } ;
struct cls_fl_filter {int ht_node; struct fl_flow_mask* mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct cls_fl_filter *VAR_1,
          struct cls_fl_filter *VAR_2,
          bool *VAR_3)
{
 struct fl_flow_mask *VAR_4 = VAR_1->mask;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->ht,
         &VAR_1->ht_node,
         VAR_4->filter_ht_params);
 if (VAR_5) {
  *VAR_3 = 0;



  return VAR_2 && VAR_5 == -VAR_0 ? 0 : VAR_5;
 }

 *VAR_3 = 1;
 return 0;
}
