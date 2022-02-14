
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* i; } ;
struct TYPE_3__ {int type; } ;
struct sc_uniform {char* glsl_type; TYPE_2__ v; TYPE_1__ input; } ;
struct gl_shader_cache {int dummy; } ;


 int VAR_0 ;
 struct sc_uniform* FUNC_0 (struct gl_shader_cache*,char*) ;
 int FUNC_1 (struct gl_shader_cache*,struct sc_uniform*) ;

void FUNC_2(struct gl_shader_cache *VAR_1, char *VAR_2, int VAR_3)
{
    struct sc_uniform *VAR_4 = FUNC_0(VAR_1, VAR_2);
    VAR_4->input.type = VAR_0;
    VAR_4->glsl_type = "int";
    FUNC_1(VAR_1, VAR_4);
    VAR_4->v.i[0] = VAR_3;
}
