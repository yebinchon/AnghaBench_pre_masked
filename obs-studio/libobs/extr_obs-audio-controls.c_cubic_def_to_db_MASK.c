
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float const) ;

__attribute__((used)) static float FUNC_1(const float VAR_1)
{
 if (VAR_1 == 1.0f)
  return 0.0f;
 else if (VAR_1 <= 0.0f)
  return -VAR_0;

 return FUNC_0(VAR_1 * VAR_1 * VAR_1);
}
