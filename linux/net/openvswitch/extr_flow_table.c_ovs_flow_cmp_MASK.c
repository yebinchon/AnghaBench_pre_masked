
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_match {int range; int key; } ;
struct sw_flow {int id; } ;


 int FUNC_0 (struct sw_flow const*,int ,int *) ;
 int FUNC_1 (struct sw_flow const*,struct sw_flow_match const*) ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(const struct sw_flow *VAR_0, const struct sw_flow_match *VAR_1)
{
 if (FUNC_2(&VAR_0->id))
  return FUNC_0(VAR_0, VAR_1->key, &VAR_1->range);

 return FUNC_1(VAR_0, VAR_1);
}
