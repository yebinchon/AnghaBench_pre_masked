
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_unordered_access_view {int resource; } ;
struct wined3d_cs_clear_unordered_access_view {int clear_value; struct wined3d_unordered_access_view* view; } ;
struct wined3d_cs {int device; } ;
struct wined3d_context {int dummy; } ;


 struct wined3d_context* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct wined3d_context*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wined3d_unordered_access_view*,int *,struct wined3d_context*) ;

__attribute__((used)) static void FUNC_4(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_clear_unordered_access_view *VAR_2 = VAR_1;
    struct wined3d_unordered_access_view *VAR_3 = VAR_2->view;
    struct wined3d_context *VAR_4;

    VAR_4 = FUNC_0(VAR_0->device, ((void*)0), 0);
    FUNC_3(VAR_3, &VAR_2->clear_value, VAR_4);
    FUNC_1(VAR_4);

    FUNC_2(VAR_3->resource);
}
