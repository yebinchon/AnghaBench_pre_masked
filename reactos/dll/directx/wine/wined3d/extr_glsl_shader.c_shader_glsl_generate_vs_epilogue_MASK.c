
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct TYPE_3__ {int major; } ;
struct wined3d_shader_reg_maps {int fog; TYPE_1__ shader_version; } ;
struct wined3d_shader {struct wined3d_shader_reg_maps reg_maps; } ;
struct TYPE_4__ {unsigned int user_clip_distances; } ;
struct wined3d_gl_info {int * supported; TYPE_2__ limits; } ;
struct vs_compile_args {scalar_t__ fog_src; scalar_t__ next_shader_type; int per_vertex_point_size; scalar_t__ point_size; scalar_t__ clip_enabled; } ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct wined3d_gl_info const*) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_string_buffer*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_gl_info *VAR_3,
        struct wined3d_string_buffer *VAR_4, const struct wined3d_shader *VAR_5,
        const struct vs_compile_args *VAR_6)
{
    const struct wined3d_shader_reg_maps *VAR_7 = &VAR_5->reg_maps;
    const BOOL VAR_8 = FUNC_0(VAR_3);
    unsigned int VAR_9;


    FUNC_1(VAR_4, "setup_vs_output(vs_out);\n");






    if (VAR_7->shader_version.major < 3)
    {
        if (VAR_6->fog_src == VAR_1)
            FUNC_1(VAR_4, "%s = gl_Position.z;\n",
                    VAR_8 ? "gl_FogFragCoord" : "ffp_varying_fogcoord");
        else if (!VAR_7->fog)
            FUNC_1(VAR_4, "%s = 0.0;\n",
                    VAR_8 ? "gl_FogFragCoord" : "ffp_varying_fogcoord");
    }


    if (VAR_6->clip_enabled)
    {
        if (VAR_8)
            FUNC_1(VAR_4, "gl_ClipVertex = gl_Position;\n");
        else
            for (VAR_9 = 0; VAR_9 < VAR_3->limits.user_clip_distances; ++VAR_9)
                FUNC_1(VAR_4, "gl_ClipDistance[%u] = dot(gl_Position, clip_planes[%u]);\n", VAR_9, VAR_9);
    }

    if (VAR_6->point_size && !VAR_6->per_vertex_point_size)
        FUNC_1(VAR_4, "gl_PointSize = clamp(ffp_point.size, ffp_point.size_min, ffp_point.size_max);\n");

    if (VAR_6->next_shader_type == VAR_2 && !VAR_3->supported[VAR_0])
        FUNC_2(VAR_4);
}
