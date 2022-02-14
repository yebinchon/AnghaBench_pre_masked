
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_query {int dummy; } ;
struct wined3d_parent_ops {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_event_query {struct wined3d_query query; int signalled; int fence; } ;
struct wined3d_device {TYPE_1__* adapter; } ;
typedef enum wined3d_query_type { ____Placeholder_wined3d_query_type } wined3d_query_type ;
struct TYPE_2__ {struct wined3d_gl_info gl_info; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct wined3d_event_query* FUNC_3 (int) ;
 int FUNC_4 (struct wined3d_event_query*) ;
 int FUNC_5 (int *,struct wined3d_gl_info const*) ;
 int FUNC_6 (struct wined3d_query*,struct wined3d_device*,int,int *,int,int *,void*,struct wined3d_parent_ops const*) ;

__attribute__((used)) static HRESULT FUNC_7(struct wined3d_device *VAR_3,
        enum wined3d_query_type VAR_4, void *VAR_5, const struct wined3d_parent_ops *VAR_6,
        struct wined3d_query **VAR_7)
{
    const struct wined3d_gl_info *VAR_8 = &VAR_3->adapter->gl_info;
    struct wined3d_event_query *VAR_9;
    HRESULT VAR_10;

    FUNC_1("device %p, type %#x, parent %p, parent_ops %p, query %p.\n",
            VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    if (!(VAR_9 = FUNC_3(sizeof(*VAR_9))))
        return VAR_0;

    if (FUNC_0(VAR_10 = FUNC_5(&VAR_9->fence, VAR_8)))
    {
        FUNC_2("Event queries not supported.\n");
        FUNC_4(VAR_9);
        return VAR_10;
    }

    FUNC_6(&VAR_9->query, VAR_3, VAR_4, &VAR_9->signalled,
            sizeof(VAR_9->signalled), &VAR_2, VAR_5, VAR_6);

    FUNC_1("Created query %p.\n", VAR_9);
    *VAR_7 = &VAR_9->query;

    return VAR_1;
}
