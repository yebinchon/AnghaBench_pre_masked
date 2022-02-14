
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int lock; } ;


 int FUNC_0 (unsigned int,struct irq_desc*,int ,int *,int *) ;
 int FUNC_1 (struct irq_desc*) ;
 struct irq_desc* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_0)
{
 struct irq_desc *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;

 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_1), ((void*)0), ((void*)0));
 FUNC_4(&VAR_1->lock, VAR_2);
}
