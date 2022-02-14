
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float FUNC_0 (float,float const) ;

__attribute__((used)) static float FUNC_1(const float VAR_3)
{
 if (VAR_3 >= 1.0f)
  return 0.0f;
 else if (VAR_3 <= 0.0f)
  return -VAR_0;

 return -(VAR_2 + VAR_1) *
         FUNC_0((VAR_2 + VAR_1) / VAR_1,
       -VAR_3) +
        VAR_1;
}
