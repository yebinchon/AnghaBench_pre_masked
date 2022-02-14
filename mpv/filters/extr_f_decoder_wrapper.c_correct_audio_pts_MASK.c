
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double play_dir; int pts_reset; } ;
struct priv {double pts; TYPE_2__* header; TYPE_1__ public; } ;
struct mp_aframe {int dummy; } ;
struct TYPE_4__ {scalar_t__ missing_timestamps; } ;


 double VAR_0 ;
 int FUNC_0 (struct priv*,char*,double) ;
 int FUNC_1 (struct priv*,char*,double,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (struct mp_aframe*) ;
 double FUNC_4 (struct mp_aframe*) ;
 int FUNC_5 (struct mp_aframe*,double) ;

__attribute__((used)) static void FUNC_6(struct priv *VAR_1, struct mp_aframe *VAR_2)
{
    double VAR_3 = VAR_1->public.play_dir;

    double VAR_4 = FUNC_4(VAR_2);
    double VAR_5 = FUNC_3(VAR_2);

    if (VAR_4 != VAR_0) {
        if (VAR_3 < 0)
            VAR_4 = -(VAR_4 + VAR_5);

        if (VAR_1->pts != VAR_0)
            FUNC_0(VAR_1, "value %f audio-pts-err", VAR_1->pts - VAR_4);

        double VAR_6 = FUNC_2(VAR_1->pts - VAR_4);




        if (VAR_1->pts != VAR_0 && VAR_6 > 0.1) {
            FUNC_1(VAR_1, "Invalid audio PTS: %f -> %f\n", VAR_1->pts, VAR_4);
            if (VAR_6 >= 5)
                VAR_1->public.pts_reset = 1;
        }



        if (VAR_1->pts == VAR_0 || VAR_6 > 0.001)
            VAR_1->pts = VAR_4;
    }

    if (VAR_1->pts == VAR_0 && VAR_1->header->missing_timestamps)
        VAR_1->pts = 0;

    FUNC_5(VAR_2, VAR_1->pts);

    if (VAR_1->pts != VAR_0)
        VAR_1->pts += VAR_5;
}
