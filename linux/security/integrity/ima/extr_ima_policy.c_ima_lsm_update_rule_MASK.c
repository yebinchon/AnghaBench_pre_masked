
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_rule_entry {int list; } ;


 int VAR_0 ;
 struct ima_rule_entry* FUNC_0 (struct ima_rule_entry*) ;
 int FUNC_1 (struct ima_rule_entry*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct ima_rule_entry *VAR_1)
{
 struct ima_rule_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_1->list, &VAR_2->list);
 FUNC_3();
 FUNC_1(VAR_1);

 return 0;
}
