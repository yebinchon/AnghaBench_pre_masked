
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct demuxer {int partially_seekable; int seekable; TYPE_1__* desc; } ;
struct demux_stream {scalar_t__ type; int last_ret_pos; double last_ret_dts; int refreshing; TYPE_3__* queue; scalar_t__ selected; int base_ts; } ;
struct demux_internal {int num_streams; int seeking; double seek_pts; int seek_flags; int current_range; TYPE_2__** streams; struct demuxer* d_thread; } ;
struct TYPE_6__ {int correct_dts; int correct_pos; int last_pos; double last_dts; } ;
struct TYPE_5__ {struct demux_stream* ds; } ;
struct TYPE_4__ {scalar_t__ seek; } ;


 double VAR_0 ;
 double FUNC_0 (double,int ) ;
 int FUNC_1 (struct demux_internal*,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct demux_stream*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct demux_internal *VAR_4,
                                  struct demux_stream *VAR_5,
                                  double VAR_6)
{
    struct demuxer *VAR_7 = VAR_4->d_thread;
    bool VAR_8 = VAR_7->desc->seek && VAR_7->seekable &&
                    !VAR_7->partially_seekable;

    bool VAR_9 = 1;
    bool VAR_10 = 1;
    for (int VAR_11 = 0; VAR_11 < VAR_4->num_streams; VAR_11++) {
        struct demux_stream *VAR_12 = VAR_4->streams[VAR_11]->ds;

        if (!VAR_12->selected)
            continue;

        if (VAR_12->type == VAR_3 || VAR_12->type == VAR_2)
            VAR_6 = FUNC_0(VAR_6, VAR_12->base_ts);


        VAR_9 &= VAR_5 == VAR_12;

        VAR_10 &= VAR_12->queue->correct_dts || VAR_12->queue->correct_pos;
    }

    if (VAR_6 == VAR_0 || !VAR_8)
        return;

    if (!VAR_9) {
        if (!VAR_10) {
            FUNC_1(VAR_4, "can't issue refresh seek\n");
            return;
        }

        for (int VAR_13 = 0; VAR_13 < VAR_4->num_streams; VAR_13++) {
            struct demux_stream *VAR_14 = VAR_4->streams[VAR_13]->ds;

            bool VAR_15 = VAR_14->queue->correct_pos;
            bool VAR_16 = VAR_14->queue->correct_dts;






            FUNC_3(VAR_14);
            FUNC_2(VAR_14->queue);



            if (VAR_14->selected && (VAR_14->last_ret_pos != -1 ||
                                 VAR_14->last_ret_dts != VAR_0))
            {
                VAR_14->refreshing = 1;
                VAR_14->queue->correct_dts = VAR_16;
                VAR_14->queue->correct_pos = VAR_15;
                VAR_14->queue->last_pos = VAR_14->last_ret_pos;
                VAR_14->queue->last_dts = VAR_14->last_ret_dts;
            }

            FUNC_4(VAR_4->current_range);
        }

        VAR_6 -= 1.0;
    }

    FUNC_1(VAR_4, "refresh seek to %f\n", VAR_6);
    VAR_4->seeking = 1;
    VAR_4->seek_flags = VAR_1;
    VAR_4->seek_pts = VAR_6;
}
