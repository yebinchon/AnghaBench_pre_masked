
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;



 unsigned int FUNC_0 (struct device*,unsigned int) ;
 unsigned int FUNC_1 (struct device*,unsigned int) ;

unsigned int FUNC_2(struct device *VAR_0,
       unsigned int VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_0, VAR_1);
 default:
  return FUNC_1(VAR_0, VAR_1);
 }
}
