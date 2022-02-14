
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_aframe {int av_frame; int speed; int pts; int format; int chmap; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mp_aframe*,struct mp_aframe*) ;
 struct mp_aframe* FUNC_3 () ;
 scalar_t__ FUNC_4 (struct mp_aframe*) ;

struct mp_aframe *FUNC_5(struct mp_aframe *VAR_0)
{
    if (!VAR_0)
        return ((void*)0);

    struct mp_aframe *VAR_1 = FUNC_3();

    VAR_1->chmap = VAR_0->chmap;
    VAR_1->format = VAR_0->format;
    VAR_1->pts = VAR_0->pts;
    VAR_1->speed = VAR_0->speed;

    if (FUNC_4(VAR_0)) {
        if (FUNC_1(VAR_1->av_frame, VAR_0->av_frame) < 0)
            FUNC_0();
    } else {

        FUNC_2(VAR_1, VAR_0);
    }

    return VAR_1;
}
