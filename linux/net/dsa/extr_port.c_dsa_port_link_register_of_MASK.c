
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int dev; TYPE_1__* ops; } ;
struct dsa_port {int dn; struct dsa_switch* ds; } ;
struct TYPE_2__ {int adjust_link; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dsa_port*) ;
 int FUNC_2 (struct dsa_port*) ;
 int FUNC_3 (struct dsa_port*,int) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct dsa_port *VAR_0)
{
 struct dsa_switch *VAR_1 = VAR_0->ds;

 if (!VAR_1->ops->adjust_link)
  return FUNC_2(VAR_0);

 FUNC_0(VAR_1->dev,
   "Using legacy PHYLIB callbacks. Please migrate to PHYLINK!\n");

 if (FUNC_4(VAR_0->dn))
  return FUNC_1(VAR_0);
 else
  return FUNC_3(VAR_0, 1);
}
