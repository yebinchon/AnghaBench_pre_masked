
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_devres {scalar_t__ irq; scalar_t__ dev_id; } ;
struct device {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 struct irq_devres *VAR_3 = VAR_1, *VAR_4 = VAR_2;

 return VAR_3->irq == VAR_4->irq && VAR_3->dev_id == VAR_4->dev_id;
}
