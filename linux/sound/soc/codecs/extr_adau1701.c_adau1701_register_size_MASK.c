
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
 int FUNC_0 (struct device*,char*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct device *VAR_0,
  unsigned int VAR_1)
{
 switch (VAR_1) {
 case 131:
 case 130:
  return 3;
 case 133:
 case 128:
 case 135:
 case 132:
 case 134:
  return 2;
 case 129:
  return 1;
 }

 FUNC_0(VAR_0, "Unsupported register address: %d\n", VAR_1);
 return 0;
}
