
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mp_recorder_sink {TYPE_2__* sh; TYPE_1__* av_stream; int max_out_pts; struct mp_recorder* owner; } ;
struct mp_recorder {double rebase_ts; double base_ts; int mux; } ;
struct demux_packet {void* pts; void* dts; } ;
struct TYPE_10__ {scalar_t__ duration; int stream_index; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int index; int time_base; } ;
typedef TYPE_3__ AVPacket ;


 void* FUNC_0 (void*,double) ;
 int FUNC_1 (struct mp_recorder*,char*) ;
 int FUNC_2 (int ,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct demux_packet*,int *) ;

__attribute__((used)) static void FUNC_6(struct mp_recorder_sink *VAR_1,
                       struct demux_packet *VAR_2)
{
    struct mp_recorder *VAR_3 = VAR_1->owner;
    struct demux_packet VAR_4 = *VAR_2;

    double VAR_5 = VAR_3->rebase_ts - VAR_3->base_ts;
    VAR_4.pts = FUNC_0(VAR_4.pts, VAR_5);
    VAR_4.dts = FUNC_0(VAR_4.dts, VAR_5);

    VAR_1->max_out_pts = FUNC_2(VAR_1->max_out_pts, VAR_2->pts);

    AVPacket VAR_6;
    FUNC_5(&VAR_6, &VAR_4, &VAR_1->av_stream->time_base);

    VAR_6.stream_index = VAR_1->av_stream->index;

    if (VAR_6.duration < 0 && VAR_1->sh->type != VAR_0)
        VAR_6.duration = 0;

    AVPacket *VAR_7 = FUNC_4(&VAR_6);
    if (!VAR_7) {
        FUNC_1(VAR_3, "Failed to allocate packet.\n");
        return;
    }

    if (FUNC_3(VAR_3->mux, VAR_7) < 0)
        FUNC_1(VAR_3, "Failed writing packet.\n");
}
