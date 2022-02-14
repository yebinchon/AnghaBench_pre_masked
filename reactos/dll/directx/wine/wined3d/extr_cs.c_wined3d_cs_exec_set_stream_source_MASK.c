
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_stream_state {int stride; int offset; struct wined3d_buffer* buffer; } ;
struct wined3d_cs_set_stream_source {size_t stream_idx; struct wined3d_buffer* buffer; int stride; int offset; } ;
struct TYPE_3__ {struct wined3d_stream_state* streams; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;
struct TYPE_4__ {int bind_count; } ;
struct wined3d_buffer {TYPE_2__ resource; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_cs *VAR_1, const void *VAR_2)
{
    const struct wined3d_cs_set_stream_source *VAR_3 = VAR_2;
    struct wined3d_stream_state *VAR_4;
    struct wined3d_buffer *VAR_5;

    VAR_4 = &VAR_1->state.streams[VAR_3->stream_idx];
    VAR_5 = VAR_4->buffer;
    VAR_4->buffer = VAR_3->buffer;
    VAR_4->offset = VAR_3->offset;
    VAR_4->stride = VAR_3->stride;

    if (VAR_3->buffer)
        FUNC_1(&VAR_3->buffer->resource.bind_count);
    if (VAR_5)
        FUNC_0(&VAR_5->resource.bind_count);

    FUNC_2(VAR_1->device, VAR_0);
}
