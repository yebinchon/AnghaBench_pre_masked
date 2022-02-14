
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_recorder_sink {int proper_eof; int discont; scalar_t__ num_packets; int packets; TYPE_1__* av_stream; struct mp_recorder* owner; } ;
struct mp_recorder {int dts_warning; } ;
struct demux_packet {scalar_t__ dts; int keyframe; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (struct mp_recorder*,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mp_recorder_sink*,int ,scalar_t__,struct demux_packet*) ;
 int FUNC_2 (struct mp_recorder*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct mp_recorder*) ;
 struct demux_packet* FUNC_4 (struct demux_packet*) ;
 int FUNC_5 (struct mp_recorder_sink*,int) ;

void FUNC_6(struct mp_recorder_sink *VAR_2,
                             struct demux_packet *VAR_3)
{
    struct mp_recorder *VAR_4 = VAR_2->owner;

    if (!VAR_3) {
        VAR_2->proper_eof = 1;
        FUNC_3(VAR_4);
        FUNC_5(VAR_2, 0);
        return;
    }

    if (VAR_3->dts == VAR_0 && !VAR_4->dts_warning) {



        FUNC_2(VAR_4, "Source stream misses DTS on at least some packets!\n"
                      "If the target file format requires DTS, the written\n"
                      "file will be invalid.\n");
        VAR_4->dts_warning = 1;
    }

    if (VAR_2->discont && !VAR_3->keyframe)
        return;
    VAR_2->discont = 0;

    if (VAR_2->num_packets >= VAR_1) {
        FUNC_0(VAR_4, "Stream %d has too many queued packets; dropping.\n",
               VAR_2->av_stream->index);
        return;
    }

    VAR_3 = FUNC_4(VAR_3);
    if (!VAR_3)
        return;
    FUNC_1(VAR_2, VAR_2->packets, VAR_2->num_packets, VAR_3);

    FUNC_3(VAR_4);
    FUNC_5(VAR_2, 0);
}
