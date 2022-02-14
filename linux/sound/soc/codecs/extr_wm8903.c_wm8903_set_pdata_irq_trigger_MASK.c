
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8903_platform_data {int irq_active_low; } ;
struct irq_data {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int *,char*,int ) ;
 struct irq_data* FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1,
     struct wm8903_platform_data *VAR_2)
{
 struct irq_data *VAR_3 = FUNC_1(VAR_1->irq);
 if (!VAR_3) {
  FUNC_0(&VAR_1->dev, "Invalid IRQ: %d\n",
   VAR_1->irq);
  return -VAR_0;
 }

 switch (FUNC_2(VAR_3)) {
 case 128:
 default:





 case 130:
  VAR_2->irq_active_low = 0;
  break;
 case 129:
  VAR_2->irq_active_low = 1;
  break;
 }

 return 0;
}
