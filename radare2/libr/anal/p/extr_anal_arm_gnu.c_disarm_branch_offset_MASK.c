
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, unsigned int VAR_1) {
 unsigned int VAR_2 = VAR_1 << 2;

 if ((VAR_2 & 0x02000000) == 0x02000000) {
  VAR_2 |= 0xFC000000;
 }
 return VAR_2 + VAR_0 + 8;
}
