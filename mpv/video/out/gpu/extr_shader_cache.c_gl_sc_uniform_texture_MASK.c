
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct ra_tex* tex; } ;
struct TYPE_9__ {int type; int binding; } ;
struct sc_uniform {char const* glsl_type; TYPE_5__ v; TYPE_4__ input; } ;
struct TYPE_7__ {int dimensions; TYPE_1__* format; scalar_t__ external_oes; scalar_t__ non_normalized; } ;
struct ra_tex {TYPE_2__ params; } ;
struct gl_shader_cache {TYPE_3__* ra; } ;
struct TYPE_8__ {scalar_t__ glsl_es; } ;
struct TYPE_6__ {scalar_t__ ctype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sc_uniform* FUNC_0 (struct gl_shader_cache*,char*) ;
 int FUNC_1 (struct gl_shader_cache*,int ) ;

void FUNC_2(struct gl_shader_cache *VAR_2, char *VAR_3,
                           struct ra_tex *VAR_4)
{
    const char *VAR_5 = "sampler2D";
    if (VAR_4->params.dimensions == 1) {
        VAR_5 = "sampler1D";
    } else if (VAR_4->params.dimensions == 3) {
        VAR_5 = "sampler3D";
    } else if (VAR_4->params.non_normalized) {
        VAR_5 = "sampler2DRect";
    } else if (VAR_4->params.external_oes) {
        VAR_5 = "samplerExternalOES";
    } else if (VAR_4->params.format->ctype == VAR_0) {
        VAR_5 = VAR_2->ra->glsl_es ? "highp usampler2D" : "usampler2D";
    }

    struct sc_uniform *VAR_6 = FUNC_0(VAR_2, VAR_3);
    VAR_6->input.type = VAR_1;
    VAR_6->glsl_type = VAR_5;
    VAR_6->input.binding = FUNC_1(VAR_2, VAR_6->input.type);
    VAR_6->v.tex = VAR_4;
}
