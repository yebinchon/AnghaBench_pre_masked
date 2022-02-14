
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0, int VAR_1) {
 if ((VAR_0 >= 0xfa && VAR_0 <= 0xfe) || (VAR_0 >= 0x8e && VAR_0 <= 0xa0) ||
   (VAR_0 >= 0x81 && VAR_0 <= 0x8d) || (VAR_0 >= 0xc7 && VAR_0 <= 0xc8)) {
  return (VAR_1 > 0x39 && VAR_1 < 0x7f) || (VAR_1 > 0xa0 && VAR_1 < 0xff);
 }
 if (VAR_0 == 0xc6) {
  return VAR_1 > 0xa0 && VAR_1 < 0xff;
 }
 return 0;
}
