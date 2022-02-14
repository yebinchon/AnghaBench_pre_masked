
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {unsigned int format_count; struct wined3d_format* formats; } ;
struct wined3d_format {int* flags; unsigned int depth_bias_scale; unsigned int depth_size; int glInternal; int id; } ;
struct wined3d_d3d_info {int wined3d_creation_flags; } ;
struct wined3d_caps_gl_ctx {struct wined3d_gl_info* gl_info; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct wined3d_caps_gl_ctx*,int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_caps_gl_ctx *VAR_5,
        const struct wined3d_d3d_info *VAR_6)
{
    const struct wined3d_gl_info *VAR_7 = VAR_5->gl_info;
    unsigned int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_7->format_count; ++VAR_8)
    {
        struct wined3d_format *VAR_9 = &VAR_7->formats[VAR_8];

        if (VAR_9->flags[VAR_2] & VAR_0)
        {
            FUNC_0("Testing depth bias scale for format %s.\n", FUNC_1(VAR_9->id));
            VAR_9->depth_bias_scale = FUNC_2(VAR_5, VAR_9->glInternal);

            if (!(VAR_6->wined3d_creation_flags & VAR_4))
            {



                if (VAR_9->flags[VAR_3] & VAR_1)
                    VAR_9->depth_bias_scale /= 1u << 24;
                else
                    VAR_9->depth_bias_scale /= 1u << VAR_9->depth_size;
            }
        }
    }
}
