
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_audit_rule {int au_ctxt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct selinux_audit_rule*) ;

void FUNC_2(void *VAR_0)
{
 struct selinux_audit_rule *VAR_1 = VAR_0;

 if (VAR_1) {
  FUNC_0(&VAR_1->au_ctxt);
  FUNC_1(VAR_1);
 }
}
