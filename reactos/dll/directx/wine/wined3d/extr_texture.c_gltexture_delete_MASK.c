
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* p_glDeleteTextures ) (int,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
struct wined3d_device {int dummy; } ;
struct gl_texture {scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_device*,scalar_t__,int ) ;
 int FUNC_1 (int,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_device *VAR_1, const struct wined3d_gl_info *VAR_2,
        struct gl_texture *VAR_3)
{
    FUNC_0(VAR_1, VAR_3->name, VAR_0);
    VAR_2->gl_ops.gl.p_glDeleteTextures(1, &VAR_3->name);
    VAR_3->name = 0;
}
