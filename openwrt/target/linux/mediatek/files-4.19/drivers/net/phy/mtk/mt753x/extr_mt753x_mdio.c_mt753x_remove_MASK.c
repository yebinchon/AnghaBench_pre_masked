
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gsw_mt753x {scalar_t__ irq; scalar_t__ reset_pin; int irq_worker; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct gsw_mt753x*) ;
 int FUNC_3 (struct gsw_mt753x*) ;
 struct gsw_mt753x* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct gsw_mt753x *VAR_1 = FUNC_4(VAR_0);

 if (VAR_1->irq >= 0)
  FUNC_0(&VAR_1->irq_worker);

 if (VAR_1->reset_pin >= 0)
  FUNC_1(&VAR_0->dev, VAR_1->reset_pin);





 FUNC_2(VAR_1);

 FUNC_5(VAR_0, ((void*)0));

 return 0;
}
