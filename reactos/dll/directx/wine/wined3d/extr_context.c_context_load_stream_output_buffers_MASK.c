
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {TYPE_1__* stream_output; } ;
struct wined3d_context {int dummy; } ;
struct wined3d_buffer {int dummy; } ;
struct TYPE_2__ {struct wined3d_buffer* buffer; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct wined3d_buffer*,int ) ;
 int FUNC_2 (struct wined3d_buffer*,struct wined3d_context*,struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->stream_output); ++VAR_3)
    {
        struct wined3d_buffer *VAR_4;
        if (!(VAR_4 = VAR_2->stream_output[VAR_3].buffer))
            continue;

        FUNC_2(VAR_4, VAR_1, VAR_2);
        FUNC_1(VAR_4, ~VAR_0);
    }
}
