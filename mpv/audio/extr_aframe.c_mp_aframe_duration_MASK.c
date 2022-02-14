
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_aframe {TYPE_1__* av_frame; } ;
struct TYPE_2__ {double nb_samples; } ;


 double FUNC_0 (struct mp_aframe*) ;

double FUNC_1(struct mp_aframe *VAR_0)
{
    double VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 <= 0)
        return 0;
    return VAR_0->av_frame->nb_samples / VAR_1;
}
