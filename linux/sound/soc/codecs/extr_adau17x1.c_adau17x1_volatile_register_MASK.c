
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;




bool FUNC_0(struct device *VAR_0, unsigned int VAR_1)
{

 if (VAR_1 < 0x4000)
  return 1;

 switch (VAR_1) {

 case 128:
 case 128 + 1:
 case 128 + 2:
 case 128 + 3:
 case 128 + 4:
 case 128 + 5:
  return 1;
 default:
  break;
 }

 return 0;
}
