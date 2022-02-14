
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skl_dev {TYPE_1__* pci; } ;
struct device {int kobj; } ;
struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {struct device dev; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct skl_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pci->dev;

 FUNC_0(&VAR_2->kobj, &VAR_0.attr);
}
