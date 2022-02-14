
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;




int FUNC_0(u8 VAR_1, u32 VAR_2, u32 VAR_3)
{
 switch (VAR_1) {
 case 130:
 case 128:
  break;

 case 129:

  if (VAR_3 >= 0x10000)
   return -VAR_0;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_2 > VAR_3)
  return -VAR_0;

 return 0;
}
