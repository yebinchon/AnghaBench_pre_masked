
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ra_tex* tex; } ;
struct TYPE_3__ {int type; int binding; } ;
struct sc_uniform {char* glsl_type; TYPE_2__ v; TYPE_1__ input; } ;
struct ra_tex {int dummy; } ;
struct gl_shader_cache {int dummy; } ;


 int VAR_0 ;
 struct sc_uniform* FUNC_0 (struct gl_shader_cache*,char const*) ;
 int FUNC_1 (struct gl_shader_cache*,char*) ;
 int FUNC_2 (struct gl_shader_cache*,int ) ;

void FUNC_3(struct gl_shader_cache *VAR_1, const char *VAR_2,
                              struct ra_tex *VAR_3)
{
    FUNC_1(VAR_1, "GL_ARB_shader_image_load_store");

    struct sc_uniform *VAR_4 = FUNC_0(VAR_1, VAR_2);
    VAR_4->input.type = VAR_0;
    VAR_4->glsl_type = "writeonly image2D";
    VAR_4->input.binding = FUNC_2(VAR_1, VAR_4->input.type);
    VAR_4->v.tex = VAR_3;
}
