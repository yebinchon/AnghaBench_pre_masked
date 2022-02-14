
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_stream {int skip_to_keyframe; int selected; int refreshing; int type; struct demux_packet* reader_head; int base_ts; } ;
struct demux_queue {int dummy; } ;
struct demux_packet {int dts; int pts; } ;
struct demux_internal {int num_streams; int seeking; TYPE_1__** streams; scalar_t__ seek_pts; int seek_flags; struct demux_cached_range* current_range; } ;
struct demux_cached_range {scalar_t__ seek_end; struct demux_queue** streams; } ;
struct TYPE_2__ {struct demux_stream* ds; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct demux_internal*,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct demux_internal*,struct demux_cached_range*,double*,int*) ;
 struct demux_packet* FUNC_3 (struct demux_queue*,double,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct demux_internal*,struct demux_cached_range*) ;

__attribute__((used)) static void FUNC_6(struct demux_internal *VAR_1,
                               struct demux_cached_range *VAR_2,
                               double VAR_3, int VAR_4)
{
    FUNC_2(VAR_1, VAR_2, &VAR_3, &VAR_4);

    for (int VAR_5 = 0; VAR_5 < VAR_1->num_streams; VAR_5++) {
        struct demux_stream *VAR_6 = VAR_1->streams[VAR_5]->ds;
        struct demux_queue *VAR_7 = VAR_2->streams[VAR_5];

        struct demux_packet *VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_4);
        VAR_6->reader_head = VAR_8;
        VAR_6->skip_to_keyframe = !VAR_8;
        if (VAR_6->reader_head)
            VAR_6->base_ts = FUNC_0(VAR_6->reader_head->pts, VAR_6->reader_head->dts);

        FUNC_1(VAR_1, "seeking stream %d (%s) to ",
                   VAR_5, FUNC_4(VAR_6->type));

        if (VAR_8) {
            FUNC_1(VAR_1, "packet %f/%f\n", VAR_8->pts, VAR_8->dts);
        } else {
            FUNC_1(VAR_1, "nothing\n");
        }
    }



    if (VAR_1->current_range != VAR_2) {
        FUNC_5(VAR_1, VAR_2);

        VAR_1->seeking = 1;
        VAR_1->seek_flags = VAR_0;
        VAR_1->seek_pts = VAR_2->seek_end - 1.0;





        for (int VAR_9 = 0; VAR_9 < VAR_1->num_streams; VAR_9++) {
            struct demux_stream *VAR_10 = VAR_1->streams[VAR_9]->ds;

            VAR_10->refreshing = VAR_10->selected;
        }

        FUNC_1(VAR_1, "resuming demuxer to end of cached range\n");
    }
}
