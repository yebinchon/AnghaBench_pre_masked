
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dev; int widget_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hdac_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hdac_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1 < 0)
  return VAR_1;
 FUNC_3(&VAR_0->widget_lock);
 VAR_1 = FUNC_2(VAR_0);
 FUNC_4(&VAR_0->widget_lock);
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->dev);
  return VAR_1;
 }

 return 0;
}
