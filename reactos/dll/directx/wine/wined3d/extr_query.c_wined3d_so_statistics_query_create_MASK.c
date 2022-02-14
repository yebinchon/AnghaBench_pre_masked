
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_query {int dummy; } ;
struct wined3d_so_statistics_query {unsigned int stream_idx; struct wined3d_query query; int statistics; } ;
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
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wined3d_so_statistics_query* FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (struct wined3d_query*,struct wined3d_device*,int,int *,int,int *,void*,struct wined3d_parent_ops const*) ;

__attribute__((used)) static HRESULT FUNC_4(struct wined3d_device *VAR_8,
        enum wined3d_query_type VAR_9, void *VAR_10, const struct wined3d_parent_ops *VAR_11,
        struct wined3d_query **VAR_12)
{
    const struct wined3d_gl_info *VAR_13 = &VAR_8->adapter->gl_info;
    struct wined3d_so_statistics_query *VAR_14;
    unsigned int VAR_15;

    if (VAR_5 <= VAR_9 && VAR_9 <= VAR_6)
        VAR_15 = VAR_9 - VAR_5;
    else
        return VAR_2;

    FUNC_0("device %p, type %#x, parent %p, parent_ops %p, query %p.\n",
            VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

    if (!VAR_13->supported[VAR_3])
    {
        FUNC_1("OpenGL implementation does not support primitive queries.\n");
        return VAR_2;
    }
    if (!VAR_13->supported[VAR_0])
    {
        FUNC_1("OpenGL implementation does not support indexed queries.\n");
        return VAR_2;
    }

    if (!(VAR_14 = FUNC_2(sizeof(*VAR_14))))
        return VAR_1;

    FUNC_3(&VAR_14->query, VAR_8, VAR_9, &VAR_14->statistics,
            sizeof(VAR_14->statistics), &VAR_7, VAR_10, VAR_11);
    VAR_14->stream_idx = VAR_15;

    FUNC_0("Created query %p.\n", VAR_14);
    *VAR_12 = &VAR_14->query;

    return VAR_4;
}
