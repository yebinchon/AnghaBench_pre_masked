
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 switch (VAR_2)
 {
 case 1: VAR_0[VAR_1 >> 3] |= VAR_3 << (7 - (VAR_1 & 7)); break;
 case 2: VAR_0[VAR_1 >> 2] |= VAR_3 << ((3 - (VAR_1 & 3)) << 1); break;
 case 4: VAR_0[VAR_1 >> 1] |= VAR_3 << ((1 - (VAR_1 & 1)) << 2); break;
 case 8: VAR_0[VAR_1] = VAR_3; break;
 case 16: VAR_0[VAR_1<<1] = VAR_3>>8; VAR_0[(VAR_1<<1)+1] = VAR_3; break;
 }
}
