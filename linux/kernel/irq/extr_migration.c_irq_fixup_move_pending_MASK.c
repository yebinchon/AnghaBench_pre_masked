
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int pending_mask; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct irq_data* FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 scalar_t__ VAR_1 ;

bool FUNC_4(struct irq_desc *VAR_2, bool VAR_3)
{
 struct irq_data *VAR_4 = FUNC_1(VAR_2);

 if (!FUNC_3(VAR_4))
  return 0;





 if (FUNC_0(VAR_2->pending_mask, VAR_0) >= VAR_1) {
  FUNC_2(VAR_4);
  return 0;
 }
 if (VAR_3)
  FUNC_2(VAR_4);
 return 1;
}
