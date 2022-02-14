
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_stream {int bitrate; int skip_to_keyframe; int attached_picture_added; int last_ret_pos; int back_restart_pos; int back_restart_eof; int back_restarting; int back_resume_pos; int back_resuming; int back_range_started; scalar_t__ back_range_preroll; scalar_t__ back_range_count; void* back_resume_dts; void* back_seek_pos; scalar_t__ eager; TYPE_1__* in; scalar_t__ back_restart_next; void* back_restart_dts; void* last_ret_dts; scalar_t__ last_br_bytes; void* last_br_ts; void* base_ts; } ;
struct TYPE_2__ {scalar_t__ back_demuxing; } ;


 void* VAR_0 ;
 int FUNC_0 (struct demux_stream*) ;

__attribute__((used)) static void FUNC_1(struct demux_stream *VAR_1,
                                  bool VAR_2)
{
    FUNC_0(VAR_1);

    VAR_1->base_ts = VAR_1->last_br_ts = VAR_0;
    VAR_1->last_br_bytes = 0;
    VAR_1->bitrate = -1;
    VAR_1->skip_to_keyframe = 0;
    VAR_1->attached_picture_added = 0;
    VAR_1->last_ret_pos = -1;
    VAR_1->last_ret_dts = VAR_0;

    if (VAR_2) {
        VAR_1->back_restart_pos = -1;
        VAR_1->back_restart_dts = VAR_0;
        VAR_1->back_restart_eof = 0;
        VAR_1->back_restart_next = VAR_1->in->back_demuxing;
        VAR_1->back_restarting = VAR_1->in->back_demuxing && VAR_1->eager;
        VAR_1->back_seek_pos = VAR_0;
        VAR_1->back_resume_pos = -1;
        VAR_1->back_resume_dts = VAR_0;
        VAR_1->back_resuming = 0;
        VAR_1->back_range_started = 0;
        VAR_1->back_range_count = 0;
        VAR_1->back_range_preroll = 0;
    }
}
