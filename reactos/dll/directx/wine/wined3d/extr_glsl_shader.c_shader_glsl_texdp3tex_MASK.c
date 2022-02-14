
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_instruction {int ctx; int * src; TYPE_3__* dst; } ;
struct glsl_src_param {int param_str; } ;
struct glsl_sample_function {int coord_mask; } ;
typedef int UINT ;
struct TYPE_5__ {TYPE_1__* idx; } ;
struct TYPE_6__ {TYPE_2__ reg; } ;
struct TYPE_4__ {int offset; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int,struct glsl_sample_function*,int ,int *,int *,int *,int *,char*,int,int ) ;
 int FUNC_3 (int ,int,int,int ,struct glsl_sample_function*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct glsl_sample_function*) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_4)
{
    DWORD VAR_5 = VAR_1 | VAR_2 | VAR_3;
    DWORD VAR_6 = VAR_4->dst[0].reg.idx[0].offset;
    struct glsl_sample_function VAR_7;
    struct glsl_src_param VAR_8;
    UINT VAR_9;

    FUNC_1(VAR_4, &VAR_4->src[0], VAR_5, &VAR_8);






    FUNC_3(VAR_4->ctx, VAR_6, VAR_6, 0, &VAR_7);
    VAR_9 = FUNC_4(VAR_7.coord_mask);

    switch(VAR_9)
    {
        case 1:
            FUNC_2(VAR_4, VAR_6, &VAR_7, VAR_0, ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), "dot(ffp_texcoord[%u].xyz, %s)", VAR_6, VAR_8.param_str);
            break;

        case 2:
            FUNC_2(VAR_4, VAR_6, &VAR_7, VAR_0, ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), "vec2(dot(ffp_texcoord[%u].xyz, %s), 0.0)", VAR_6, VAR_8.param_str);
            break;

        case 3:
            FUNC_2(VAR_4, VAR_6, &VAR_7, VAR_0, ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), "vec3(dot(ffp_texcoord[%u].xyz, %s), 0.0, 0.0)", VAR_6, VAR_8.param_str);
            break;

        default:
            FUNC_0("Unexpected mask size %u\n", VAR_9);
            break;
    }
    FUNC_5(VAR_4->ctx, &VAR_7);
}
