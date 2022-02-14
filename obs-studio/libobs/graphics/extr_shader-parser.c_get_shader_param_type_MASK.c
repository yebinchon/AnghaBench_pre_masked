
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gs_shader_param_type { ____Placeholder_gs_shader_param_type } gs_shader_param_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

enum gs_shader_param_type FUNC_2(const char *VAR_13)
{
 if (FUNC_1(VAR_13, "float") == 0)
  return VAR_1;
 else if (FUNC_1(VAR_13, "float2") == 0)
  return VAR_10;
 else if (FUNC_1(VAR_13, "float3") == 0)
  return VAR_11;
 else if (FUNC_1(VAR_13, "float4") == 0)
  return VAR_12;
 else if (FUNC_1(VAR_13, "int2") == 0)
  return VAR_3;
 else if (FUNC_1(VAR_13, "int3") == 0)
  return VAR_4;
 else if (FUNC_1(VAR_13, "int4") == 0)
  return VAR_5;
 else if (FUNC_0(VAR_13, "texture", 7) == 0)
  return VAR_8;
 else if (FUNC_1(VAR_13, "float4x4") == 0)
  return VAR_6;
 else if (FUNC_1(VAR_13, "bool") == 0)
  return VAR_0;
 else if (FUNC_1(VAR_13, "int") == 0)
  return VAR_2;
 else if (FUNC_1(VAR_13, "string") == 0)
  return VAR_7;

 return VAR_9;
}
