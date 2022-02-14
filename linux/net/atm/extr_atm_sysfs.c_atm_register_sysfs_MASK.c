
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device* parent; int * class; } ;
struct atm_dev {int number; int type; struct device class_dev; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct atm_dev*) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 int FUNC_2 (struct device*,scalar_t__) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,scalar_t__) ;

int FUNC_6(struct atm_dev *VAR_2, struct device *VAR_3)
{
 struct device *VAR_4 = &VAR_2->class_dev;
 int VAR_5, VAR_6, VAR_7;

 VAR_4->class = &VAR_1;
 VAR_4->parent = VAR_3;
 FUNC_0(VAR_4, VAR_2);

 FUNC_1(VAR_4, "%s%d", VAR_2->type, VAR_2->number);
 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_5 = 0; VAR_0[VAR_5]; VAR_5++) {
  VAR_7 = FUNC_2(VAR_4, VAR_0[VAR_5]);
  if (VAR_7)
   goto err_out;
 }

 return 0;

err_out:
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_5(VAR_4, VAR_0[VAR_6]);
 FUNC_3(VAR_4);
 return VAR_7;
}
