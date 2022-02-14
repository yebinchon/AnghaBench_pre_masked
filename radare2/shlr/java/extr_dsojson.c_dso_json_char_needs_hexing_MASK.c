
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



ut8 FUNC_0 ( ut8 VAR_0) {
 if (VAR_0 < 0x20) {
  return 1;
 }
 switch (VAR_0) {
 case 0x7f:
 case 0x81:
 case 0x8F:
 case 0x90:
 case 0x9D:
 case 0xA0:
 case 0xAD:
  return 1;
 }
 return 0;
}
