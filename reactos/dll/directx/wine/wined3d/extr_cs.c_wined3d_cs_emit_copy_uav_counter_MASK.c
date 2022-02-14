
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_unordered_access_view {int * resource; } ;
struct wined3d_cs_copy_uav_counter {unsigned int offset; struct wined3d_unordered_access_view* view; struct wined3d_buffer* buffer; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct wined3d_buffer {int resource; } ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_copy_uav_counter* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_copy_uav_counter* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct wined3d_cs *VAR_2, struct wined3d_buffer *VAR_3,
        unsigned int VAR_4, struct wined3d_unordered_access_view *VAR_5)
{
    struct wined3d_cs_copy_uav_counter *VAR_6;

    VAR_6 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_6), VAR_1);
    VAR_6->opcode = VAR_0;
    VAR_6->buffer = VAR_3;
    VAR_6->offset = VAR_4;
    VAR_6->view = VAR_5;

    FUNC_2(&VAR_3->resource);
    FUNC_2(VAR_5->resource);

    VAR_2->ops->submit(VAR_2, VAR_1);
}
