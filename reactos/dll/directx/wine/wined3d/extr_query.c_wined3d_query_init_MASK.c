
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_query_ops {int dummy; } ;
struct wined3d_query {int ref; int type; int poll_list_entry; struct wined3d_query_ops const* query_ops; int data_size; void const* data; int state; struct wined3d_device* device; struct wined3d_parent_ops const* parent_ops; void* parent; } ;
struct wined3d_parent_ops {int dummy; } ;
struct wined3d_device {int dummy; } ;
typedef enum wined3d_query_type { ____Placeholder_wined3d_query_type } wined3d_query_type ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct wined3d_query *VAR_1, struct wined3d_device *VAR_2,
        enum wined3d_query_type VAR_3, const void *VAR_4, DWORD VAR_5,
        const struct wined3d_query_ops *VAR_6, void *VAR_7, const struct wined3d_parent_ops *VAR_8)
{
    VAR_1->ref = 1;
    VAR_1->parent = VAR_7;
    VAR_1->parent_ops = VAR_8;
    VAR_1->device = VAR_2;
    VAR_1->state = VAR_0;
    VAR_1->type = VAR_3;
    VAR_1->data = VAR_4;
    VAR_1->data_size = VAR_5;
    VAR_1->query_ops = VAR_6;
    FUNC_0(&VAR_1->poll_list_entry);
}
