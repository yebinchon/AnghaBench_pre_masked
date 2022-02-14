
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct wined3d_format* format; } ;
struct wined3d_texture {TYPE_3__ resource; } ;
struct TYPE_4__ {int (* p_glGetTexImage ) (int ,unsigned int,int ,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
struct wined3d_format {int glType; int glFormat; int id; scalar_t__ conv_byte_count; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_bo_address {scalar_t__ buffer_object; int addr; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,unsigned int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct wined3d_texture *VAR_2, unsigned int VAR_3,
        const struct wined3d_context *VAR_4, const struct wined3d_bo_address *VAR_5)
{
    const struct wined3d_format *VAR_6 = VAR_2->resource.format;
    const struct wined3d_gl_info *VAR_7 = VAR_4->gl_info;

    if (VAR_6->conv_byte_count)
    {
        FUNC_0("Attempting to download a converted volume, format %s.\n",
                FUNC_3(VAR_6->id));
        return;
    }

    if (VAR_5->buffer_object)
    {
        FUNC_1(FUNC_4(VAR_0, VAR_5->buffer_object));
        FUNC_2("glBindBuffer");
    }

    VAR_7->gl_ops.gl.p_glGetTexImage(VAR_1, VAR_3,
            VAR_6->glFormat, VAR_6->glType, VAR_5->addr);
    FUNC_2("glGetTexImage");

    if (VAR_5->buffer_object)
    {
        FUNC_1(FUNC_4(VAR_0, 0));
        FUNC_2("glBindBuffer");
    }

}
