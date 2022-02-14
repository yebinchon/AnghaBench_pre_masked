
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_stream_source_freq {void* flags; void* frequency; void* stream_idx; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
typedef void* UINT ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_set_stream_source_freq* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_set_stream_source_freq* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5)
{
    struct wined3d_cs_set_stream_source_freq *VAR_6;

    VAR_6 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_6), VAR_1);
    VAR_6->opcode = VAR_0;
    VAR_6->stream_idx = VAR_3;
    VAR_6->frequency = VAR_4;
    VAR_6->flags = VAR_5;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
