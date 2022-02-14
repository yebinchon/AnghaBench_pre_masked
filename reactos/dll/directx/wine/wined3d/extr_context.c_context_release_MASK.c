
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {int needs_set; int device; scalar_t__ destroy_delayed; int * restore_dc; int * restore_ctx; int gl_info; int level; } ;


 int FUNC_0 (char*,struct wined3d_context*,...) ;
 int FUNC_1 (char*,struct wined3d_context*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct wined3d_context*) ;
 struct wined3d_context* FUNC_4 () ;
 int FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (struct wined3d_context*) ;
 int VAR_0 ;

void FUNC_7(struct wined3d_context *VAR_1)
{
    FUNC_0("Releasing context %p, level %u.\n", VAR_1, VAR_1->level);

    if (FUNC_2(VAR_0))
    {
        if (!VAR_1->level)
            FUNC_1("Context %p is not active.\n", VAR_1);
        else if (VAR_1 != FUNC_4())
            FUNC_1("Context %p is not the current context.\n", VAR_1);
    }

    if (!--VAR_1->level)
    {
        if (FUNC_6(VAR_1))
            VAR_1->needs_set = 1;
        if (VAR_1->restore_ctx)
        {
            FUNC_0("Restoring GL context %p on device context %p.\n", VAR_1->restore_ctx, VAR_1->restore_dc);
            FUNC_5(VAR_1->gl_info, VAR_1->restore_dc, VAR_1->restore_ctx);
            VAR_1->restore_ctx = ((void*)0);
            VAR_1->restore_dc = ((void*)0);
        }

        if (VAR_1->destroy_delayed)
        {
            FUNC_0("Destroying context %p.\n", VAR_1);
            FUNC_3(VAR_1->device, VAR_1);
        }
    }
}
