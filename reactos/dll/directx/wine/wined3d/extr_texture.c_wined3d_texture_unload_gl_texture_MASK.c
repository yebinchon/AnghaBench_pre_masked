
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct wined3d_device* device; } ;
struct TYPE_6__ {scalar_t__ name; } ;
struct wined3d_texture {TYPE_2__ resource; scalar_t__ rb_resolved; scalar_t__ rb_multisample; TYPE_3__ texture_srgb; TYPE_3__ texture_rgb; } ;
struct TYPE_4__ {int (* glDeleteRenderbuffers ) (int,scalar_t__*) ;} ;
struct wined3d_gl_info {TYPE_1__ fbo_ops; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 struct wined3d_context* FUNC_1 (struct wined3d_device*,int *,int ) ;
 int FUNC_2 (struct wined3d_device*,scalar_t__,int ) ;
 int FUNC_3 (struct wined3d_context*) ;
 int FUNC_4 (struct wined3d_device*,struct wined3d_gl_info*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int,scalar_t__*) ;
 int FUNC_7 (int,scalar_t__*) ;
 int FUNC_8 (struct wined3d_texture*) ;

__attribute__((used)) static void FUNC_9(struct wined3d_texture *VAR_1)
{
    struct wined3d_device *VAR_2 = VAR_1->resource.device;
    const struct wined3d_gl_info *VAR_3 = ((void*)0);
    struct wined3d_context *VAR_4 = ((void*)0);

    if (VAR_1->texture_rgb.name || VAR_1->texture_srgb.name
            || VAR_1->rb_multisample || VAR_1->rb_resolved)
    {
        VAR_4 = FUNC_1(VAR_2, ((void*)0), 0);
        VAR_3 = VAR_4->gl_info;
    }

    if (VAR_1->texture_rgb.name)
        FUNC_4(VAR_2, VAR_4->gl_info, &VAR_1->texture_rgb);

    if (VAR_1->texture_srgb.name)
        FUNC_4(VAR_2, VAR_4->gl_info, &VAR_1->texture_srgb);

    if (VAR_1->rb_multisample)
    {
        FUNC_0("Deleting multisample renderbuffer %u.\n", VAR_1->rb_multisample);
        FUNC_2(VAR_2, VAR_1->rb_multisample, VAR_0);
        VAR_3->fbo_ops.glDeleteRenderbuffers(1, &VAR_1->rb_multisample);
        VAR_1->rb_multisample = 0;
    }

    if (VAR_1->rb_resolved)
    {
        FUNC_0("Deleting resolved renderbuffer %u.\n", VAR_1->rb_resolved);
        FUNC_2(VAR_2, VAR_1->rb_resolved, VAR_0);
        VAR_3->fbo_ops.glDeleteRenderbuffers(1, &VAR_1->rb_resolved);
        VAR_1->rb_resolved = 0;
    }

    if (VAR_4) FUNC_3(VAR_4);

    FUNC_8(VAR_1);

    FUNC_5(&VAR_1->resource);
}
