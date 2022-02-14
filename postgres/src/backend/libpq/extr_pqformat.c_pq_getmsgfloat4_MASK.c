
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int float4 ;
typedef int StringInfo ;


 int FUNC_0 (int ,int) ;

float4
FUNC_1(StringInfo VAR_0)
{
 union
 {
  float4 f;
  uint32 i;
 } VAR_1;

 VAR_1.i = FUNC_0(VAR_0, 4);
 return VAR_1.f;
}
