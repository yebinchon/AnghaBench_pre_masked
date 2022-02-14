
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct demux_stream {int back_resuming; int back_seek_pos; TYPE_2__* reader_head; int back_resume_dts; int back_resume_pos; scalar_t__ eager; int back_restarting; } ;
struct demux_internal {int num_streams; int reading; int lock; TYPE_3__* d_thread; TYPE_1__** streams; } ;
struct TYPE_6__ {int start_time; } ;
struct TYPE_5__ {int dts; int pos; } ;
struct TYPE_4__ {struct demux_stream* ds; } ;


 double VAR_0 ;
 double FUNC_0 (double,int ) ;
 double FUNC_1 (double,int ) ;
 int FUNC_2 (struct demux_internal*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct demux_internal*,double,int,int) ;

__attribute__((used)) static void FUNC_6(struct demux_internal *VAR_3)
{
    double VAR_4 = VAR_0;

    for (int VAR_5 = 0; VAR_5 < VAR_3->num_streams; VAR_5++) {
        struct demux_stream *VAR_6 = VAR_3->streams[VAR_5]->ds;

        if (VAR_6->reader_head && !VAR_6->back_restarting && !VAR_6->back_resuming &&
            VAR_6->eager)
        {
            VAR_6->back_resuming = 1;
            VAR_6->back_resume_pos = VAR_6->reader_head->pos;
            VAR_6->back_resume_dts = VAR_6->reader_head->dts;
        }

        VAR_4 = FUNC_0(VAR_4, VAR_6->back_seek_pos);
    }

    VAR_4 = FUNC_1(VAR_4, VAR_3->d_thread->start_time);

    FUNC_2(VAR_3, "triggering backward seek to get more packets\n");
    FUNC_5(VAR_3, VAR_4, VAR_2 | VAR_1, 0);
    VAR_3->reading = 1;


    FUNC_4(&VAR_3->lock);
    FUNC_3(&VAR_3->lock);
}
