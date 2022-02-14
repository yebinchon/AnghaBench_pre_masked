
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(u8 VAR_1)
{
 switch (VAR_1) {
 case 0xf6:
 case 0xf8:
 case 0xfa:
 case 0xfb:
 case 0xfc:
 case 0xfe:
 case 0xff:
  return 1;
 case 0xf1:
 case 0xf3:
  return 2;
 case 0xf2:
  return 3;
 case 0xf0:
  return 0;
 case 0xf7:
  break;
 case 0xf4:
 case 0xf5:
 case 0xf9:
 case 0xfd:
  break;
 default:
  switch (VAR_1 & 0xf0) {
  case 0x80:
  case 0x90:
  case 0xa0:
  case 0xb0:
  case 0xe0:
   return 3;
  case 0xc0:
  case 0xd0:
   return 2;
  default:
  break;
  }
 break;
 }

 return -VAR_0;
}
