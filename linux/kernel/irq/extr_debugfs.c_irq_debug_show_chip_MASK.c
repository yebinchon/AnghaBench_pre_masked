
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct irq_data {struct irq_chip* chip; } ;
struct irq_chip {int flags; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,int,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct seq_file *VAR_1, struct irq_data *VAR_2, int VAR_3)
{
 struct irq_chip *VAR_4 = VAR_2->chip;

 if (!VAR_4) {
  FUNC_2(VAR_1, "chip: None\n");
  return;
 }
 FUNC_2(VAR_1, "%*schip:    %s\n", VAR_3, "", VAR_4->name);
 FUNC_2(VAR_1, "%*sflags:   0x%lx\n", VAR_3 + 1, "", VAR_4->flags);
 FUNC_1(VAR_1, VAR_3, VAR_4->flags, VAR_0,
       FUNC_0(VAR_0));
}
