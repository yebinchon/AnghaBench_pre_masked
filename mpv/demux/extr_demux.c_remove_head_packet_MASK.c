
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct demux_queue {int is_bof; size_t index0; int * tail; struct demux_packet* head; scalar_t__ num_index; TYPE_3__* index; TYPE_2__* ds; scalar_t__ tail_cum_pos; struct demux_packet* keyframe_latest; struct demux_packet* keyframe_first; } ;
struct demux_packet {struct demux_packet* next; scalar_t__ cum_pos; } ;
struct TYPE_6__ {struct demux_packet* pkt; } ;
struct TYPE_5__ {TYPE_1__* in; struct demux_packet* reader_head; } ;
struct TYPE_4__ {int total_bytes; } ;


 int FUNC_0 (struct demux_queue*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct demux_packet*) ;

__attribute__((used)) static void FUNC_3(struct demux_queue *VAR_0)
{
    struct demux_packet *VAR_1 = VAR_0->head;

    FUNC_1(VAR_0->ds->reader_head != VAR_1);
    if (VAR_0->keyframe_first == VAR_1)
        VAR_0->keyframe_first = ((void*)0);
    if (VAR_0->keyframe_latest == VAR_1)
        VAR_0->keyframe_latest = ((void*)0);
    VAR_0->is_bof = 0;

    uint64_t VAR_2 = VAR_1->next ? VAR_1->next->cum_pos : VAR_0->tail_cum_pos;
    VAR_0->ds->in->total_bytes -= VAR_2 - VAR_1->cum_pos;

    if (VAR_0->num_index && VAR_0->index[VAR_0->index0].pkt == VAR_1) {
        VAR_0->index0 = (VAR_0->index0 + 1) & FUNC_0(VAR_0);
        VAR_0->num_index -= 1;
    }

    VAR_0->head = VAR_1->next;
    if (!VAR_0->head)
        VAR_0->tail = ((void*)0);

    FUNC_2(VAR_1);
}
