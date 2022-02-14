
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shader_parser {int gl_string; } ;


 scalar_t__ FUNC_0 (char const*,size_t,char*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static bool FUNC_2(struct gl_shader_parser *VAR_0, const char *VAR_1,
       size_t VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2, "float2", 6) == 0)
  FUNC_1(&VAR_0->gl_string, "vec2");
 else if (FUNC_0(VAR_1, VAR_2, "float3", 6) == 0)
  FUNC_1(&VAR_0->gl_string, "vec3");
 else if (FUNC_0(VAR_1, VAR_2, "float4", 6) == 0)
  FUNC_1(&VAR_0->gl_string, "vec4");
 else if (FUNC_0(VAR_1, VAR_2, "int2", 4) == 0)
  FUNC_1(&VAR_0->gl_string, "ivec2");
 else if (FUNC_0(VAR_1, VAR_2, "int3", 4) == 0)
  FUNC_1(&VAR_0->gl_string, "ivec3");
 else if (FUNC_0(VAR_1, VAR_2, "int4", 4) == 0)
  FUNC_1(&VAR_0->gl_string, "ivec4");
 else if (FUNC_0(VAR_1, VAR_2, "float3x3", 8) == 0)
  FUNC_1(&VAR_0->gl_string, "mat3x3");
 else if (FUNC_0(VAR_1, VAR_2, "float3x4", 8) == 0)
  FUNC_1(&VAR_0->gl_string, "mat3x4");
 else if (FUNC_0(VAR_1, VAR_2, "float4x4", 8) == 0)
  FUNC_1(&VAR_0->gl_string, "mat4x4");
 else if (FUNC_0(VAR_1, VAR_2, "texture2d", 9) == 0)
  FUNC_1(&VAR_0->gl_string, "sampler2D");
 else if (FUNC_0(VAR_1, VAR_2, "texture3d", 9) == 0)
  FUNC_1(&VAR_0->gl_string, "sampler3D");
 else if (FUNC_0(VAR_1, VAR_2, "texture_cube", 12) == 0)
  FUNC_1(&VAR_0->gl_string, "samplerCube");
 else if (FUNC_0(VAR_1, VAR_2, "texture_rect", 12) == 0)
  FUNC_1(&VAR_0->gl_string, "sampler2DRect");
 else
  return 0;

 return 1;
}
