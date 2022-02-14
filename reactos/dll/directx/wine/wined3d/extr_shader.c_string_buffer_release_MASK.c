
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer_list {int list; } ;
struct wined3d_string_buffer {int entry; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct wined3d_string_buffer_list *VAR_0, struct wined3d_string_buffer *VAR_1)
{
    if (!VAR_1)
        return;
    FUNC_0(&VAR_0->list, &VAR_1->entry);
}
