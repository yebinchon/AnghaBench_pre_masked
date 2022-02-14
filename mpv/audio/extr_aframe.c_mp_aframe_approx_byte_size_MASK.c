
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_aframe {TYPE_1__* av_frame; } ;
struct TYPE_2__ {int nb_samples; } ;


 size_t FUNC_0 (int,int) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (struct mp_aframe*) ;
 size_t FUNC_3 (struct mp_aframe*) ;

int FUNC_4(struct mp_aframe *VAR_0)
{


    int VAR_1 = FUNC_2(VAR_0);
    size_t VAR_2 = FUNC_3(VAR_0);
    int VAR_3 = VAR_0->av_frame->nb_samples;
    int VAR_4 = FUNC_1(VAR_2 * FUNC_0(VAR_3, 1), 32);
    return VAR_4 * VAR_1 + sizeof(*VAR_0);
}
