
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_stream {int last_ret_dts; int last_ret_pos; struct demux_packet* reader_head; } ;
struct demux_packet {int dts; int pos; struct demux_packet* next; } ;



__attribute__((used)) static struct demux_packet *FUNC_0(struct demux_stream *VAR_0)
{
    struct demux_packet *VAR_1 = VAR_0->reader_head;
    if (!VAR_1)
        return ((void*)0);

    VAR_0->reader_head = VAR_1->next;

    VAR_0->last_ret_pos = VAR_1->pos;
    VAR_0->last_ret_dts = VAR_1->dts;

    return VAR_1;
}
