
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



__attribute__((used)) static ut32 FUNC_0(st32 VAR_0) {
 ut32 VAR_1 = 0;
 if (VAR_0 < 0) {
  VAR_1 |= 1 << 18;
 }
 VAR_0 >>= 1;
 VAR_1 |= (( VAR_0 & 0xff) << 8);
 VAR_0 >>= 8;
 VAR_1 |= ( VAR_0 & 0x07);
 VAR_0 >>= 3;
 VAR_1 |= (( VAR_0 & 0xff) << 24);
 VAR_0 >>= 8;
 VAR_1 |= (( VAR_0 & 0x3) << 16);
 VAR_0 >>= 2;
 if (VAR_0 < 0) {
  VAR_1 |= (( VAR_0 & 0x1) << 3);
  VAR_0 >>= 1;
  VAR_1 |= (( VAR_0 & 0x1) << 5);
 } else {
  VAR_1 |= ((!( VAR_0 & 0x1)) << 3);
  VAR_0 >>= 1;
  VAR_1 |= ((!( VAR_0 & 0x1)) << 5);
 }
 return VAR_1;
}
