
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void
FUNC_0(unsigned int VAR_0,
     unsigned int *VAR_1, unsigned int *VAR_2,
     unsigned int *VAR_3, unsigned int *VAR_4,
     unsigned int *VAR_5, unsigned int *VAR_6,
     unsigned int *VAR_7, unsigned int *VAR_8)
{
 if (VAR_8)
  *VAR_8 = (VAR_0 >> 27) & 0x1f;
 if (VAR_7)
  *VAR_7 = (VAR_0 >> 26) & 0x01;
 if (VAR_6)
  *VAR_6 = (VAR_0 >> 25) & 0x01;
 if (VAR_5)
  *VAR_5 = (VAR_0 >> 24) & 0x01;
 if (VAR_4)
  *VAR_4 = (VAR_0 >> 17) & 0x7f;
 if (VAR_3)
  *VAR_3 = (VAR_0 >> 16) & 0x01;
 if (VAR_2)
  *VAR_2 = (VAR_0 >> 8) & 0xff;
 if (VAR_1)
  *VAR_1 = VAR_0 & 0xff;
}
