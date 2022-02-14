
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_aframe {TYPE_1__* av_frame; int speed; int pts; } ;
struct TYPE_3__ {int sample_rate; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;

void FUNC_2(struct mp_aframe *VAR_0, struct mp_aframe *VAR_1)
{
    VAR_0->pts = VAR_1->pts;
    VAR_0->speed = VAR_1->speed;

    int VAR_2 = VAR_0->av_frame->sample_rate;

    if (FUNC_1(VAR_0->av_frame, VAR_1->av_frame) < 0)
        FUNC_0();

    VAR_0->av_frame->sample_rate = VAR_2;
}
