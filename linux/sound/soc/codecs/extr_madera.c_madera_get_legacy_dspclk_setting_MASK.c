
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int rev; int type; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


__attribute__((used)) static int FUNC_0(struct madera *VAR_5,
         unsigned int VAR_6)
{
 switch (VAR_6) {
 case 0:
  return 0;
 case 45158400:
 case 49152000:
  switch (VAR_5->type) {
  case 129:
  case 128:
   if (VAR_5->rev < 3)
    return -VAR_0;
   else
    return VAR_3 <<
           VAR_4;
  default:
   return -VAR_0;
  }
 case 135475200:
 case 147456000:
  return VAR_1 << VAR_2;
 default:
  return -VAR_0;
 }
}
