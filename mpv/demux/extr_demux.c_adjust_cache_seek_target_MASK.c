
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_stream {scalar_t__ type; scalar_t__ selected; } ;
struct demux_queue {int dummy; } ;
struct demux_packet {int dummy; } ;
struct demux_internal {int num_streams; TYPE_1__** streams; } ;
struct demux_cached_range {struct demux_queue** streams; } ;
struct TYPE_2__ {struct demux_stream* ds; } ;


 double VAR_0 ;
 int FUNC_0 (struct demux_internal*,char*,double,double) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct demux_packet*,double*,int *) ;
 struct demux_packet* FUNC_2 (struct demux_queue*,double,int) ;

__attribute__((used)) static void FUNC_3(struct demux_internal *VAR_4,
                                     struct demux_cached_range *VAR_5,
                                     double *VAR_6, int *VAR_7)
{
    if (*VAR_7 & VAR_2)
        return;

    for (int VAR_8 = 0; VAR_8 < VAR_4->num_streams; VAR_8++) {
        struct demux_stream *VAR_9 = VAR_4->streams[VAR_8]->ds;
        struct demux_queue *VAR_10 = VAR_5->streams[VAR_8];
        if (VAR_9->selected && VAR_9->type == VAR_3) {
            struct demux_packet *VAR_11 = FUNC_2(VAR_10, *VAR_6, *VAR_7);
            if (VAR_11) {
                double VAR_12;
                FUNC_1(VAR_11, &VAR_12, ((void*)0));
                if (VAR_12 != VAR_0) {
                    FUNC_0(VAR_4, "adjust seek target %f -> %f\n",
                               *VAR_6, VAR_12);


                    *VAR_6 = VAR_12;
                    *VAR_7 &= ~VAR_1;
                }
            }
            break;
        }
    }
}
