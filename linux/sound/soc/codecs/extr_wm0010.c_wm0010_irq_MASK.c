
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm0010_priv {int state; int irq_lock; int boot_completion; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct wm0010_priv *VAR_4 = VAR_3;

 switch (VAR_4->state) {
 case 129:
 case 130:
 case 128:
  FUNC_1(&VAR_4->irq_lock);
  FUNC_0(&VAR_4->boot_completion);
  FUNC_2(&VAR_4->irq_lock);
  return VAR_0;
 default:
  return VAR_1;
 }

 return VAR_1;
}
