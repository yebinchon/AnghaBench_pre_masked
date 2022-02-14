
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct irq_bit_descr {unsigned int mask; int name; } ;


 int FUNC_0 (struct seq_file*,char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, int VAR_1, unsigned int VAR_2,
    const struct irq_bit_descr *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_3++) {
  if (VAR_2 & VAR_3->mask)
   FUNC_0(VAR_0, "%*s%s\n", VAR_1 + 12, "", VAR_3->name);
 }
}
