
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_subtitle_opts {int sub_fps; int sub_speed; } ;
struct dec_sub {double sub_speed; int video_fps; TYPE_1__* codec; struct mp_subtitle_opts* opts; } ;
struct TYPE_2__ {int frame_based; } ;


 int FUNC_0 (struct dec_sub*,char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dec_sub *VAR_0)
{
    struct mp_subtitle_opts *VAR_1 = VAR_0->opts;
    VAR_0->sub_speed = 1.0;

    if (VAR_0->video_fps > 0 && VAR_0->codec->frame_based > 0) {
        FUNC_0(VAR_0, "Frame based format, dummy FPS: %f, video FPS: %f\n",
                   VAR_0->codec->frame_based, VAR_0->video_fps);
        VAR_0->sub_speed *= VAR_0->codec->frame_based / VAR_0->video_fps;
    }

    if (VAR_1->sub_fps && VAR_0->video_fps)
        VAR_0->sub_speed *= VAR_1->sub_fps / VAR_0->video_fps;

    VAR_0->sub_speed *= VAR_1->sub_speed;
}
