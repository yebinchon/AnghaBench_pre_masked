
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {scalar_t__** texture_states; int * textures; } ;
struct TYPE_5__ {int (* p_glTexEnvi ) (int ,int ,int ) ;int (* p_glDisable ) (int ) ;int (* p_glEnable ) (int ) ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct TYPE_4__ {int textures; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_3__ gl_ops; TYPE_1__ limits; } ;
struct wined3d_context {unsigned int fixed_function_usage_map; int* tex_unit_map; int lowest_disabled_stage; unsigned int texShaderBumpMap; struct wined3d_gl_info* gl_info; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wined3d_context*,struct wined3d_gl_info const*,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct wined3d_context*,int ) ;
 int FUNC_10 (struct wined3d_state const*,int,struct wined3d_context*) ;
 int FUNC_11 (struct wined3d_gl_info const*,struct wined3d_state const*,int ,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,struct wined3d_gl_info const*) ;
 scalar_t__ FUNC_20 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_21(struct wined3d_context *VAR_22, const struct wined3d_state *VAR_23, DWORD VAR_24)
{
    DWORD VAR_25 = (VAR_24 - FUNC_3(0, 0)) / (VAR_13 + 1);
    BOOL VAR_26 = VAR_22->fixed_function_usage_map & (1u << VAR_25);
    DWORD VAR_27 = VAR_22->tex_unit_map[VAR_25];
    const struct wined3d_gl_info *VAR_28 = VAR_22->gl_info;

    FUNC_4("Setting color op for stage %u.\n", VAR_25);


    if (FUNC_20(VAR_23)) return;

    if (VAR_25 != VAR_27) FUNC_5("Using non 1:1 mapping: %d -> %d!\n", VAR_25, VAR_27);

    if (VAR_27 != VAR_21)
    {
        if (VAR_26 && VAR_27 >= VAR_28->limits.textures)
        {
            FUNC_0("Attempt to enable unsupported stage!\n");
            return;
        }
        FUNC_7(VAR_22, VAR_28, VAR_27);
    }

    if (VAR_22->lowest_disabled_stage > 0)
    {
        VAR_28->gl_ops.gl.p_glEnable(VAR_5);
        FUNC_1(FUNC_8(VAR_4, VAR_22->lowest_disabled_stage));
    }
    else
    {
        VAR_28->gl_ops.gl.p_glDisable(VAR_5);
    }
    if (VAR_25 >= VAR_22->lowest_disabled_stage)
    {
        FUNC_4("Stage disabled\n");
        if (VAR_27 != VAR_21)
        {

            VAR_28->gl_ops.gl.p_glDisable(VAR_7);
            FUNC_6("glDisable(GL_TEXTURE_2D)");
            VAR_28->gl_ops.gl.p_glDisable(VAR_8);
            FUNC_6("glDisable(GL_TEXTURE_3D)");
            if (VAR_28->supported[VAR_0])
            {
                VAR_28->gl_ops.gl.p_glDisable(VAR_9);
                FUNC_6("glDisable(GL_TEXTURE_CUBE_MAP_ARB)");
            }
            if (VAR_28->supported[VAR_1])
            {
                VAR_28->gl_ops.gl.p_glDisable(VAR_10);
                FUNC_6("glDisable(GL_TEXTURE_RECTANGLE_ARB)");
            }
            if (VAR_28->supported[VAR_12] && VAR_27 < VAR_28->limits.textures)
            {
                VAR_28->gl_ops.gl.p_glTexEnvi(VAR_11, VAR_6, VAR_3);
            }
        }

        return;
    }




    if (!FUNC_9(VAR_22, FUNC_2(VAR_25)))
    {
        if (VAR_26)
        {
            if (VAR_28->supported[VAR_12])
            {
                FUNC_10(VAR_23, VAR_25, VAR_22);
            }
            else
            {
                FUNC_19(VAR_23->textures[VAR_25], VAR_28);
            }
        }
    }


    FUNC_11(VAR_28, VAR_23, VAR_2, VAR_25,
            VAR_23->texture_states[VAR_25][VAR_19],
            VAR_23->texture_states[VAR_25][VAR_17],
            VAR_23->texture_states[VAR_25][VAR_18],
            VAR_23->texture_states[VAR_25][VAR_16],
            VAR_27,
            VAR_23->texture_states[VAR_25][VAR_20]);




    if (VAR_28->supported[VAR_12])
    {
        BOOL VAR_29 = (VAR_23->texture_states[VAR_25][VAR_19] == VAR_15
                || VAR_23->texture_states[VAR_25][VAR_19] == VAR_14);
        BOOL VAR_30 = !!(VAR_22->texShaderBumpMap & 1u << (VAR_25 + 1));
        if (VAR_29 != VAR_30)
        {
            FUNC_7(VAR_22, VAR_28, VAR_27 + 1);
            FUNC_10(VAR_23, VAR_25 + 1, VAR_22);
            FUNC_7(VAR_22, VAR_28, VAR_27);
        }
    }
}
