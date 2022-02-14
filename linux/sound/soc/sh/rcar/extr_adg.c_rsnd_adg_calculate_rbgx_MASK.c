
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(unsigned long VAR_0)
{
 int VAR_1, VAR_2;

 if (!VAR_0)
  return 0;

 for (VAR_1 = 3; VAR_1 >= 0; VAR_1--) {
  VAR_2 = 2 << (VAR_1 * 2);
  if (0 == (VAR_0 % VAR_2))
   return (u32)((VAR_1 << 8) | ((VAR_0 / VAR_2) - 1));
 }

 return ~0;
}
