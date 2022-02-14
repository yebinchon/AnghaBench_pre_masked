
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {struct demux_internal* in; } ;
struct demux_stream {size_t type; } ;
struct demux_queue {int dummy; } ;
struct demux_packet {struct demux_packet* next; scalar_t__ keyframe; int pts; int dts; } ;
struct demux_internal {int num_streams; int lock; int ts_offset; TYPE_1__** streams; struct demuxer* d_user; } ;
struct demux_cached_range {double seek_start; struct demux_queue** streams; } ;
struct TYPE_2__ {struct demux_stream* ds; } ;


 double FUNC_0 (double,int ) ;
 double VAR_0 ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (int ,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (struct demux_internal*,struct demux_cached_range*,double*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct demux_packet*,double*,int *) ;
 struct demux_cached_range* FUNC_6 (struct demux_internal*,double,int) ;
 struct demux_packet* FUNC_7 (struct demux_queue*,double,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

double FUNC_10(struct demuxer *VAR_4, double VAR_5,
                                     bool VAR_6)
{
    struct demux_internal *VAR_7 = VAR_4->in;
    FUNC_4(VAR_4 == VAR_7->d_user);

    double VAR_8 = VAR_0;
    if (VAR_5 == VAR_0)
        return VAR_5;

    FUNC_8(&VAR_7->lock);

    VAR_5 = FUNC_0(VAR_5, -VAR_7->ts_offset);



    double VAR_9 = VAR_6 ? VAR_5 - 0.001 : VAR_5;
    int VAR_10 = 0;
    struct demux_cached_range *VAR_11 = FUNC_6(VAR_7, VAR_9, VAR_10);
    if (VAR_11) {
        if (!VAR_6)
            FUNC_3(VAR_7, VAR_11, &VAR_5, &VAR_10);

        double VAR_12[VAR_2];
        for (int VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
            VAR_12[VAR_13] = VAR_0;

        for (int VAR_14 = 0; VAR_14 < VAR_7->num_streams; VAR_14++) {
            struct demux_stream *VAR_15 = VAR_7->streams[VAR_14]->ds;
            struct demux_queue *VAR_16 = VAR_11->streams[VAR_14];

            struct demux_packet *VAR_17 = FUNC_7(VAR_16, VAR_5, VAR_10);
            if (VAR_17) {
                if (VAR_6) {
                    while (VAR_17) {
                        double VAR_18 = FUNC_2(VAR_17->dts, VAR_17->pts);

                        if (VAR_18 != VAR_0 && VAR_18 >= VAR_5 && VAR_17->keyframe)
                            break;

                        VAR_12[VAR_15->type] = FUNC_1(VAR_12[VAR_15->type], VAR_18);

                        VAR_17 = VAR_17->next;
                    }
                } else {
                    double VAR_19;
                    FUNC_5(VAR_17, &VAR_19, ((void*)0));
                    VAR_19 = FUNC_1(VAR_19, VAR_11->seek_start);
                    VAR_12[VAR_15->type] = FUNC_1(VAR_12[VAR_15->type], VAR_19);
                }
            }
        }

        VAR_8 = VAR_12[VAR_3];
        if (VAR_8 == VAR_0)
            VAR_8 = VAR_12[VAR_1];
        if (VAR_8 == VAR_0) {
            for (int VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {
                VAR_8 = VAR_12[VAR_20];
                if (VAR_8 != VAR_0)
                    break;
            }
        }
    }

    VAR_8 = FUNC_0(VAR_8, VAR_7->ts_offset);

    FUNC_9(&VAR_7->lock);

    return VAR_8;
}
