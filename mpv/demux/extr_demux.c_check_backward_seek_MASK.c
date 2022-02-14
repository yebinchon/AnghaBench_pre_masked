
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_stream {scalar_t__ back_need_recheck; } ;
struct demux_internal {int back_any_need_recheck; int num_streams; TYPE_1__** streams; } ;
struct TYPE_2__ {struct demux_stream* ds; } ;


 int FUNC_0 (struct demux_stream*) ;

__attribute__((used)) static void FUNC_1(struct demux_internal *VAR_0)
{
    VAR_0->back_any_need_recheck = 0;

    for (int VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++) {
        struct demux_stream *VAR_2 = VAR_0->streams[VAR_1]->ds;

        if (VAR_2->back_need_recheck)
            FUNC_0(VAR_2);
    }
}
