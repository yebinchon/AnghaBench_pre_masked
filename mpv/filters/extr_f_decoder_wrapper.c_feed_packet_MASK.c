
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ type; struct demux_packet* data; } ;
struct TYPE_13__ {scalar_t__ play_dir; scalar_t__ recorder_sink; scalar_t__ attempt_framedrops; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct priv {double start_pts; double start; int has_broken_packet_pts; double first_packet_pdts; int preroll_discard; int packet_fed; int packets_without_output; TYPE_6__ packet; TYPE_4__* decoder; TYPE_3__* codec; TYPE_2__ public; struct demux_packet* new_segment; int f; int demux; TYPE_1__ decoded_coverart; } ;
struct demux_packet {double pts; double dts; scalar_t__ back_preroll; } ;
struct TYPE_16__ {int * pins; } ;
struct TYPE_15__ {TYPE_5__* f; int (* control ) (TYPE_5__*,int ,int*) ;} ;
struct TYPE_14__ {int avi_dts; } ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (struct priv*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct priv*,TYPE_6__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_6__) ;
 TYPE_6__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,struct demux_packet*) ;
 int FUNC_9 (TYPE_5__*,int ,int*) ;

__attribute__((used)) static void FUNC_10(struct priv *VAR_6)
{
    if (!VAR_6->decoder || !FUNC_5(VAR_6->decoder->f->pins[0]))
        return;

    if (VAR_6->decoded_coverart.type)
        return;

    if (!VAR_6->packet.type && !VAR_6->new_segment) {
        VAR_6->packet = FUNC_7(VAR_6->demux);
        if (!VAR_6->packet.type)
            return;
        if (VAR_6->packet.type != VAR_1 && VAR_6->packet.type != VAR_2) {
            FUNC_0(VAR_6, "invalid frame type from demuxer\n");
            FUNC_4(&VAR_6->packet);
            FUNC_3(VAR_6->f);
            return;
        }
    }

    if (!VAR_6->packet.type)
        return;


    if (FUNC_2(VAR_6, VAR_6->packet)) {
        FUNC_1(!VAR_6->new_segment);
        VAR_6->new_segment = VAR_6->packet.data;
        VAR_6->packet = VAR_0;
    }

    FUNC_1(VAR_6->packet.type == VAR_2 || VAR_6->packet.type == VAR_1);
    struct demux_packet *VAR_7 =
        VAR_6->packet.type == VAR_2 ? VAR_6->packet.data : ((void*)0);


    if (VAR_6->decoder->control) {
        double VAR_8 = VAR_6->start_pts;
        if (VAR_6->start != VAR_3 && (VAR_8 == VAR_3 ||
                                           VAR_6->start > VAR_8))
            VAR_8 = VAR_6->start;

        int VAR_9 = 0;

        if (VAR_6->public.attempt_framedrops)
            VAR_9 = 1;

        if (VAR_8 != VAR_3 && VAR_7 && VAR_6->public.play_dir > 0 &&
            VAR_7->pts < VAR_8 - .005 && !VAR_6->has_broken_packet_pts)
            VAR_9 = 2;

        VAR_6->decoder->control(VAR_6->decoder->f, VAR_5, &VAR_9);
    }

    if (VAR_6->public.recorder_sink)
        FUNC_8(VAR_6->public.recorder_sink, VAR_7);

    double VAR_10 = VAR_7 ? VAR_7->pts : VAR_3;
    double VAR_11 = VAR_7 ? VAR_7->dts : VAR_3;

    if (VAR_10 == VAR_3)
        VAR_6->has_broken_packet_pts = 1;

    if (VAR_7 && VAR_7->dts == VAR_3 && !VAR_6->codec->avi_dts)
        VAR_7->dts = VAR_7->pts;

    double VAR_12 = VAR_10 == VAR_3 ? VAR_11 : VAR_10;
    if (VAR_6->first_packet_pdts == VAR_3)
        VAR_6->first_packet_pdts = VAR_12;

    if (VAR_7 && VAR_7->back_preroll) {
        VAR_6->preroll_discard = 1;
        VAR_7->pts = VAR_7->dts = VAR_3;
    }

    FUNC_6(VAR_6->decoder->f->pins[0], VAR_6->packet);
    VAR_6->packet_fed = 1;
    VAR_6->packet = VAR_4;

    VAR_6->packets_without_output += 1;
}
