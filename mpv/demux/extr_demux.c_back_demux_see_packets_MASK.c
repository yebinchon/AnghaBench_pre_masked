
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_stream {int back_resuming; scalar_t__ back_resume_dts; scalar_t__ back_resume_pos; int need_wakeup; scalar_t__ back_restarting; scalar_t__ global_correct_pos; scalar_t__ global_correct_dts; struct demux_packet* reader_head; int selected; struct demux_internal* in; } ;
struct demux_packet {scalar_t__ dts; scalar_t__ pos; } ;
struct demux_internal {int back_demuxing; } ;


 int FUNC_0 (struct demux_internal*,char*) ;
 int FUNC_1 (struct demux_stream*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct demux_internal*) ;
 int FUNC_4 (struct demux_stream*) ;
 int FUNC_5 (struct demux_stream*) ;

__attribute__((used)) static void FUNC_6(struct demux_stream *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0->in;

    if (!VAR_0->selected || !VAR_1->back_demuxing)
        return;

    FUNC_2(!(VAR_0->back_resuming && VAR_0->back_restarting));

    if (!VAR_0->global_correct_dts && !VAR_0->global_correct_pos) {
        FUNC_0(VAR_1, "Can't demux backward due to demuxer problems.\n");
        FUNC_3(VAR_1);
        return;
    }

    while (VAR_0->back_resuming && VAR_0->reader_head) {
        struct demux_packet *VAR_2 = VAR_0->reader_head;
        if ((VAR_0->global_correct_dts && VAR_2->dts == VAR_0->back_resume_dts) ||
            (VAR_0->global_correct_pos && VAR_2->pos == VAR_0->back_resume_pos))
        {
            VAR_0->back_resuming = 0;
            VAR_0->need_wakeup = 1;
            FUNC_5(VAR_0);
            break;
        }
        FUNC_1(VAR_0);
    }

    if (VAR_0->back_restarting)
        FUNC_4(VAR_0);
}
