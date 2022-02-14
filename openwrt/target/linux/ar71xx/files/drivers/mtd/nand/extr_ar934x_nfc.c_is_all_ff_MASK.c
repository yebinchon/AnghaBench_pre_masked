
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline bool
FUNC_0(u8 *VAR_0, int VAR_1)
{
 while (VAR_1--)
  if (VAR_0[VAR_1] != 0xff)
   return 0;

 return 1;
}
