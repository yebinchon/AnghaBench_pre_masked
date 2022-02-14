
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_2__ shader_version; } ;
struct wined3d_shader {struct arb_vshader_private* backend_data; TYPE_3__ reg_maps; struct wined3d_device* device; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {TYPE_1__* adapter; } ;
struct wined3d_context {int dummy; } ;
struct arb_vshader_private {size_t num_gl_shaders; struct arb_vshader_private* gl_shaders; int prgId; } ;
struct arb_pshader_private {size_t num_gl_shaders; struct arb_pshader_private* gl_shaders; int prgId; } ;
typedef size_t UINT ;
struct TYPE_4__ {struct wined3d_gl_info gl_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct wined3d_context* FUNC_2 (struct wined3d_device*,int *,int ) ;
 int FUNC_3 (struct wined3d_context*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct arb_vshader_private*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct wined3d_shader *VAR_0)
{
    struct wined3d_device *VAR_1 = VAR_0->device;
    const struct wined3d_gl_info *VAR_2 = &VAR_1->adapter->gl_info;

    if (FUNC_6(VAR_0->reg_maps.shader_version.type))
    {
        struct arb_pshader_private *VAR_3 = VAR_0->backend_data;
        UINT VAR_4;

        if(!VAR_3) return;

        if (VAR_3->num_gl_shaders)
        {
            struct wined3d_context *VAR_5 = FUNC_2(VAR_1, ((void*)0), 0);

            for (VAR_4 = 0; VAR_4 < VAR_3->num_gl_shaders; ++VAR_4)
            {
                FUNC_0(FUNC_4(1, &VAR_3->gl_shaders[VAR_4].prgId));
                FUNC_1("GL_EXTCALL(glDeleteProgramsARB(1, &shader_data->gl_shaders[i].prgId))");
            }

            FUNC_3(VAR_5);
        }

        FUNC_5(VAR_3->gl_shaders);
        FUNC_5(VAR_3);
        VAR_0->backend_data = ((void*)0);
    }
    else
    {
        struct arb_vshader_private *VAR_6 = VAR_0->backend_data;
        UINT VAR_7;

        if(!VAR_6) return;

        if (VAR_6->num_gl_shaders)
        {
            struct wined3d_context *VAR_8 = FUNC_2(VAR_1, ((void*)0), 0);

            for (VAR_7 = 0; VAR_7 < VAR_6->num_gl_shaders; ++VAR_7)
            {
                FUNC_0(FUNC_4(1, &VAR_6->gl_shaders[VAR_7].prgId));
                FUNC_1("GL_EXTCALL(glDeleteProgramsARB(1, &shader_data->gl_shaders[i].prgId))");
            }

            FUNC_3(VAR_8);
        }

        FUNC_5(VAR_6->gl_shaders);
        FUNC_5(VAR_6);
        VAR_0->backend_data = ((void*)0);
    }
}
