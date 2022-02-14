
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct atm_dev {struct device class_dev; } ;


 int FUNC_0 (struct device*) ;

void FUNC_1(struct atm_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->class_dev;

 FUNC_0(VAR_1);
}
