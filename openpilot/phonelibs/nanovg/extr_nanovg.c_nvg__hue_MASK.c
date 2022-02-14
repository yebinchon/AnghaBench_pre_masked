
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0, float VAR_1, float VAR_2)
{
 if (VAR_0 < 0) VAR_0 += 1;
 if (VAR_0 > 1) VAR_0 -= 1;
 if (VAR_0 < 1.0f/6.0f)
  return VAR_1 + (VAR_2 - VAR_1) * VAR_0 * 6.0f;
 else if (VAR_0 < 3.0f/6.0f)
  return VAR_2;
 else if (VAR_0 < 4.0f/6.0f)
  return VAR_1 + (VAR_2 - VAR_1) * (2.0f/3.0f - VAR_0) * 6.0f;
 return VAR_1;
}
