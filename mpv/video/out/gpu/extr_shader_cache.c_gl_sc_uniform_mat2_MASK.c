
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* f; } ;
struct TYPE_4__ {int dim_v; int dim_m; int type; } ;
struct sc_uniform {char* glsl_type; TYPE_1__ v; TYPE_2__ input; } ;
struct gl_shader_cache {int dummy; } ;


 int VAR_0 ;
 struct sc_uniform* FUNC_0 (struct gl_shader_cache*,char*) ;
 int FUNC_1 (float*) ;
 int FUNC_2 (struct gl_shader_cache*,struct sc_uniform*) ;

void FUNC_3(struct gl_shader_cache *VAR_1, char *VAR_2,
                        bool VAR_3, float *VAR_4)
{
    struct sc_uniform *VAR_5 = FUNC_0(VAR_1, VAR_2);
    VAR_5->input.type = VAR_0;
    VAR_5->input.dim_v = 2;
    VAR_5->input.dim_m = 2;
    VAR_5->glsl_type = "mat2";
    FUNC_2(VAR_1, VAR_5);
    for (int VAR_6 = 0; VAR_6 < 4; VAR_6++)
        VAR_5->v.f[VAR_6] = VAR_4[VAR_6];
    if (VAR_3)
        FUNC_1(&VAR_5->v.f[0]);
}
