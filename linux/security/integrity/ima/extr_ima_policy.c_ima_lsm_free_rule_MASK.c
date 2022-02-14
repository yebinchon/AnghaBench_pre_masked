
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ima_rule_entry {TYPE_1__* lsm; } ;
struct TYPE_2__ {struct ima_rule_entry* args_p; struct ima_rule_entry* rule; } ;


 int VAR_0 ;
 int FUNC_0 (struct ima_rule_entry*) ;

__attribute__((used)) static void FUNC_1(struct ima_rule_entry *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->lsm[VAR_2].rule);
  FUNC_0(VAR_1->lsm[VAR_2].args_p);
 }
 FUNC_0(VAR_1);
}
