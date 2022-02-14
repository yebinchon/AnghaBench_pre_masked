
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {TYPE_3__* adapter; TYPE_1__* shader_backend; int cs; } ;
struct wined3d_context {int destroy_delayed; scalar_t__ tid; int destroyed; struct wined3d_context* texture_type; struct wined3d_gl_info* gl_info; int current; int * swapchain; scalar_t__ level; } ;
struct TYPE_6__ {TYPE_2__* fragment_pipe; } ;
struct TYPE_5__ {int (* free_context_data ) (struct wined3d_context*) ;} ;
struct TYPE_4__ {int (* shader_free_context_data ) (struct wined3d_context*) ;} ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,struct wined3d_context*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct wined3d_context*) ;
 int FUNC_4 (struct wined3d_device*,struct wined3d_context*) ;
 struct wined3d_gl_info* FUNC_5 (int) ;
 int FUNC_6 (struct wined3d_context*) ;
 int FUNC_7 (struct wined3d_context*) ;
 int FUNC_8 (struct wined3d_context*) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;

void FUNC_10(struct wined3d_device *VAR_3, struct wined3d_context *VAR_4)
{
    BOOL VAR_5;

    FUNC_1("Destroying ctx %p\n", VAR_4);

    FUNC_9(VAR_3->cs);



    if (VAR_4->level)
    {
        FUNC_1("Delaying destruction of context %p.\n", VAR_4);
        VAR_4->destroy_delayed = 1;

        VAR_4->swapchain = ((void*)0);
        return;
    }

    if (VAR_4->tid == FUNC_0() || !VAR_4->current)
    {
        FUNC_3(VAR_4);
        FUNC_2(VAR_2, ((void*)0));
        VAR_5 = VAR_1;
    }
    else
    {


        struct wined3d_gl_info *VAR_6 = FUNC_5(sizeof(*VAR_6));
        *VAR_6 = *VAR_4->gl_info;
        VAR_4->gl_info = VAR_6;
        VAR_4->destroyed = 1;
        VAR_5 = VAR_0;
    }

    VAR_3->shader_backend->shader_free_context_data(VAR_4);
    VAR_3->adapter->fragment_pipe->free_context_data(VAR_4);
    FUNC_6(VAR_4->texture_type);
    FUNC_4(VAR_3, VAR_4);
    if (VAR_5)
        FUNC_6(VAR_4);
}
