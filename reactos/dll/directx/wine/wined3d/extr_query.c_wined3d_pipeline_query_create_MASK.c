
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_query {int dummy; } ;
struct wined3d_pipeline_statistics_query {struct wined3d_query query; int statistics; } ;
struct wined3d_parent_ops {int dummy; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_device {TYPE_1__* adapter; } ;
typedef enum wined3d_query_type { ____Placeholder_wined3d_query_type } wined3d_query_type ;
struct TYPE_2__ {struct wined3d_gl_info gl_info; } ;
typedef int HRESULT ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct wined3d_pipeline_statistics_query* FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct wined3d_query*,struct wined3d_device*,int,int *,int,int *,void*,struct wined3d_parent_ops const*) ;

__attribute__((used)) static HRESULT FUNC_4(struct wined3d_device *VAR_5,
        enum wined3d_query_type VAR_6, void *VAR_7, const struct wined3d_parent_ops *VAR_8,
        struct wined3d_query **VAR_9)
{
    const struct wined3d_gl_info *VAR_10 = &VAR_5->adapter->gl_info;
    struct wined3d_pipeline_statistics_query *VAR_11;

    FUNC_0("device %p, type %#x, parent %p, parent_ops %p, query %p.\n",
            VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

    if (!VAR_10->supported[VAR_0])
    {
        FUNC_1("OpenGL implementation does not support pipeline statistics queries.\n");
        return VAR_2;
    }

    if (!(VAR_11 = FUNC_2(sizeof(*VAR_11))))
        return VAR_1;

    FUNC_3(&VAR_11->query, VAR_5, VAR_6, &VAR_11->statistics,
            sizeof(VAR_11->statistics), &VAR_4, VAR_7, VAR_8);

    FUNC_0("Created query %p.\n", VAR_11);
    *VAR_9 = &VAR_11->query;

    return VAR_3;
}
