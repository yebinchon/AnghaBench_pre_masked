
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
__attribute__((used)) static bool FUNC_1(struct device *VAR_5,
         unsigned int VAR_6)
{
 switch (VAR_6) {
 case 137:
 case 131:
 case 140:
 case 132:
 case 128:
 case 133:
 case 135:
 case 129:
 case 138:
 case 134:
 case 136:
 case 130:
 case 139:
  return 1;
 default:
  break;
 }

 if (FUNC_0(VAR_6, VAR_0) ||
     FUNC_0(VAR_6, VAR_2) ||
     FUNC_0(VAR_6, VAR_3) ||
     FUNC_0(VAR_6, VAR_1) ||
     FUNC_0(VAR_6, VAR_4))
  return 1;

 return 0;
}
