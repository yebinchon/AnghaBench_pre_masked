
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_chip_generic {unsigned int irq_base; int list; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct irq_chip_generic *VAR_2, u32 VAR_3,
        unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_2->irq_base;

 FUNC_5(&VAR_0);
 FUNC_4(&VAR_2->list);
 FUNC_6(&VAR_0);

 for (; VAR_3; VAR_3 >>= 1, VAR_6++) {
  if (!(VAR_3 & 0x01))
   continue;


  FUNC_3(VAR_6, ((void*)0));
  FUNC_1(VAR_6, &VAR_1);
  FUNC_2(VAR_6, ((void*)0));
  FUNC_0(VAR_6, VAR_4, VAR_5);
 }
}
