
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_gl_info {int * supported; } ;
struct wined3d_device {int * shader_backend; TYPE_1__* adapter; } ;
struct wined3d_blitter {struct wined3d_blitter* next; int * ops; } ;
struct wined3d_arbfp_blitter {struct wined3d_blitter blitter; scalar_t__ palette_texture; int shaders; } ;
struct TYPE_2__ {struct wined3d_gl_info gl_info; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct wined3d_arbfp_blitter*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wined3d_arbfp_blitter* FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct wined3d_blitter **VAR_6, const struct wined3d_device *VAR_7)
{
    const struct wined3d_gl_info *VAR_8 = &VAR_7->adapter->gl_info;
    struct wined3d_arbfp_blitter *VAR_9;

    if (VAR_7->shader_backend != &VAR_2
            && VAR_7->shader_backend != &VAR_5)
        return;

    if (!VAR_8->supported[VAR_0])
        return;

    if (!VAR_8->supported[VAR_1])
        return;

    if (!(VAR_9 = FUNC_2(sizeof(*VAR_9))))
    {
        FUNC_0("Failed to allocate blitter.\n");
        return;
    }

    FUNC_1("Created blitter %p.\n", VAR_9);

    VAR_9->blitter.ops = &VAR_4;
    VAR_9->blitter.next = *VAR_6;
    FUNC_3(&VAR_9->shaders, VAR_3);
    VAR_9->palette_texture = 0;
    *VAR_6 = &VAR_9->blitter;
}
