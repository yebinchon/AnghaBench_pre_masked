
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int dn; int pl; struct dsa_switch* ds; } ;
struct TYPE_2__ {int adjust_link; } ;


 int FUNC_0 (struct dsa_port*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct dsa_port *VAR_0)
{
 struct dsa_switch *VAR_1 = VAR_0->ds;

 if (!VAR_1->ops->adjust_link) {
  FUNC_5();
  FUNC_4(VAR_0->pl);
  FUNC_6();
  FUNC_3(VAR_0->pl);
  return;
 }

 if (FUNC_2(VAR_0->dn))
  FUNC_1(VAR_0->dn);
 else
  FUNC_0(VAR_0, 0);
}
