
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {scalar_t__ caps_overwriting; } ;
struct device {int dummy; } ;
 struct hdac_device* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct device *VAR_0, unsigned int VAR_1)
{
 struct hdac_device *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->caps_overwriting)
  return 1;

 switch (VAR_3) {
 case 128:
 case 132:
 case 129:
  return 1;



 case 133:
 case 131:
 case 130:
  return 1;
 }

 return FUNC_2(VAR_0, VAR_1);
}
