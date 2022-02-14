
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {scalar_t__ global_reserved; scalar_t__ global_available; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct irq_matrix*) ;

void FUNC_2(struct irq_matrix *VAR_0)
{
 if (VAR_0->global_reserved <= VAR_0->global_available &&
     VAR_0->global_reserved + 1 > VAR_0->global_available)
  FUNC_0("Interrupt reservation exceeds available resources\n");

 VAR_0->global_reserved++;
 FUNC_1(VAR_0);
}
