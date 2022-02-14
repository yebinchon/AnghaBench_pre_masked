
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
struct irq_desc {int last_unhandled; int irqs_unhandled; int irq_count; } ;


 struct irq_desc* FUNC_0 (long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_0((long) VAR_0->private);

 FUNC_2(VAR_0, "count %u\n" "unhandled %u\n" "last_unhandled %u ms\n",
     VAR_2->irq_count, VAR_2->irqs_unhandled,
     FUNC_1(VAR_2->last_unhandled));
 return 0;
}
