
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_gl_info {scalar_t__* supported; } ;
struct TYPE_2__ {int id; int * sync; } ;
struct wined3d_fence {int entry; struct wined3d_context* context; TYPE_1__ object; } ;
struct wined3d_context {int free_fence_count; int fences; TYPE_1__* free_fences; struct wined3d_gl_info* gl_info; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 size_t VAR_2 ;
 int FUNC_1 (char*,struct wined3d_context*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int *,int *) ;

void FUNC_7(struct wined3d_context *VAR_3, struct wined3d_fence *VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_3->gl_info;

    if (VAR_3->free_fence_count)
    {
        VAR_4->object = VAR_3->free_fences[--VAR_3->free_fence_count];
    }
    else
    {
        if (VAR_5->supported[VAR_1])
        {

            VAR_4->object.sync = ((void*)0);
            FUNC_1("Allocated sync object in context %p.\n", VAR_3);
        }
        else if (VAR_5->supported[VAR_0])
        {
            FUNC_0(FUNC_4(1, &VAR_4->object.id));
            FUNC_3("glGenFencesAPPLE");

            FUNC_1("Allocated fence %u in context %p.\n", VAR_4->object.id, VAR_3);
        }
        else if(VAR_5->supported[VAR_2])
        {
            FUNC_0(FUNC_5(1, &VAR_4->object.id));
            FUNC_3("glGenFencesNV");

            FUNC_1("Allocated fence %u in context %p.\n", VAR_4->object.id, VAR_3);
        }
        else
        {
            FUNC_2("Fences not supported, not allocating fence.\n");
            VAR_4->object.id = 0;
        }
    }

    VAR_4->context = VAR_3;
    FUNC_6(&VAR_3->fences, &VAR_4->entry);
}
