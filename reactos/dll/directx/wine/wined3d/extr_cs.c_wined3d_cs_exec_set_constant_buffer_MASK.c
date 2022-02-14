
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_cs_set_constant_buffer {size_t type; size_t cb_idx; struct wined3d_buffer* buffer; } ;
struct TYPE_3__ {struct wined3d_buffer*** cb; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;
struct TYPE_4__ {int bind_count; } ;
struct wined3d_buffer {TYPE_2__ resource; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_set_constant_buffer *VAR_2 = VAR_1;
    struct wined3d_buffer *VAR_3;

    VAR_3 = VAR_0->state.cb[VAR_2->type][VAR_2->cb_idx];
    VAR_0->state.cb[VAR_2->type][VAR_2->cb_idx] = VAR_2->buffer;

    if (VAR_2->buffer)
        FUNC_1(&VAR_2->buffer->resource.bind_count);
    if (VAR_3)
        FUNC_0(&VAR_3->resource.bind_count);

    FUNC_3(VAR_0->device, FUNC_2(VAR_2->type));
}
