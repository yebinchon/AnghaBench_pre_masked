
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_aframe {scalar_t__ pts; TYPE_1__* av_frame; } ;
struct TYPE_2__ {double nb_samples; } ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (struct mp_aframe*) ;

double FUNC_1(struct mp_aframe *VAR_1)
{
    double VAR_2 = FUNC_0(VAR_1);
    if (VAR_1->pts == VAR_0 || VAR_2 <= 0)
        return VAR_0;
    return VAR_1->pts + VAR_1->av_frame->nb_samples / VAR_2;
}
