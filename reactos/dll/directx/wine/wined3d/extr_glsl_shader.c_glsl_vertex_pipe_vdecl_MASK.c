
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_state {TYPE_4__** shader; } ;
struct TYPE_10__ {unsigned int user_clip_distances; scalar_t__ glsl_varyings; } ;
struct wined3d_gl_info {TYPE_5__ limits; } ;
struct TYPE_6__ {unsigned int use_map; scalar_t__ position_transformed; scalar_t__ swizzle_map; } ;
struct wined3d_context {scalar_t__ last_was_rhw; scalar_t__ last_swizzle_map; unsigned int shader_update_mask; scalar_t__ last_was_normal; scalar_t__ last_was_vshader; int constant_update_mask; TYPE_1__ stream_info; struct wined3d_gl_info* gl_info; } ;
struct TYPE_7__ {int major; int minor; } ;
struct TYPE_8__ {TYPE_2__ shader_version; } ;
struct TYPE_9__ {TYPE_3__ reg_maps; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 scalar_t__ FUNC_2 (struct wined3d_gl_info const*) ;
 scalar_t__ FUNC_3 (struct wined3d_state const*) ;
 scalar_t__ FUNC_4 (struct wined3d_state const*) ;
 scalar_t__ FUNC_5 (struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_6(struct wined3d_context *VAR_5,
        const struct wined3d_state *VAR_6, DWORD VAR_7)
{
    const struct wined3d_gl_info *VAR_8 = VAR_5->gl_info;
    BOOL VAR_9 = !!(VAR_5->stream_info.use_map & (1u << VAR_0));
    const BOOL VAR_10 = FUNC_2(VAR_8);
    BOOL VAR_11 = VAR_5->stream_info.position_transformed;
    BOOL VAR_12 = VAR_5->last_was_rhw;
    unsigned int VAR_13;

    VAR_5->last_was_rhw = VAR_11;




    if (VAR_11 != VAR_12
            || VAR_5->stream_info.swizzle_map != VAR_5->last_swizzle_map)
        VAR_5->shader_update_mask |= 1u << VAR_4;

    VAR_5->last_swizzle_map = VAR_5->stream_info.swizzle_map;

    if (!FUNC_4(VAR_6))
    {
        if (VAR_5->last_was_vshader)
        {
            if (VAR_10)
                for (VAR_13 = 0; VAR_13 < VAR_8->limits.user_clip_distances; ++VAR_13)
                    FUNC_1(VAR_5, VAR_6, FUNC_0(VAR_13));
            else
                VAR_5->constant_update_mask |= VAR_2;
        }

        VAR_5->constant_update_mask |= VAR_1;




        if (VAR_8->limits.glsl_varyings < FUNC_5(VAR_8)
                || VAR_9 != VAR_5->last_was_normal)
            VAR_5->shader_update_mask |= 1u << VAR_4;

        if (FUNC_3(VAR_6)
                && VAR_6->shader[VAR_3]->reg_maps.shader_version.major == 1
                && VAR_6->shader[VAR_3]->reg_maps.shader_version.minor <= 3)
            VAR_5->shader_update_mask |= 1u << VAR_3;
    }
    else
    {
        if (!VAR_5->last_was_vshader)
        {

            if (VAR_10)
                for (VAR_13 = 0; VAR_13 < VAR_8->limits.user_clip_distances; ++VAR_13)
                    FUNC_1(VAR_5, VAR_6, FUNC_0(VAR_13));
            else
                VAR_5->constant_update_mask |= VAR_2;
        }
    }

    VAR_5->last_was_vshader = FUNC_4(VAR_6);
    VAR_5->last_was_normal = VAR_9;
}
