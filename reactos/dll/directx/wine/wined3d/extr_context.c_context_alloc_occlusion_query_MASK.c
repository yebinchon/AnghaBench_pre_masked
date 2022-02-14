
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_occlusion_query {int entry; struct wined3d_context* context; scalar_t__ id; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_context {int free_occlusion_query_count; int occlusion_queries; scalar_t__* free_occlusion_queries; struct wined3d_gl_info* gl_info; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,struct wined3d_context*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(struct wined3d_context *VAR_1, struct wined3d_occlusion_query *VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_1->gl_info;

    if (VAR_1->free_occlusion_query_count)
    {
        VAR_2->id = VAR_1->free_occlusion_queries[--VAR_1->free_occlusion_query_count];
    }
    else
    {
        if (VAR_3->supported[VAR_0])
        {
            FUNC_0(FUNC_4(1, &VAR_2->id));
            FUNC_3("glGenQueries");

            FUNC_1("Allocated occlusion query %u in context %p.\n", VAR_2->id, VAR_1);
        }
        else
        {
            FUNC_2("Occlusion queries not supported, not allocating query id.\n");
            VAR_2->id = 0;
        }
    }

    VAR_2->context = VAR_1;
    FUNC_5(&VAR_1->occlusion_queries, &VAR_2->entry);
}
