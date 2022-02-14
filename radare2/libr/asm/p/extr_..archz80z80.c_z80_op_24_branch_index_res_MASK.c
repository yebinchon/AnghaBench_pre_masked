
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static ut8 FUNC_0 (ut8 VAR_0) {
 if (VAR_0 < 0x40) {
  return VAR_0;
 }
 switch (VAR_0) {
 case 0x46: return 0x40;
 case 0x4e: return 0x41;
 case 0x56: return 0x42;
 case 0x5e: return 0x43;
 case 0x66: return 0x44;
 case 0x6e: return 0x45;
 case 0x76: return 0x46;
 case 0x7e: return 0x47;
 }
 return (VAR_0 > 0x7f)? VAR_0 - 0x38: 0xc8;
}
