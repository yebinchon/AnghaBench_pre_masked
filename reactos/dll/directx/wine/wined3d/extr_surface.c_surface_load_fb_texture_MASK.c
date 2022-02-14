
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct wined3d_device* device; } ;
struct wined3d_texture {unsigned int level_count; TYPE_3__ resource; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct TYPE_4__ {int (* p_glCopyTexSubImage2D ) (int ,unsigned int,int ,int ,int ,int ,int ,int ) ;int (* p_glReadBuffer ) (int ) ;} ;
struct TYPE_5__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int GLenum ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,struct wined3d_surface*) ;
 int FUNC_1 (char*) ;
 struct wined3d_context* FUNC_2 (struct wined3d_device*,struct wined3d_texture*,unsigned int) ;
 int FUNC_3 (struct wined3d_context*) ;
 struct wined3d_surface* FUNC_4 (struct wined3d_context*) ;
 int FUNC_5 (struct wined3d_context*,struct wined3d_surface*) ;
 int FUNC_6 (struct wined3d_device*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,unsigned int,int ,int ,int ,int ,int ,int ) ;
 unsigned int FUNC_10 (struct wined3d_surface*) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 int FUNC_13 (struct wined3d_texture*) ;
 int FUNC_14 (struct wined3d_texture*,unsigned int) ;
 int FUNC_15 (struct wined3d_texture*,unsigned int) ;
 int FUNC_16 (struct wined3d_texture*,unsigned int) ;
 int FUNC_17 (struct wined3d_texture*,struct wined3d_context*,int ) ;

void FUNC_18(struct wined3d_surface *VAR_1, BOOL VAR_2, struct wined3d_context *VAR_3)
{
    unsigned int VAR_4 = FUNC_10(VAR_1);
    struct wined3d_texture *VAR_5 = VAR_1->container;
    struct wined3d_device *VAR_6 = VAR_5->resource.device;
    const struct wined3d_gl_info *VAR_7;
    struct wined3d_context *VAR_8 = VAR_3;
    struct wined3d_surface *VAR_9 = ((void*)0);
    unsigned int VAR_10;
    GLenum VAR_11;

    VAR_9 = FUNC_4(VAR_3);
    if (VAR_9 != VAR_1)
        VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_4);
    else
        VAR_9 = ((void*)0);

    VAR_7 = VAR_8->gl_info;
    FUNC_6(VAR_6, VAR_0);

    FUNC_17(VAR_5, VAR_8, VAR_2);
    FUNC_12(VAR_5, VAR_8, VAR_2);

    FUNC_0("Reading back offscreen render target %p.\n", VAR_1);

    if (FUNC_11(&VAR_5->resource))
        VAR_7->gl_ops.gl.p_glReadBuffer(FUNC_3(VAR_8));
    else
        VAR_7->gl_ops.gl.p_glReadBuffer(FUNC_13(VAR_5));
    FUNC_1("glReadBuffer");

    VAR_10 = VAR_4 % VAR_5->level_count;
    VAR_11 = FUNC_16(VAR_5, VAR_4);
    VAR_7->gl_ops.gl.p_glCopyTexSubImage2D(VAR_11, VAR_10, 0, 0, 0, 0,
            FUNC_15(VAR_5, VAR_10),
            FUNC_14(VAR_5, VAR_10));
    FUNC_1("glCopyTexSubImage2D");

    if (VAR_9)
        FUNC_5(VAR_8, VAR_9);
}
