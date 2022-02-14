
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_stream_state {int flags; int frequency; } ;
struct wined3d_cs_set_stream_source_freq {size_t stream_idx; int flags; int frequency; } ;
struct TYPE_2__ {struct wined3d_stream_state* streams; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_cs *VAR_1, const void *VAR_2)
{
    const struct wined3d_cs_set_stream_source_freq *VAR_3 = VAR_2;
    struct wined3d_stream_state *VAR_4;

    VAR_4 = &VAR_1->state.streams[VAR_3->stream_idx];
    VAR_4->frequency = VAR_3->frequency;
    VAR_4->flags = VAR_3->flags;

    FUNC_0(VAR_1->device, VAR_0);
}
