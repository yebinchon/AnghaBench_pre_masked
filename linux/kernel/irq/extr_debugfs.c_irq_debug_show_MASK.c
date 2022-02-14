
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct irq_desc* private; } ;
struct irq_desc {int lock; int wake_depth; int depth; int istate; int status_use_accessors; int dev_name; int handle_irq; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct seq_file*,int ,int ,int ,int ) ;
 int FUNC_3 (struct seq_file*,struct irq_data*,int ) ;
 int FUNC_4 (struct seq_file*,struct irq_desc*) ;
 struct irq_data* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_3, void *VAR_4)
{
 struct irq_desc *VAR_5 = VAR_3->private;
 struct irq_data *VAR_6;

 FUNC_7(&VAR_5->lock);
 VAR_6 = FUNC_5(VAR_5);
 FUNC_9(VAR_3, "handler:  %ps\n", VAR_5->handle_irq);
 FUNC_9(VAR_3, "device:   %s\n", VAR_5->dev_name);
 FUNC_9(VAR_3, "status:   0x%08x\n", VAR_5->status_use_accessors);
 FUNC_2(VAR_3, 0, VAR_5->status_use_accessors, VAR_2,
       FUNC_0(VAR_2));
 FUNC_9(VAR_3, "istate:   0x%08x\n", VAR_5->istate);
 FUNC_2(VAR_3, 0, VAR_5->istate, VAR_1,
       FUNC_0(VAR_1));
 FUNC_9(VAR_3, "ddepth:   %u\n", VAR_5->depth);
 FUNC_9(VAR_3, "wdepth:   %u\n", VAR_5->wake_depth);
 FUNC_9(VAR_3, "dstate:   0x%08x\n", FUNC_6(VAR_6));
 FUNC_2(VAR_3, 0, FUNC_6(VAR_6), VAR_0,
       FUNC_0(VAR_0));
 FUNC_9(VAR_3, "node:     %d\n", FUNC_1(VAR_6));
 FUNC_4(VAR_3, VAR_5);
 FUNC_3(VAR_3, VAR_6, 0);
 FUNC_8(&VAR_5->lock);
 return 0;
}
