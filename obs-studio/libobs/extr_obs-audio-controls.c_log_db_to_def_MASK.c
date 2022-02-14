
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float FUNC_0 (scalar_t__) ;

__attribute__((used)) static float FUNC_1(const float VAR_3)
{
 if (VAR_3 >= 0.0f)
  return 1.0f;
 else if (VAR_3 <= -96.0f)
  return 0.0f;

 return (-FUNC_0(-VAR_3 + VAR_0) - VAR_2) /
        (VAR_1 - VAR_2);
}
