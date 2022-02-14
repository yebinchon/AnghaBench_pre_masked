
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int class; int * type; } ;
struct hci_dev {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct hci_dev *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;

 VAR_4->type = &VAR_2;
 VAR_4->class = VAR_1;

 FUNC_0(VAR_0);
 FUNC_1(VAR_4);
}
