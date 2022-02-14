
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {scalar_t__ widgets; } ;


 int FUNC_0 (struct hdac_device*) ;
 int FUNC_1 (struct hdac_device*) ;

int FUNC_2(struct hdac_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->widgets)
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0) {
  FUNC_1(VAR_0);
  return VAR_1;
 }

 return 0;
}
