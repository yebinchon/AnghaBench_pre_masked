
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int glGenerateMipmap; } ;
struct wined3d_gl_info {unsigned int format_count; struct wined3d_format* formats; TYPE_1__ fbo_ops; } ;
struct wined3d_format {int* flags; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct wined3d_gl_info *VAR_3)
{
    unsigned int VAR_4, VAR_5;

    if (!VAR_3->fbo_ops.glGenerateMipmap)
        return;

    for (VAR_4 = 0; VAR_4 < VAR_3->format_count; ++VAR_4)
    {
        struct wined3d_format *VAR_6 = &VAR_3->formats[VAR_4];

        for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_6->flags); ++VAR_5)
            if (!(~VAR_6->flags[VAR_5] & (VAR_2 | VAR_0)))
                VAR_6->flags[VAR_5] |= VAR_1;
    }
}
