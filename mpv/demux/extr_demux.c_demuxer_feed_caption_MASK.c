
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sh_stream {int index; TYPE_1__* ds; } ;
struct demux_internal {int lock; int ts_offset; } ;
struct TYPE_7__ {int keyframe; int stream; void* dts; void* pts; } ;
typedef TYPE_2__ demux_packet_t ;
struct TYPE_6__ {struct demux_internal* in; } ;


 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (struct sh_stream*,TYPE_2__*) ;
 struct sh_stream* FUNC_2 (struct sh_stream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(struct sh_stream *VAR_0, demux_packet_t *VAR_1)
{
    struct demux_internal *VAR_2 = VAR_0->ds->in;

    FUNC_3(&VAR_2->lock);
    struct sh_stream *VAR_3 = FUNC_2(VAR_0);
    if (!VAR_3) {
        FUNC_4(&VAR_2->lock);
        FUNC_5(VAR_1);
        return;
    }

    VAR_1->keyframe = 1;
    VAR_1->pts = FUNC_0(VAR_1->pts, -VAR_2->ts_offset);
    VAR_1->dts = FUNC_0(VAR_1->dts, -VAR_2->ts_offset);
    VAR_1->stream = VAR_3->index;
    FUNC_1(VAR_3, VAR_1);
    FUNC_4(&VAR_2->lock);
}
