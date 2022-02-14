
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_packet {int stream; int keyframe; int back_preroll; int back_restart; int codec; int end; int start; int segmented; int pos; int duration; int dts; int pts; } ;



void FUNC_0(struct demux_packet *VAR_0, struct demux_packet *VAR_1)
{
    VAR_0->pts = VAR_1->pts;
    VAR_0->dts = VAR_1->dts;
    VAR_0->duration = VAR_1->duration;
    VAR_0->pos = VAR_1->pos;
    VAR_0->segmented = VAR_1->segmented;
    VAR_0->start = VAR_1->start;
    VAR_0->end = VAR_1->end;
    VAR_0->codec = VAR_1->codec;
    VAR_0->back_restart = VAR_1->back_restart;
    VAR_0->back_preroll = VAR_1->back_preroll;
    VAR_0->keyframe = VAR_1->keyframe;
    VAR_0->stream = VAR_1->stream;
}
