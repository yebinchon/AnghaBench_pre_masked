
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directive {int d_operand; int d_prefix; int d_off; } ;



__attribute__((used)) static int FUNC_0(struct directive *VAR_0) {
 int VAR_1 = VAR_0->d_operand;
 int VAR_2 = VAR_1 & 0x80;

 if (!VAR_0->d_prefix) {
  VAR_1 = (char) (VAR_1 & 0xff);
 } else if (VAR_0->d_prefix == 1) {
  VAR_1 = (short) (VAR_1 & 0xffff);
  if (VAR_2) {
   VAR_1 -= 0x100;
  }
 } else {
  VAR_1 = (int) (VAR_1 & 0xffffff);
  if (VAR_1 & 0x800000) {
   VAR_1 |= 0xff000000;
  }
  if (VAR_1 & 0x8000) {
   VAR_1 -= 0x10000;
  }
  if (VAR_2) {
   VAR_1 -= 0x100;
  }
 }
 return VAR_0->d_off + VAR_1;
}
