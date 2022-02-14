
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0, int VAR_1)
{
 VAR_0 = 255 - VAR_0;
 if (VAR_0 <= 0)
  return 255;
 else if (VAR_0 >= VAR_1)
  return 0;
 else
  return 0xff - (0x1fe * VAR_0 + VAR_1) / (VAR_1 << 1);
}
