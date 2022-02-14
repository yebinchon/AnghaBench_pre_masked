
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1;


 switch (VAR_0 & 0x3) {
 case 0: VAR_1 = 48000; break;
 case 1: VAR_1 = 44100; break;
 case 2: VAR_1 = 32000; break;
 default: return 0;
 }


 switch (VAR_0 & 0x1c) {
 case (0 << 2): break;
 case (4 << 2): break;
 case (1 << 2): VAR_1 *= 2; break;
 case (2 << 2): VAR_1 *= 4; break;
 case (5 << 2): VAR_1 /= 2; break;
 case (6 << 2): VAR_1 /= 4; break;
 default: return 0;
 }


 switch (VAR_0 & 0x60) {
 case (0 << 5): break;
 case (1 << 5): VAR_1 = (VAR_1 * 999) / 1000; break;
 case (2 << 5): VAR_1 = (VAR_1 * 1001) / 1000; break;
 default: return 0;
 }
 return VAR_1;
}
