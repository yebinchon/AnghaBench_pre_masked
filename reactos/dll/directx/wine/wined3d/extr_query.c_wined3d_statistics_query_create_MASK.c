
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_query_data_so_statistics {int member_0; int member_1; } ;
struct wined3d_query {int dummy; } ;
struct wined3d_parent_ops {int dummy; } ;
struct wined3d_device {int dummy; } ;
typedef int statistics ;
typedef enum wined3d_query_type { ____Placeholder_wined3d_query_type } wined3d_query_type ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,struct wined3d_device*,int,void*,struct wined3d_query**) ;
 int FUNC_1 () ;
 int VAR_1 ;
 struct wined3d_query* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,struct wined3d_query*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct wined3d_query*,struct wined3d_device*,int,struct wined3d_query_data_so_statistics const*,int,int *,void*,struct wined3d_parent_ops const*) ;

__attribute__((used)) static HRESULT FUNC_5(struct wined3d_device *VAR_4,
        enum wined3d_query_type VAR_5, void *VAR_6, const struct wined3d_parent_ops *VAR_7,
        struct wined3d_query **VAR_8)
{
    static const struct wined3d_query_data_so_statistics VAR_9 = { 1, 1 };
    struct wined3d_query *VAR_10;

    FUNC_0("device %p, type %#x, parent %p, query %p.\n", VAR_4, VAR_5, VAR_6, VAR_8);

    if (!(VAR_10 = FUNC_2(FUNC_1(), VAR_1, sizeof(*VAR_10))))
        return VAR_0;

    FUNC_4(VAR_10, VAR_4, VAR_5, &VAR_9,
            sizeof(VAR_9), &VAR_3, VAR_6, VAR_7);

    FUNC_3("Created query %p.\n", VAR_10);
    *VAR_8 = VAR_10;

    return VAR_2;
}
