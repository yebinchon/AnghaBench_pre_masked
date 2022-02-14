
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_state {int** texture_states; TYPE_5__** textures; int * transforms; } ;
struct wined3d_matrix {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {int shader_priv; TYPE_4__* shader_backend; } ;
struct TYPE_8__ {unsigned int use_map; TYPE_2__* elements; } ;
struct wined3d_context {unsigned int lastWasPow2Texture; TYPE_3__ stream_info; int last_was_rhw; struct wined3d_gl_info* gl_info; struct wined3d_device* device; } ;
struct TYPE_10__ {scalar_t__ pow2_matrix; } ;
struct TYPE_9__ {int (* shader_has_ffp_proj_control ) (int ) ;} ;
struct TYPE_7__ {TYPE_1__* format; } ;
struct TYPE_6__ {int id; } ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (struct wined3d_gl_info const*,int *,int,int,int ,int ,int ,struct wined3d_matrix*) ;
 unsigned int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct wined3d_matrix*,struct wined3d_matrix*,struct wined3d_matrix*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wined3d_state const*) ;

void FUNC_7(const struct wined3d_context *VAR_7, const struct wined3d_state *VAR_8,
        unsigned int VAR_9, struct wined3d_matrix *VAR_10)
{
    const struct wined3d_device *VAR_11 = VAR_7->device;
    const struct wined3d_gl_info *VAR_12 = VAR_7->gl_info;
    BOOL VAR_13 = (VAR_8->texture_states[VAR_9][VAR_4] & 0xffff0000)
            != VAR_2;
    unsigned int VAR_14 = FUNC_3(VAR_8->texture_states[VAR_9][VAR_4 & 0x0000ffff],
            VAR_0 - 1);

    FUNC_2(VAR_12, &VAR_8->transforms[VAR_6 + VAR_9],
            VAR_8->texture_states[VAR_9][VAR_5],
            VAR_13, VAR_7->last_was_rhw,
            VAR_7->stream_info.use_map & (1u << (VAR_3 + VAR_14))
            ? VAR_7->stream_info.elements[VAR_3 + VAR_14].format->id
            : VAR_1,
            VAR_11->shader_backend->shader_has_ffp_proj_control(VAR_11->shader_priv), VAR_10);

    if ((VAR_7->lastWasPow2Texture & (1u << VAR_9)) && VAR_8->textures[VAR_9])
    {
        if (VAR_13)
            FUNC_0("Non-power-of-two texture being used with generated texture coords.\n");


        if (!FUNC_6(VAR_8))
        {
            FUNC_1("Non-power-of-two texture matrix multiply fixup.\n");
            FUNC_4(VAR_10, VAR_10, (struct wined3d_matrix *)VAR_8->textures[VAR_9]->pow2_matrix);
        }
    }
}
