
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {float const r; } ;
struct TYPE_9__ {float const r; } ;
struct TYPE_8__ {float const r; } ;
struct TYPE_7__ {float const r; } ;
struct TYPE_12__ {TYPE_5__ emissive; TYPE_3__ diffuse; TYPE_2__ ambient; int power; TYPE_1__ specular; } ;
struct wined3d_state {TYPE_6__ material; scalar_t__* render_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_10__ {int material_emissive_location; int material_diffuse_location; int material_ambient_location; int material_specular_location; int material_shininess_location; } ;
struct glsl_shader_prog_link {TYPE_4__ vs; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,float const*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, struct glsl_shader_prog_link *VAR_3)
{
    const struct wined3d_gl_info *VAR_4 = VAR_1->gl_info;

    if (VAR_2->render_states[VAR_0])
    {
        FUNC_0(FUNC_3(VAR_3->vs.material_specular_location, 1, &VAR_2->material.specular.r));
        FUNC_0(FUNC_2(VAR_3->vs.material_shininess_location, VAR_2->material.power));
    }
    else
    {
        static const float VAR_5[] = {0.0f, 0.0f, 0.0f, 0.0f};

        FUNC_0(FUNC_3(VAR_3->vs.material_specular_location, 1, VAR_5));
    }
    FUNC_0(FUNC_3(VAR_3->vs.material_ambient_location, 1, &VAR_2->material.ambient.r));
    FUNC_0(FUNC_3(VAR_3->vs.material_diffuse_location, 1, &VAR_2->material.diffuse.r));
    FUNC_0(FUNC_3(VAR_3->vs.material_emissive_location, 1, &VAR_2->material.emissive.r));
    FUNC_1("setting FFP material uniforms");
}
