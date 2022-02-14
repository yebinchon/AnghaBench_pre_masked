
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_mask {int dummy; } ;
struct sw_flow {int id; } ;
struct flow_table {int dummy; } ;


 int FUNC_0 (struct flow_table*,struct sw_flow*) ;
 int FUNC_1 (struct flow_table*,struct sw_flow*,struct sw_flow_mask const*) ;
 int FUNC_2 (struct flow_table*,struct sw_flow*) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(struct flow_table *VAR_0, struct sw_flow *VAR_1,
   const struct sw_flow_mask *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 FUNC_0(VAR_0, VAR_1);
 if (FUNC_3(&VAR_1->id))
  FUNC_2(VAR_0, VAR_1);

 return 0;
}
