
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr; scalar_t__ buffer_object; } ;
struct wined3d_stream_info_element {size_t stream_idx; TYPE_2__ data; } ;
struct wined3d_stream_info {unsigned int use_map; struct wined3d_stream_info_element* elements; } ;
struct wined3d_state {TYPE_1__* streams; } ;
struct wined3d_context {int dummy; } ;
struct wined3d_buffer {int dummy; } ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_3__ {struct wined3d_buffer* buffer; } ;


 unsigned int FUNC_0 (struct wined3d_stream_info_element*) ;
 scalar_t__ FUNC_1 (struct wined3d_buffer*,struct wined3d_context*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_context *VAR_0,
        const struct wined3d_state *VAR_1, struct wined3d_stream_info *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->elements); ++VAR_3)
    {
        struct wined3d_stream_info_element *VAR_4;

        if (!(VAR_2->use_map & (1u << VAR_3)))
            continue;

        VAR_4 = &VAR_2->elements[VAR_3];
        if (VAR_4->data.buffer_object)
        {
            struct wined3d_buffer *VAR_5 = VAR_1->streams[VAR_4->stream_idx].buffer;
            VAR_4->data.buffer_object = 0;
            VAR_4->data.addr += (ULONG_PTR)FUNC_1(VAR_5, VAR_0);
        }
    }
}
