
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {struct demux_internal* in; } ;
struct demux_stream {double bitrate; size_t type; scalar_t__ selected; } ;
struct demux_internal {int num_streams; int lock; TYPE_1__** streams; struct demuxer* d_user; } ;
struct TYPE_2__ {struct demux_stream* ds; } ;


 double FUNC_0 (int ,double) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct demuxer *VAR_1, double *VAR_2)
{
    struct demux_internal *VAR_3 = VAR_1->in;
    FUNC_1(VAR_1 == VAR_3->d_user);

    FUNC_2(&VAR_3->lock);

    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        VAR_2[VAR_4] = -1;
    for (int VAR_5 = 0; VAR_5 < VAR_3->num_streams; VAR_5++) {
        struct demux_stream *VAR_6 = VAR_3->streams[VAR_5]->ds;
        if (VAR_6->selected && VAR_6->bitrate >= 0)
            VAR_2[VAR_6->type] = FUNC_0(0, VAR_2[VAR_6->type]) + VAR_6->bitrate;
    }

    FUNC_3(&VAR_3->lock);
}
