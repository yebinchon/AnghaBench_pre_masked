
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct demux_stream {size_t index; TYPE_2__* sh; struct demux_packet* reader_head; } ;
struct demux_queue {double seek_start; double last_pruned; struct demux_packet* keyframe_first; struct demux_packet* head; struct demux_stream* ds; } ;
struct demux_packet {struct demux_packet* next; scalar_t__ keyframe; } ;
struct demux_internal {int num_ranges; int num_streams; scalar_t__ max_bytes_bw; scalar_t__ max_bytes; scalar_t__ total_bytes; struct demux_cached_range* current_range; scalar_t__ seekable_cache; struct demux_cached_range** ranges; TYPE_1__** streams; } ;
struct demux_cached_range {int num_streams; double seek_start; struct demux_queue** streams; } ;
struct TYPE_4__ {scalar_t__ seek_preroll; } ;
struct TYPE_3__ {struct demux_stream* ds; } ;


 double VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct demux_packet*,double*,int *) ;
 int FUNC_2 (struct demux_internal*) ;
 scalar_t__ FUNC_3 (struct demux_stream*) ;
 int FUNC_4 (struct demux_queue*) ;
 int FUNC_5 (struct demux_cached_range*) ;

__attribute__((used)) static void FUNC_6(struct demux_internal *VAR_1)
{
    FUNC_0(VAR_1->current_range == VAR_1->ranges[VAR_1->num_ranges - 1]);




    while (1) {
        uint64_t VAR_2 = 0;
        for (int VAR_3 = 0; VAR_3 < VAR_1->num_streams; VAR_3++) {
            struct demux_stream *VAR_4 = VAR_1->streams[VAR_3]->ds;
            VAR_2 += FUNC_3(VAR_4);
        }
        uint64_t VAR_5 = VAR_1->max_bytes_bw;


        if (VAR_5 && VAR_1->max_bytes > (VAR_2 + 1))
            VAR_5 += VAR_1->max_bytes - (VAR_2 + 1);
        if (VAR_1->total_bytes - VAR_2 <= VAR_5)
            break;


        struct demux_cached_range *VAR_6 = VAR_1->ranges[0];
        double VAR_7 = VAR_0;
        struct demux_stream *VAR_8 = ((void*)0);

        for (int VAR_9 = 0; VAR_9 < VAR_6->num_streams; VAR_9++) {
            struct demux_queue *VAR_10 = VAR_6->streams[VAR_9];
            struct demux_stream *VAR_11 = VAR_10->ds;

            if (VAR_10->head && VAR_10->head != VAR_11->reader_head) {
                struct demux_packet *VAR_12 = VAR_10->head;
                double VAR_13 = VAR_10->seek_start;



                bool VAR_14 =
                    !VAR_1->seekable_cache || VAR_13 == VAR_0 || !VAR_12->keyframe;
                if (VAR_14 || !VAR_8 || VAR_13 < VAR_7) {
                    VAR_7 = VAR_13;
                    VAR_8 = VAR_11;
                    if (VAR_14)
                        break;
                }
            }
        }



        if (!VAR_8)
            break;

        struct demux_stream *VAR_15 = VAR_8;
        struct demux_queue *VAR_16 = VAR_6->streams[VAR_15->index];

        bool VAR_17 = VAR_16->head && !VAR_16->head->keyframe;
        bool VAR_18 = 0;

        while (VAR_16->head && VAR_16->head != VAR_15->reader_head) {
            if (VAR_16->head->keyframe) {






                if ((VAR_18 || VAR_17) && VAR_1->seekable_cache)
                    break;
                VAR_18 = 1;
            }

            FUNC_4(VAR_16);
        }


        if (VAR_18) {
            FUNC_0(!VAR_16->keyframe_first);

            VAR_16->keyframe_first = VAR_16->head;


            while (VAR_16->keyframe_first && !VAR_16->keyframe_first->keyframe)
                VAR_16->keyframe_first = VAR_16->keyframe_first->next;

            if (VAR_16->seek_start != VAR_0)
                VAR_16->last_pruned = VAR_16->seek_start;

            double VAR_19;
            FUNC_1(VAR_16->keyframe_first, &VAR_19, ((void*)0));

            bool VAR_20 = 1;

            VAR_16->seek_start = VAR_19;

            if (VAR_16->seek_start != VAR_0) {
                VAR_16->seek_start += VAR_15->sh->seek_preroll;



                if (VAR_6->seek_start == VAR_0 ||
                    VAR_16->seek_start <= VAR_6->seek_start)
                {
                    VAR_20 = 0;
                }
            }

            if (VAR_20)
                FUNC_5(VAR_6);
        }

        if (VAR_6 != VAR_1->current_range && VAR_6->seek_start == VAR_0)
            FUNC_2(VAR_1);
    }
}
