
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(unsigned int VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0 == 0 || VAR_1 == 0)
  return 0;


 VAR_1 *= 4;
 VAR_2 = VAR_1 / VAR_0;

 if (VAR_2 < 6) {
  VAR_0 >>= 1;
  VAR_2 = VAR_1 / VAR_0;
 }

 if ((VAR_2 < 6) || (VAR_2 > 12))
  return 0;

 return 1;
}
