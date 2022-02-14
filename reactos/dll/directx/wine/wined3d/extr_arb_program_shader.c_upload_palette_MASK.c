
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_texture {TYPE_1__* swapchain; } ;
struct wined3d_palette {int const* colors; } ;
struct TYPE_5__ {int (* p_glTexImage1D ) (int ,int ,int ,int,int ,int ,int ,int const*) ;int (* p_glTexParameteri ) (int ,int ,int ) ;int (* p_glTexEnvi ) (int ,int ,int ) ;int (* p_glBindTexture ) (int ,int ) ;int (* p_glGenTextures ) (int,int *) ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_arbfp_blitter {int palette_texture; } ;
struct TYPE_4__ {struct wined3d_palette* palette; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct wined3d_context*,struct wined3d_gl_info const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int,int ,int ,int ,int const*) ;
 int FUNC_11 (int ,int ,int ,int,int ,int ,int ,int const*) ;

__attribute__((used)) static void FUNC_12(struct wined3d_arbfp_blitter *VAR_13,
        const struct wined3d_texture *VAR_14, struct wined3d_context *VAR_15)
{
    const struct wined3d_palette *VAR_16 = VAR_14->swapchain ? VAR_14->swapchain->palette : ((void*)0);
    const struct wined3d_gl_info *VAR_17 = VAR_15->gl_info;

    if (!VAR_13->palette_texture)
        VAR_17->gl_ops.gl.p_glGenTextures(1, &VAR_13->palette_texture);

    FUNC_1(FUNC_3(VAR_5));
    VAR_17->gl_ops.gl.p_glBindTexture(VAR_6, VAR_13->palette_texture);

    VAR_17->gl_ops.gl.p_glTexEnvi(VAR_7, VAR_8, VAR_3);

    VAR_17->gl_ops.gl.p_glTexParameteri(VAR_6, VAR_10, VAR_2);

    VAR_17->gl_ops.gl.p_glTexParameteri(VAR_6, VAR_9, VAR_2);
    VAR_17->gl_ops.gl.p_glTexParameteri(VAR_6, VAR_11, VAR_1);

    if (VAR_16)
    {
        VAR_17->gl_ops.gl.p_glTexImage1D(VAR_6, 0, VAR_4, 256, 0, VAR_0,
                VAR_12, VAR_16->colors);
    }
    else
    {
        static const DWORD VAR_18;
        FUNC_0("P8 surface loaded without a palette.\n");
        VAR_17->gl_ops.gl.p_glTexImage1D(VAR_6, 0, VAR_4, 1, 0, VAR_0,
                VAR_12, &VAR_18);
    }


    FUNC_2(VAR_15, VAR_17, 0);
}
