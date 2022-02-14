
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int lock; int irq_data; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*,int ,int*) ;
 int FUNC_1 () ;
 struct irq_data* FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_1, bool VAR_2)
{
 struct irq_data *VAR_3 = FUNC_2(VAR_1);
 bool VAR_4;

 do {
  unsigned long VAR_5;





  while (FUNC_3(&VAR_1->irq_data))
   FUNC_1();


  FUNC_4(&VAR_1->lock, VAR_5);
  VAR_4 = FUNC_3(&VAR_1->irq_data);






  if (!VAR_4 && VAR_2) {




   FUNC_0(VAR_3, VAR_0,
      &VAR_4);
  }
  FUNC_5(&VAR_1->lock, VAR_5);


 } while (VAR_4);
}
