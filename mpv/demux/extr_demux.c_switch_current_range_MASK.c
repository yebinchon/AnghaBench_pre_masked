
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demux_stream {int refreshing; int eof; struct demux_queue* queue; scalar_t__ global_correct_pos; scalar_t__ global_correct_dts; scalar_t__ selected; } ;
struct demux_queue {TYPE_1__* head; } ;
struct demux_internal {int num_streams; int force_metadata_update; TYPE_2__** streams; struct demux_cached_range* current_range; } ;
struct demux_cached_range {struct demux_queue** streams; } ;
struct TYPE_4__ {struct demux_stream* ds; } ;
struct TYPE_3__ {int keyframe; } ;


 int FUNC_0 (struct demux_internal*,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct demux_internal*,struct demux_cached_range*) ;
 int FUNC_3 (struct demux_internal*) ;
 int FUNC_4 (struct demux_queue*) ;
 int FUNC_5 (struct demux_internal*,struct demux_cached_range*) ;

__attribute__((used)) static void FUNC_6(struct demux_internal *VAR_0,
                                 struct demux_cached_range *VAR_1)
{
    struct demux_cached_range *VAR_2 = VAR_0->current_range;
    FUNC_1(VAR_2 != VAR_1);

    FUNC_5(VAR_0, VAR_1);

    if (VAR_2) {

        for (int VAR_3 = 0; VAR_3 < VAR_0->num_streams; VAR_3++) {
            struct demux_queue *VAR_4 = VAR_2->streams[VAR_3];


            while (VAR_4->head && !VAR_4->head->keyframe)
                FUNC_4(VAR_4);
        }


        for (int VAR_5 = 0; VAR_5 < VAR_0->num_streams; VAR_5++) {
            struct demux_stream *VAR_6 = VAR_0->streams[VAR_5]->ds;

            if (VAR_6->selected && !(VAR_6->global_correct_dts ||
                                  VAR_6->global_correct_pos))
            {
                FUNC_0(VAR_0, "discarding unseekable range due to stream %d\n", VAR_5);
                FUNC_2(VAR_0, VAR_2);
                break;
            }
        }
    }


    for (int VAR_7 = 0; VAR_7 < VAR_0->num_streams; VAR_7++) {
        struct demux_stream *VAR_8 = VAR_0->streams[VAR_7]->ds;

        VAR_8->queue = VAR_1->streams[VAR_7];
        VAR_8->refreshing = 0;
        VAR_8->eof = 0;
    }


    FUNC_3(VAR_0);


    VAR_0->force_metadata_update = 1;
}
