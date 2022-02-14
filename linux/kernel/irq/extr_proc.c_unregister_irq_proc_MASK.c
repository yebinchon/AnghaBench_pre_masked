
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dir; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,unsigned int) ;

void FUNC_2(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 char VAR_4 [VAR_0];

 if (!VAR_1 || !VAR_3->dir)
  return;
 FUNC_0("spurious", VAR_3->dir);

 FUNC_1(VAR_4, "%u", VAR_2);
 FUNC_0(VAR_4, VAR_1);
}
