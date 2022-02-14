
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct demux_stream {TYPE_2__* reader_head; TYPE_1__* queue; } ;
struct TYPE_4__ {scalar_t__ cum_pos; } ;
struct TYPE_3__ {scalar_t__ tail_cum_pos; } ;



__attribute__((used)) static uint64_t FUNC_0(struct demux_stream *VAR_0)
{
    if (!VAR_0->reader_head)
        return 0;
    return VAR_0->queue->tail_cum_pos - VAR_0->reader_head->cum_pos;
}
