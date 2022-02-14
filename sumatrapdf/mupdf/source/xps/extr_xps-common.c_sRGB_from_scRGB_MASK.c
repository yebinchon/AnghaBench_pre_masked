
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,int) ;

__attribute__((used)) static float FUNC_1(float VAR_0)
{
 if (VAR_0 < 0.0031308f)
  return 12.92f * VAR_0;
 return 1.055f * FUNC_0(VAR_0, 1/2.4f) - 0.055f;
}
