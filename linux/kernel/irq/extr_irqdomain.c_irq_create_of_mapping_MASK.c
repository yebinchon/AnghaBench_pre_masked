
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; int args; int np; } ;
struct irq_fwspec {int dummy; } ;


 unsigned int FUNC_0 (struct irq_fwspec*) ;
 int FUNC_1 (int ,int ,int ,struct irq_fwspec*) ;

unsigned int FUNC_2(struct of_phandle_args *VAR_0)
{
 struct irq_fwspec VAR_1;

 FUNC_1(VAR_0->np, VAR_0->args,
      VAR_0->args_count, &VAR_1);

 return FUNC_0(&VAR_1);
}
