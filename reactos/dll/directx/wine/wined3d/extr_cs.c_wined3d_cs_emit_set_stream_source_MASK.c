
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_stream_source {void* stride; void* offset; struct wined3d_buffer* buffer; void* stream_idx; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct wined3d_buffer {int dummy; } ;
typedef void* UINT ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_set_stream_source* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_set_stream_source* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2, UINT VAR_3,
        struct wined3d_buffer *VAR_4, UINT VAR_5, UINT VAR_6)
{
    struct wined3d_cs_set_stream_source *VAR_7;

    VAR_7 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_7), VAR_1);
    VAR_7->opcode = VAR_0;
    VAR_7->stream_idx = VAR_3;
    VAR_7->buffer = VAR_4;
    VAR_7->offset = VAR_5;
    VAR_7->stride = VAR_6;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
