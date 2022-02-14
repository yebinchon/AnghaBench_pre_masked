
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_timestamp_query {int entry; struct wined3d_context* context; int id; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {int free_timestamp_query_count; int timestamp_queries; int * free_timestamp_queries; struct wined3d_gl_info* gl_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,struct wined3d_context*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(struct wined3d_context *VAR_0, struct wined3d_timestamp_query *VAR_1)
{
    const struct wined3d_gl_info *VAR_2 = VAR_0->gl_info;

    if (VAR_0->free_timestamp_query_count)
    {
        VAR_1->id = VAR_0->free_timestamp_queries[--VAR_0->free_timestamp_query_count];
    }
    else
    {
        FUNC_0(FUNC_3(1, &VAR_1->id));
        FUNC_2("glGenQueries");

        FUNC_1("Allocated timestamp query %u in context %p.\n", VAR_1->id, VAR_0);
    }

    VAR_1->context = VAR_0;
    FUNC_4(&VAR_0->timestamp_queries, &VAR_1->entry);
}
