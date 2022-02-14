
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline float FUNC_0(float VAR_0)
{
 if (VAR_0 < 0.5f) {
  return 4.0f * VAR_0 * VAR_0 * VAR_0;
 } else {
  float VAR_1 = (2.0f * VAR_0 - 2.0f);
  return (VAR_0 - 1.0f) * VAR_1 * VAR_1 + 1.0f;
 }
}
