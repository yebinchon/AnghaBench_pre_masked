
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_rule_entry {scalar_t__ action; scalar_t__ func; int list; } ;
typedef enum policy_rule_list { ____Placeholder_policy_rule_list } policy_rule_list ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 struct ima_rule_entry* FUNC_1 (struct ima_rule_entry*,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct ima_rule_entry *VAR_9, int VAR_10,
        enum policy_rule_list VAR_11)
{
 int VAR_12 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  struct ima_rule_entry *VAR_13;

  if (VAR_11 & VAR_4)
   FUNC_2(&VAR_9[VAR_12].list, &VAR_6);

  if (VAR_11 & VAR_3) {
   VAR_13 = FUNC_1(&VAR_9[VAR_12], sizeof(*VAR_13),
     VAR_1);
   if (!VAR_13)
    continue;

   FUNC_2(&VAR_13->list, &VAR_7);
  }
  if (VAR_9[VAR_12].action == VAR_0) {
   VAR_8 |= FUNC_0(VAR_9[VAR_12].func);
   if (VAR_9[VAR_12].func == VAR_5)
    VAR_8 |= VAR_2;
  }
 }
}
