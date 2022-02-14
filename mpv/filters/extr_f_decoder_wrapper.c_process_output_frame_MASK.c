
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ play_dir; int fps; } ;
struct priv {TYPE_1__ public; int fixed_format; int last_format; } ;
struct mp_image {int nominal_fps; int params; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct mp_aframe {int nominal_fps; int params; } ;


 int FUNC_0 (struct priv*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct priv*,struct mp_image*) ;
 int FUNC_2 (struct priv*,struct mp_image*) ;
 int FUNC_3 (struct priv*,int *) ;
 int FUNC_4 (struct mp_image*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct priv *VAR_2, struct mp_frame VAR_3)
{
    if (VAR_3.type == VAR_1) {
        struct mp_image *VAR_4 = VAR_3.data;

        FUNC_2(VAR_2, VAR_4);

        if (!FUNC_5(&VAR_2->last_format, &VAR_4->params))
            FUNC_3(VAR_2, &VAR_4->params);

        VAR_4->params = VAR_2->fixed_format;
        VAR_4->nominal_fps = VAR_2->public.fps;
    } else if (VAR_3.type == VAR_0) {
        struct mp_aframe *VAR_5 = VAR_3.data;

        if (VAR_2->public.play_dir < 0 && !FUNC_4(VAR_5))
            FUNC_0(VAR_2, "Couldn't reverse audio frame.\n");

        FUNC_1(VAR_2, VAR_5);
    }
}
