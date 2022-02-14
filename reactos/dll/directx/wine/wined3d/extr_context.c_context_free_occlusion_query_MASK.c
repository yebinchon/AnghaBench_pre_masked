
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_occlusion_query {int id; struct wined3d_context* context; int entry; } ;
struct wined3d_context {scalar_t__ free_occlusion_query_count; int * free_occlusion_queries; int free_occlusion_query_size; } ;


 int FUNC_0 (char*,int ,struct wined3d_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void**,int *,scalar_t__,int) ;

void FUNC_3(struct wined3d_occlusion_query *VAR_0)
{
    struct wined3d_context *VAR_1 = VAR_0->context;

    FUNC_1(&VAR_0->entry);
    VAR_0->context = ((void*)0);

    if (!FUNC_2((void **)&VAR_1->free_occlusion_queries,
            &VAR_1->free_occlusion_query_size, VAR_1->free_occlusion_query_count + 1,
            sizeof(*VAR_1->free_occlusion_queries)))
    {
        FUNC_0("Failed to grow free list, leaking query %u in context %p.\n", VAR_0->id, VAR_1);
        return;
    }

    VAR_1->free_occlusion_queries[VAR_1->free_occlusion_query_count++] = VAR_0->id;
}
