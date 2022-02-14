
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned char *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_2)
 {
 case 1: return (VAR_0[VAR_1 >> 3] >> ( 7 - (VAR_1 & 7) ) ) & 1;
 case 2: return (VAR_0[VAR_1 >> 2] >> ( ( 3 - (VAR_1 & 3) ) << 1 ) ) & 3;
 case 4: return (VAR_0[VAR_1 >> 1] >> ( ( 1 - (VAR_1 & 1) ) << 2 ) ) & 15;
 case 8: return VAR_0[VAR_1];
 case 16: return (VAR_0[VAR_1<<1]<<8)+VAR_0[(VAR_1<<1)+1];
 }
 return 0;
}
