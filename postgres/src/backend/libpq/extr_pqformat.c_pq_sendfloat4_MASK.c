
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int float4 ;
typedef int StringInfo ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(StringInfo VAR_0, float4 VAR_1)
{
 union
 {
  float4 f;
  uint32 i;
 } VAR_2;

 VAR_2.f = VAR_1;
 FUNC_0(VAR_0, VAR_2.i);
}
