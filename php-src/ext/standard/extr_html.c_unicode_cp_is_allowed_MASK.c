
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 131:
  return (VAR_0 >= 0x20 && VAR_0 <= 0x7E) ||
   (VAR_0 == 0x0A || VAR_0 == 0x09 || VAR_0 == 0x0D) ||
   (VAR_0 >= 0xA0 && VAR_0 <= 0xD7FF) ||
   (VAR_0 >= 0xE000 && VAR_0 <= 0x10FFFF);
 case 130:
  return (VAR_0 >= 0x20 && VAR_0 <= 0x7E) ||
   (VAR_0 >= 0x09 && VAR_0 <= 0x0D && VAR_0 != 0x0B) ||
   (VAR_0 >= 0xA0 && VAR_0 <= 0xD7FF) ||
   (VAR_0 >= 0xE000 && VAR_0 <= 0x10FFFF &&
    ((VAR_0 & 0xFFFF) < 0xFFFE) &&
    (VAR_0 < 0xFDD0 || VAR_0 > 0xFDEF));
 case 129:
 case 128:
  return (VAR_0 >= 0x20 && VAR_0 <= 0xD7FF) ||
   (VAR_0 == 0x0A || VAR_0 == 0x09 || VAR_0 == 0x0D) ||
   (VAR_0 >= 0xE000 && VAR_0 <= 0x10FFFF && VAR_0 != 0xFFFE && VAR_0 != 0xFFFF);
 default:
  return 1;
 }
}
