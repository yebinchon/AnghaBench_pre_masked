
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shader_cache {int dummy; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct gl_shader_cache *VAR_0, int VAR_1)
{
    FUNC_0("#undef tex\n");
    FUNC_0("#undef texmap\n");
    FUNC_0("#define tex texture%d\n", VAR_1);
    FUNC_0("#define texmap texmap%d\n", VAR_1);
    FUNC_0("vec2 pos = texcoord%d;\n", VAR_1);
    FUNC_0("vec2 size = texture_size%d;\n", VAR_1);
    FUNC_0("vec2 pt = pixel_size%d;\n", VAR_1);
}
