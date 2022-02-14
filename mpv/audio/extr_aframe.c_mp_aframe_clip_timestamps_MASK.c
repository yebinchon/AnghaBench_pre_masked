
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_aframe {double pts; TYPE_1__* av_frame; } ;
struct TYPE_2__ {void* nb_samples; } ;


 void* FUNC_0 (int,int ,void*) ;
 double VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 double FUNC_2 (struct mp_aframe*) ;
 double FUNC_3 (struct mp_aframe*) ;
 int FUNC_4 (struct mp_aframe*) ;
 int FUNC_5 (struct mp_aframe*,int) ;

void FUNC_6(struct mp_aframe *VAR_1, double VAR_2, double VAR_3)
{
    double VAR_4 = FUNC_2(VAR_1);
    double VAR_5 = FUNC_3(VAR_1);
    if (VAR_4 == VAR_0)
        return;
    if (FUNC_1(FUNC_4(VAR_1)))
        return;
    if (VAR_3 != VAR_0) {
        if (VAR_4 >= VAR_3) {
            if (VAR_1->pts >= VAR_3) {
                VAR_1->av_frame->nb_samples = 0;
            } else {
                int VAR_6 = (VAR_3 - VAR_1->pts) * VAR_5;
                VAR_1->av_frame->nb_samples = FUNC_0(VAR_6, 0, VAR_1->av_frame->nb_samples);
            }
        }
    }
    if (VAR_2 != VAR_0) {
        if (VAR_1->pts < VAR_2) {
            if (VAR_4 <= VAR_2) {
                VAR_1->av_frame->nb_samples = 0;
                VAR_1->pts = VAR_4;
            } else {
                int VAR_7 = (VAR_2 - VAR_1->pts) * VAR_5;
                VAR_7 = FUNC_0(VAR_7, 0, VAR_1->av_frame->nb_samples);
                FUNC_5(VAR_1, VAR_7);
            }
        }
    }
}
