
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int bus; int dev; int widget_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct hdac_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct hdac_device*) ;

void FUNC_6(struct hdac_device *VAR_0)
{
 if (FUNC_1(&VAR_0->dev)) {
  FUNC_3(&VAR_0->widget_lock);
  FUNC_2(VAR_0);
  FUNC_4(&VAR_0->widget_lock);
  FUNC_0(&VAR_0->dev);
  FUNC_5(VAR_0->bus, VAR_0);
 }
}
