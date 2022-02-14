
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_aframe {scalar_t__ pts; TYPE_1__* av_frame; } ;
struct TYPE_2__ {int nb_samples; scalar_t__* extended_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (struct mp_aframe*) ;
 int FUNC_4 (struct mp_aframe*) ;
 int FUNC_5 (struct mp_aframe*) ;
 size_t FUNC_6 (struct mp_aframe*) ;

void FUNC_7(struct mp_aframe *VAR_1, int VAR_2)
{
    FUNC_0(VAR_2 >= 0 && VAR_2 <= FUNC_5(VAR_1));

    if (FUNC_1(VAR_1->av_frame) < 0)
        return;

    int VAR_3 = FUNC_4(VAR_1);
    size_t VAR_4 = FUNC_6(VAR_1);
    for (int VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        FUNC_2(VAR_1->av_frame->extended_data[VAR_5],
                VAR_1->av_frame->extended_data[VAR_5] + VAR_2 * VAR_4,
                (VAR_1->av_frame->nb_samples - VAR_2) * VAR_4);
    }

    VAR_1->av_frame->nb_samples -= VAR_2;

    if (VAR_1->pts != VAR_0)
        VAR_1->pts += VAR_2 / FUNC_3(VAR_1);
}
