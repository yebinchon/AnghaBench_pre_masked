
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct wined3d_pipeline_statistics_query {int entry; struct wined3d_context* context; TYPE_1__ u; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {int free_pipeline_statistics_query_count; int pipeline_statistics_queries; TYPE_1__* free_pipeline_statistics_queries; struct wined3d_gl_info* gl_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(struct wined3d_context *VAR_0,
        struct wined3d_pipeline_statistics_query *VAR_1)
{
    const struct wined3d_gl_info *VAR_2 = VAR_0->gl_info;

    if (VAR_0->free_pipeline_statistics_query_count)
    {
        VAR_1->u = VAR_0->free_pipeline_statistics_queries[--VAR_0->free_pipeline_statistics_query_count];
    }
    else
    {
        FUNC_1(FUNC_3(FUNC_0(VAR_1->u.id), VAR_1->u.id));
        FUNC_2("glGenQueries");
    }

    VAR_1->context = VAR_0;
    FUNC_4(&VAR_0->pipeline_statistics_queries, &VAR_1->entry);
}
