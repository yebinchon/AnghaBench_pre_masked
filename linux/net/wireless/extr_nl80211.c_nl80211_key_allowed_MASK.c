
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; int current_bss; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static int FUNC_1(struct wireless_dev *VAR_2)
{
 FUNC_0(VAR_2);

 switch (VAR_2->iftype) {
 case 140:
 case 139:
 case 132:
 case 138:
  break;
 case 141:
 case 131:
 case 134:
  if (!VAR_2->current_bss)
   return -VAR_1;
  break;
 case 130:
 case 135:
 case 137:
 case 136:
 case 133:
 case 129:
 case 128:
  return -VAR_0;
 }

 return 0;
}
