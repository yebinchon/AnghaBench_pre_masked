
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_value {int mask; int value; } ;
struct devlink_dpipe_entry {unsigned int action_values_count; unsigned int match_values_count; struct devlink_dpipe_value* match_values; struct devlink_dpipe_value* action_values; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct devlink_dpipe_entry *VAR_0)

{
 unsigned int VAR_1, VAR_2;
 struct devlink_dpipe_value *VAR_3;

 VAR_3 = VAR_0->action_values;
 VAR_1 = VAR_0->action_values_count;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_3[VAR_2].value);
  FUNC_0(VAR_3[VAR_2].mask);
 }

 VAR_3 = VAR_0->match_values;
 VAR_1 = VAR_0->match_values_count;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_3[VAR_2].value);
  FUNC_0(VAR_3[VAR_2].mask);
 }
}
