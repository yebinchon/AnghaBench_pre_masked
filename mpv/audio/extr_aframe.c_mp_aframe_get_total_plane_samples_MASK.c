
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_aframe {TYPE_1__* av_frame; } ;
struct TYPE_2__ {int nb_samples; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mp_aframe*) ;
 int FUNC_2 (struct mp_aframe*) ;

int FUNC_3(struct mp_aframe *VAR_0)
{
    return VAR_0->av_frame->nb_samples *
           (FUNC_0(FUNC_2(VAR_0))
            ? 1 : FUNC_1(VAR_0));
}
