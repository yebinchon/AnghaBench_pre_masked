
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_cs {int device; } ;
struct wined3d_context {TYPE_3__* gl_info; scalar_t__ valid; } ;
struct TYPE_4__ {int (* p_glFlush ) () ;} ;
struct TYPE_5__ {TYPE_1__ gl; } ;
struct TYPE_6__ {TYPE_2__ gl_ops; } ;


 struct wined3d_context* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct wined3d_context*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    struct wined3d_context *VAR_2;

    VAR_2 = FUNC_0(VAR_0->device, ((void*)0), 0);
    if (VAR_2->valid)
        VAR_2->gl_info->gl_ops.gl.p_glFlush();
    FUNC_1(VAR_2);
}
