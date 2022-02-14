
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_cs_set_index_buffer {struct wined3d_buffer* buffer; int offset; int format_id; } ;
struct TYPE_4__ {int index_offset; int index_format; struct wined3d_buffer* index_buffer; } ;
struct wined3d_cs {int device; TYPE_2__ state; } ;
struct TYPE_3__ {int bind_count; } ;
struct wined3d_buffer {TYPE_1__ resource; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_cs *VAR_1, const void *VAR_2)
{
    const struct wined3d_cs_set_index_buffer *VAR_3 = VAR_2;
    struct wined3d_buffer *VAR_4;

    VAR_4 = VAR_1->state.index_buffer;
    VAR_1->state.index_buffer = VAR_3->buffer;
    VAR_1->state.index_format = VAR_3->format_id;
    VAR_1->state.index_offset = VAR_3->offset;

    if (VAR_3->buffer)
        FUNC_1(&VAR_3->buffer->resource.bind_count);
    if (VAR_4)
        FUNC_0(&VAR_4->resource.bind_count);

    FUNC_2(VAR_1->device, VAR_0);
}
