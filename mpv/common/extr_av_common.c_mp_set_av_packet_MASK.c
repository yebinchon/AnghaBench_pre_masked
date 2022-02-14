
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct demux_packet {int duration; int dts; int pts; TYPE_1__* avpacket; scalar_t__ keyframe; int len; int * buffer; } ;
struct TYPE_11__ {int duration; void* dts; void* pts; int flags; int buf; int * data; int side_data_elems; int side_data; int size; } ;
struct TYPE_10__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_9__ {int flags; int buf; int * data; int side_data_elems; int side_data; } ;
typedef TYPE_2__ AVRational ;
typedef TYPE_3__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__) ;
 void* FUNC_2 (int ,TYPE_2__*) ;

void FUNC_3(AVPacket *VAR_2, struct demux_packet *VAR_3, AVRational *VAR_4)
{
    FUNC_0(VAR_2);
    VAR_2->data = VAR_3 ? VAR_3->buffer : ((void*)0);
    VAR_2->size = VAR_3 ? VAR_3->len : 0;


    if (VAR_3 && VAR_3->keyframe)
        VAR_2->flags |= VAR_0;
    if (VAR_3 && VAR_3->avpacket) {
        VAR_2->side_data = VAR_3->avpacket->side_data;
        VAR_2->side_data_elems = VAR_3->avpacket->side_data_elems;
        if (VAR_2->data == VAR_3->avpacket->data)
            VAR_2->buf = VAR_3->avpacket->buf;
        VAR_2->flags |= VAR_3->avpacket->flags;
    }
    if (VAR_3 && VAR_4 && VAR_4->num > 0 && VAR_4->den > 0)
        VAR_2->duration = VAR_3->duration / FUNC_1(*VAR_4);
    VAR_2->pts = FUNC_2(VAR_3 ? VAR_3->pts : VAR_1, VAR_4);
    VAR_2->dts = FUNC_2(VAR_3 ? VAR_3->dts : VAR_1, VAR_4);
}
