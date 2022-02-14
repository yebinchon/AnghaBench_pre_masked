
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture {float* pow2_matrix; } ;
struct wined3d_state {struct wined3d_texture** textures; } ;
struct wined3d_gl_info {int dummy; } ;
struct glsl_ps_program {TYPE_1__* np2_fixup_info; int np2_fixup_location; } ;
typedef int UINT ;
struct TYPE_2__ {int active; unsigned char* idx; int num_consts; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,float*) ;

__attribute__((used)) static void FUNC_3(const struct glsl_ps_program *VAR_1,
        const struct wined3d_gl_info *VAR_2, const struct wined3d_state *VAR_3)
{
    struct
    {
        float sx, sy;
    }
    VAR_4[VAR_0];
    UINT VAR_5 = VAR_1->np2_fixup_info->active;
    UINT VAR_6;

    for (VAR_6 = 0; VAR_5; VAR_5 >>= 1, ++VAR_6)
    {
        const struct wined3d_texture *VAR_7 = VAR_3->textures[VAR_6];
        unsigned char VAR_8 = VAR_1->np2_fixup_info->idx[VAR_6];

        if (!VAR_7)
        {
            FUNC_0("Nonexistent texture is flagged for NP2 texcoord fixup.\n");
            continue;
        }

        VAR_4[VAR_8].sx = VAR_7->pow2_matrix[0];
        VAR_4[VAR_8].sy = VAR_7->pow2_matrix[5];
    }

    FUNC_1(FUNC_2(VAR_1->np2_fixup_location, VAR_1->np2_fixup_info->num_consts, &VAR_4[0].sx));
}
