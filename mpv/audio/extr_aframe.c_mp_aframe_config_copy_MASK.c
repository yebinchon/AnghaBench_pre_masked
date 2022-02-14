
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_aframe {TYPE_1__* av_frame; int format; int chmap; } ;
struct TYPE_2__ {int channels; int channel_layout; int format; int sample_rate; } ;


 int FUNC_0 (struct mp_aframe*,struct mp_aframe*) ;
 int FUNC_1 (struct mp_aframe*) ;

void FUNC_2(struct mp_aframe *VAR_0, struct mp_aframe *VAR_1)
{
    FUNC_1(VAR_0);

    VAR_0->chmap = VAR_1->chmap;
    VAR_0->format = VAR_1->format;

    FUNC_0(VAR_0, VAR_1);

    VAR_0->av_frame->sample_rate = VAR_1->av_frame->sample_rate;
    VAR_0->av_frame->format = VAR_1->av_frame->format;
    VAR_0->av_frame->channel_layout = VAR_1->av_frame->channel_layout;




}
