
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_mask {int ref_count; int list; int range; int key; } ;
struct sw_flow {struct sw_flow_mask* mask; } ;
struct flow_table {int mask_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct sw_flow_mask* FUNC_1 (struct flow_table*,struct sw_flow_mask const*) ;
 int FUNC_2 (int *,int *) ;
 struct sw_flow_mask* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct flow_table *VAR_1, struct sw_flow *VAR_2,
       const struct sw_flow_mask *VAR_3)
{
 struct sw_flow_mask *VAR_4;
 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_4) {

  VAR_4 = FUNC_3();
  if (!VAR_4)
   return -VAR_0;
  VAR_4->key = VAR_3->key;
  VAR_4->range = VAR_3->range;
  FUNC_2(&VAR_4->list, &VAR_1->mask_list);
 } else {
  FUNC_0(!VAR_4->ref_count);
  VAR_4->ref_count++;
 }

 VAR_2->mask = VAR_4;
 return 0;
}
