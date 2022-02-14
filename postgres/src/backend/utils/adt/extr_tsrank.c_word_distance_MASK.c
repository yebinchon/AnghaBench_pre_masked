
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef float float4 ;


 double FUNC_0 (float) ;

__attribute__((used)) static float4
FUNC_1(int32 VAR_0)
{
 if (VAR_0 > 100)
  return 1e-30f;

 return 1.0 / (1.005 + 0.05 * FUNC_0(((float4) VAR_0) / 1.5 - 2));
}
