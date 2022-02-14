
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_stream {scalar_t__ index; struct demux_packet* dump_pos; } ;
struct demux_queue {struct demux_stream* ds; } ;
struct demux_packet {scalar_t__ stream; struct demux_packet* next; scalar_t__ keyframe; int pts; int dts; } ;
struct demux_internal {scalar_t__ dumper_status; int num_streams; scalar_t__ dumper; struct demux_cached_range* current_range; TYPE_1__** streams; struct demux_cached_range** ranges; int num_ranges; } ;
struct demux_cached_range {double seek_start; double seek_end; int num_streams; struct demux_queue** streams; } ;
typedef int ranges ;
struct TYPE_2__ {struct demux_stream* ds; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct demux_cached_range**) ;
 double VAR_4 ;
 double FUNC_2 (int ,int ) ;
 int FUNC_3 (struct demux_internal*,struct demux_cached_range*,double*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct demux_internal*) ;
 struct demux_packet* FUNC_6 (struct demux_queue*,double,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct demux_cached_range**,int,int,int ) ;
 int VAR_5 ;
 struct demux_packet* FUNC_9 (struct demux_internal*,struct demux_packet*) ;
 int FUNC_10 (struct demux_packet*) ;
 int FUNC_11 (struct demux_internal*,struct demux_packet*) ;

__attribute__((used)) static void FUNC_12(struct demux_internal *VAR_6, double VAR_7, double VAR_8)
{
    VAR_6->dumper_status = VAR_6->dumper ? VAR_2 : VAR_0;
    if (!VAR_6->dumper)
        return;


    struct demux_cached_range *VAR_9[VAR_3];
    int VAR_10 = 0;
    for (int VAR_11 = 0; VAR_11 < FUNC_0(FUNC_1(VAR_9), VAR_6->num_ranges); VAR_11++)
        VAR_9[VAR_10++] = VAR_6->ranges[VAR_11];
    FUNC_8(VAR_9, VAR_10, sizeof(VAR_9[0]), VAR_5);

    for (int VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
        struct demux_cached_range *VAR_13 = VAR_9[VAR_12];
        if (VAR_13->seek_start == VAR_4)
            continue;
        if (VAR_13->seek_end <= VAR_7)
            continue;
        if (VAR_8 != VAR_4 && VAR_13->seek_start >= VAR_8)
            continue;

        FUNC_7(VAR_6->dumper);

        double VAR_14 = VAR_7;
        int VAR_15 = 0;
        FUNC_3(VAR_6, VAR_13, &VAR_14, &VAR_15);

        for (int VAR_16 = 0; VAR_16 < VAR_13->num_streams; VAR_16++) {
            struct demux_queue *VAR_17 = VAR_13->streams[VAR_16];
            struct demux_stream *VAR_18 = VAR_17->ds;

            VAR_18->dump_pos = FUNC_6(VAR_17, VAR_14, VAR_15);
        }



        while (1) {
            struct demux_packet *VAR_19 = ((void*)0);
            double VAR_20 = VAR_4;

            for (int VAR_21 = 0; VAR_21 < VAR_13->num_streams; VAR_21++) {
                struct demux_stream *VAR_22 = VAR_13->streams[VAR_21]->ds;
                struct demux_packet *VAR_23 = VAR_22->dump_pos;

                if (!VAR_23)
                    continue;
                FUNC_4(VAR_23->stream == VAR_22->index);

                double VAR_24 = FUNC_2(VAR_23->dts, VAR_23->pts);





                if (VAR_24 != VAR_4 && VAR_8 != VAR_4 &&
                    VAR_24 >= VAR_8 && VAR_23->keyframe)
                {
                    VAR_22->dump_pos = ((void*)0);
                    continue;
                }

                if (VAR_24 == VAR_4 || VAR_20 == VAR_4 ||
                    VAR_24 < VAR_20)
                {
                    VAR_20 = VAR_24;
                    VAR_19 = VAR_23;
                }
            }

            if (!VAR_19)
                break;

            struct demux_stream *VAR_25 = VAR_6->streams[VAR_19->stream]->ds;
            VAR_25->dump_pos = VAR_19->next;

            struct demux_packet *VAR_26 = FUNC_9(VAR_6, VAR_19);
            if (!VAR_26) {
                VAR_6->dumper_status = VAR_0;
                break;
            }

            FUNC_11(VAR_6, VAR_26);

            FUNC_10(VAR_26);
        }

        if (VAR_6->dumper_status != VAR_1)
            break;
    }


    for (int VAR_27 = 0; VAR_27 < VAR_6->num_streams; VAR_27++)
        VAR_6->streams[VAR_27]->ds->dump_pos = ((void*)0);



    if (VAR_10 && VAR_9[VAR_10 - 1] != VAR_6->current_range)
        FUNC_7(VAR_6->dumper);



    if (VAR_8 != VAR_4 || VAR_6->dumper_status != VAR_1)
        FUNC_5(VAR_6);
}
