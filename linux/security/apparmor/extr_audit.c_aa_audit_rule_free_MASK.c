
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_audit_rule {int label; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aa_audit_rule*) ;

void FUNC_3(void *VAR_0)
{
 struct aa_audit_rule *VAR_1 = VAR_0;

 if (VAR_1) {
  if (!FUNC_0(VAR_1->label))
   FUNC_1(VAR_1->label);
  FUNC_2(VAR_1);
 }
}
