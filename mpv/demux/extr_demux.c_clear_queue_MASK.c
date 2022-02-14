
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_stream {struct demux_packet* reader_head; struct demux_internal* in; } ;
struct demux_queue {int correct_dts; int correct_pos; int last_pos; int is_eof; int is_bof; void* last_dts; void* last_ts; void* last_pruned; void* seek_end; void* seek_start; int * keyframe_latest; int * keyframe_first; int * tail; struct demux_packet* head; scalar_t__ tail_cum_pos; struct demux_stream* ds; } ;
struct demux_packet {struct demux_packet* next; scalar_t__ cum_pos; } ;
struct demux_internal {int total_bytes; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct demux_queue*) ;
 int FUNC_2 (struct demux_packet*) ;

__attribute__((used)) static void FUNC_3(struct demux_queue *VAR_1)
{
    struct demux_stream *VAR_2 = VAR_1->ds;
    struct demux_internal *VAR_3 = VAR_2->in;

    if (VAR_1->head)
        VAR_3->total_bytes -= VAR_1->tail_cum_pos - VAR_1->head->cum_pos;

    FUNC_1(VAR_1);

    struct demux_packet *VAR_4 = VAR_1->head;
    while (VAR_4) {
        struct demux_packet *VAR_5 = VAR_4->next;
        FUNC_0(VAR_2->reader_head != VAR_4);
        FUNC_2(VAR_4);
        VAR_4 = VAR_5;
    }
    VAR_1->head = VAR_1->tail = ((void*)0);
    VAR_1->keyframe_first = ((void*)0);
    VAR_1->keyframe_latest = ((void*)0);
    VAR_1->seek_start = VAR_1->seek_end = VAR_1->last_pruned = VAR_0;

    VAR_1->correct_dts = VAR_1->correct_pos = 1;
    VAR_1->last_pos = -1;
    VAR_1->last_ts = VAR_1->last_dts = VAR_0;

    VAR_1->is_eof = 0;
    VAR_1->is_bof = 0;
}
