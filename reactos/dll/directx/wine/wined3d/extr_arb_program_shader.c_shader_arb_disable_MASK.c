
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* p_glDisable ) (int ) ;} ;
struct TYPE_7__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_3__ gl_ops; } ;
struct wined3d_context {unsigned int shader_update_mask; struct wined3d_gl_info* gl_info; } ;
struct shader_arb_priv {scalar_t__ last_vs_color_unclamp; TYPE_4__* vertex_pipe; scalar_t__ current_vprogram_id; TYPE_1__* fragment_pipe; scalar_t__ current_fprogram_id; } ;
struct TYPE_8__ {int (* vp_enable ) (struct wined3d_gl_info const*,scalar_t__) ;} ;
struct TYPE_5__ {int (* enable_extension ) (struct wined3d_gl_info const*,scalar_t__) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wined3d_gl_info const*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wined3d_gl_info const*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void *VAR_14, struct wined3d_context *VAR_15)
{
    const struct wined3d_gl_info *VAR_16 = VAR_15->gl_info;
    struct shader_arb_priv *VAR_17 = VAR_14;

    if (VAR_16->supported[VAR_1])
    {
        VAR_16->gl_ops.gl.p_glDisable(VAR_6);
        FUNC_1("glDisable(GL_FRAGMENT_PROGRAM_ARB)");
        VAR_17->current_fprogram_id = 0;
    }
    VAR_17->fragment_pipe->enable_extension(VAR_16, VAR_3);

    if (VAR_16->supported[VAR_2])
    {
        VAR_17->current_vprogram_id = 0;
        VAR_16->gl_ops.gl.p_glDisable(VAR_7);
        FUNC_1("glDisable(GL_VERTEX_PROGRAM_ARB)");
    }
    VAR_17->vertex_pipe->vp_enable(VAR_16, VAR_3);

    if (VAR_16->supported[VAR_0] && VAR_17->last_vs_color_unclamp)
    {
        FUNC_0(FUNC_2(VAR_4, VAR_5));
        FUNC_1("glClampColorARB");
        VAR_17->last_vs_color_unclamp = VAR_3;
    }

    VAR_15->shader_update_mask = (1u << VAR_12)
            | (1u << VAR_13)
            | (1u << VAR_10)
            | (1u << VAR_11)
            | (1u << VAR_9)
            | (1u << VAR_8);
}
