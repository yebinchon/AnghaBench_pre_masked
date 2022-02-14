
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int start_idx; unsigned int count; } ;
struct TYPE_6__ {TYPE_2__ buffer; } ;
struct wined3d_view_desc {scalar_t__ format_id; TYPE_3__ u; } ;
struct wined3d_format {unsigned int byte_count; } ;
struct TYPE_4__ {unsigned int structure_byte_stride; } ;
struct wined3d_buffer {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct wined3d_buffer *VAR_1,
        const struct wined3d_view_desc *VAR_2, const struct wined3d_format *VAR_3,
        unsigned int *VAR_4, unsigned int *VAR_5)
{
    if (VAR_2->format_id == VAR_0)
    {
        *VAR_4 = VAR_2->u.buffer.start_idx * VAR_1->desc.structure_byte_stride;
        *VAR_5 = VAR_2->u.buffer.count * VAR_1->desc.structure_byte_stride;
    }
    else
    {
        *VAR_4 = VAR_2->u.buffer.start_idx * VAR_3->byte_count;
        *VAR_5 = VAR_2->u.buffer.count * VAR_3->byte_count;
    }
}
