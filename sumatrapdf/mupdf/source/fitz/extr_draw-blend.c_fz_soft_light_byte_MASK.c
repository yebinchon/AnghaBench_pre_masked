
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (float) ;

__attribute__((used)) static inline int FUNC_2(int VAR_0, int VAR_1)
{
 if (VAR_1 < 128) {
  return VAR_0 - FUNC_0(FUNC_0((255 - (VAR_1<<1)), VAR_0), 255 - VAR_0);
 }
 else {
  int VAR_2;
  if (VAR_0 < 64)
   VAR_2 = FUNC_0(FUNC_0((VAR_0 << 4) - 3060, VAR_0) + 1020, VAR_0);
  else
   VAR_2 = (int)FUNC_1(255.0f * VAR_0);
  return VAR_0 + FUNC_0(((VAR_1<<1) - 255), (VAR_2 - VAR_0));
 }
}
