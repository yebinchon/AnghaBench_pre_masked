
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_driver {scalar_t__ type; int (* match ) (struct hdac_device*,struct hdac_driver*) ;} ;
struct hdac_device {scalar_t__ type; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct hdac_device* FUNC_0 (struct device*) ;
 struct hdac_driver* FUNC_1 (struct device_driver*) ;
 int FUNC_2 (struct hdac_device*,struct hdac_driver*) ;
 int FUNC_3 (struct hdac_device*,struct hdac_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct hdac_device *VAR_2 = FUNC_0(VAR_0);
 struct hdac_driver *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->type != VAR_3->type)
  return 0;





 if (VAR_3->match)
  return VAR_3->match(VAR_2, VAR_3);
 else
  return FUNC_2(VAR_2, VAR_3);
 return 1;
}
