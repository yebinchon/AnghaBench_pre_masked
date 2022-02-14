
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int bus_token; char* name; int flags; } ;
typedef enum irq_domain_bus_token { ____Placeholder_irq_domain_bus_token } irq_domain_bus_token ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_domain*) ;
 int FUNC_1 (struct irq_domain*) ;
 int VAR_2 ;
 char* FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct irq_domain *VAR_3,
     enum irq_domain_bus_token VAR_4)
{
 char *VAR_5;

 if (VAR_3->bus_token == VAR_4)
  return;

 FUNC_4(&VAR_2);

 VAR_3->bus_token = VAR_4;

 VAR_5 = FUNC_2(VAR_0, "%s-%d", VAR_3->name, VAR_4);
 if (!VAR_5) {
  FUNC_5(&VAR_2);
  return;
 }

 FUNC_1(VAR_3);

 if (VAR_3->flags & VAR_1)
  FUNC_3(VAR_3->name);
 else
  VAR_3->flags |= VAR_1;

 VAR_3->name = VAR_5;
 FUNC_0(VAR_3);

 FUNC_5(&VAR_2);
}
