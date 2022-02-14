
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {char* name; scalar_t__ dir; } ;
struct irq_desc {int dir; } ;


 int VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,struct irqaction*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,char*) ;

void FUNC_4(unsigned int VAR_1, struct irqaction *VAR_2)
{
 char VAR_3 [VAR_0];
 struct irq_desc *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->dir || VAR_2->dir || !VAR_2->name ||
     !FUNC_1(VAR_1, VAR_2))
  return;

 FUNC_3(VAR_3, VAR_0, "%s", VAR_2->name);


 VAR_2->dir = FUNC_2(VAR_3, VAR_4->dir);
}
