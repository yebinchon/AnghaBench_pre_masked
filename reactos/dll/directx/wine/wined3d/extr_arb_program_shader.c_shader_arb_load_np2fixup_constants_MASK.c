
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture {int * pow2_matrix; } ;
struct wined3d_state {struct wined3d_texture** textures; } ;
struct wined3d_gl_info {int dummy; } ;
struct TYPE_2__ {int active; unsigned char* idx; size_t num_consts; } ;
struct arb_ps_np2fixup_info {scalar_t__ offset; TYPE_1__ super; } ;
typedef int WORD ;
typedef size_t UINT ;
typedef int GLfloat ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(const struct arb_ps_np2fixup_info *VAR_2,
        const struct wined3d_gl_info *VAR_3, const struct wined3d_state *VAR_4)
{
    GLfloat VAR_5[4 * VAR_1];
    WORD VAR_6 = VAR_2->super.active;
    UINT VAR_7;

    if (!VAR_6)
        return;

    for (VAR_7 = 0; VAR_6; VAR_6 >>= 1, ++VAR_7)
    {
        const struct wined3d_texture *VAR_8 = VAR_4->textures[VAR_7];
        unsigned char VAR_9 = VAR_2->super.idx[VAR_7];
        GLfloat *VAR_10 = &VAR_5[(VAR_9 >> 1) * 4];

        if (!(VAR_6 & 1))
            continue;

        if (!VAR_8)
        {
            FUNC_0("Nonexistent texture is flagged for NP2 texcoord fixup.\n");
            continue;
        }

        if (VAR_9 % 2)
        {
            VAR_10[2] = VAR_8->pow2_matrix[0];
            VAR_10[3] = VAR_8->pow2_matrix[5];
        }
        else
        {
            VAR_10[0] = VAR_8->pow2_matrix[0];
            VAR_10[1] = VAR_8->pow2_matrix[5];
        }
    }

    for (VAR_7 = 0; VAR_7 < VAR_2->super.num_consts; ++VAR_7)
    {
        FUNC_1(FUNC_2(VAR_0,
                VAR_2->offset + VAR_7, &VAR_5[VAR_7 * 4]));
    }
}
