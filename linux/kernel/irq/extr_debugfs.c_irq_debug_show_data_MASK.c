
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct irq_data {struct irq_data* parent_data; TYPE_2__* domain; int hwirq; } ;
struct TYPE_4__ {char* name; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* debug_show ) (struct seq_file*,int *,struct irq_data*,int) ;} ;


 int FUNC_0 (struct seq_file*,struct irq_data*,int) ;
 int FUNC_1 (struct seq_file*,char*,int,char*,...) ;
 int FUNC_2 (struct seq_file*,int *,struct irq_data*,int) ;

__attribute__((used)) static void
FUNC_3(struct seq_file *VAR_0, struct irq_data *VAR_1, int VAR_2)
{
 FUNC_1(VAR_0, "%*sdomain:  %s\n", VAR_2, "",
     VAR_1->domain ? VAR_1->domain->name : "");
 FUNC_1(VAR_0, "%*shwirq:   0x%lx\n", VAR_2 + 1, "", VAR_1->hwirq);
 FUNC_0(VAR_0, VAR_1, VAR_2 + 1);
 if (VAR_1->domain && VAR_1->domain->ops && VAR_1->domain->ops->debug_show)
  VAR_1->domain->ops->debug_show(VAR_0, ((void*)0), VAR_1, VAR_2 + 1);






}
