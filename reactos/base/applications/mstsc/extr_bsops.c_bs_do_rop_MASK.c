
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
  switch (VAR_0)
  {
    case 0x0: return 0;
    case 0x1: return ~(VAR_1 | VAR_2);
    case 0x2: return (~VAR_1) & VAR_2;
    case 0x3: return ~VAR_1;
    case 0x4: return VAR_1 & (~VAR_2);
    case 0x5: return ~(VAR_2);
    case 0x6: return VAR_1 ^ VAR_2;
    case 0x7: return ~(VAR_1 & VAR_2);
    case 0x8: return VAR_1 & VAR_2;
    case 0x9: return ~(VAR_1) ^ VAR_2;
    case 0xa: return VAR_2;
    case 0xb: return (~VAR_1) | VAR_2;
    case 0xc: return VAR_1;
    case 0xd: return VAR_1 | (~VAR_2);
    case 0xe: return VAR_1 | VAR_2;
    case 0xf: return ~0;
  }
  return VAR_2;
}
