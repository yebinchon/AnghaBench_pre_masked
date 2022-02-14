
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int cache_coef; } ;
struct device {int dummy; } ;
 struct hdac_device* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct device *VAR_0, unsigned int VAR_1)
{
 struct hdac_device *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = FUNC_1(VAR_1);

 switch (VAR_3) {
 case 129:
  return !VAR_2->cache_coef;
 case 141:
 case 128:
 case 130:
 case 131:
 case 134:
 case 132:
 case 135:
 case 136:
 case 133:
 case 137:
 case 138:
 case 139:
 case 140:
  return 1;
 }

 return 0;
}
