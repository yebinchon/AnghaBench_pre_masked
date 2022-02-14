
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(char *VAR_0, int VAR_1)
{
 switch (VAR_1)
 {
 case 2:

  return (((*VAR_0 >> 1) == 0x60) &&
    ((*(VAR_0+1) >> 6) == 0x02));

 case 3:

  return ((*VAR_0 == 0xE0) &&
    ((*(VAR_0+1) >> 5) == 0x04) &&
    ((*(VAR_0+2) >> 6) == 0x02));

 case 4:

  return ((*VAR_0 == 0xF0) &&
    ((*(VAR_0+1) >> 4) == 0x08) &&
    ((*(VAR_0+2) >> 6) == 0x02) &&
    ((*(VAR_0+3) >> 6) == 0x02));
 }

 return 0;
}
