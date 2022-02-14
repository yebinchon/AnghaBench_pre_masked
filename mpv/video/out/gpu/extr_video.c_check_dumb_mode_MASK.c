
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gl_video_opts {scalar_t__ dumb_mode; scalar_t__* user_shaders; TYPE_2__* scaler; scalar_t__ unsharp; scalar_t__ deband; scalar_t__ blend_subs; scalar_t__ interpolation; scalar_t__ sigmoid_upscaling; scalar_t__ linear_upscaling; scalar_t__ linear_downscaling; scalar_t__ correct_downscaling; } ;
struct gl_video {scalar_t__ use_integer_conversion; struct gl_video_opts opts; } ;
struct TYPE_3__ {char* name; } ;
struct TYPE_4__ {TYPE_1__ kernel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(struct gl_video *VAR_2)
{
    struct gl_video_opts *VAR_3 = &VAR_2->opts;
    if (VAR_2->use_integer_conversion)
        return 0;
    if (VAR_3->dumb_mode > 0)
        return 1;
    if (VAR_3->dumb_mode < 0)
        return 0;


    if (VAR_3->correct_downscaling || VAR_3->linear_downscaling ||
        VAR_3->linear_upscaling || VAR_3->sigmoid_upscaling || VAR_3->interpolation ||
        VAR_3->blend_subs || VAR_3->deband || VAR_3->unsharp)
        return 0;

    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_4 != VAR_1) {
            const char *VAR_5 = VAR_3->scaler[VAR_4].kernel.name;
            if (VAR_5 && FUNC_0(VAR_5, "bilinear") != 0)
                return 0;
        }
    }
    if (VAR_3->user_shaders && VAR_3->user_shaders[0])
        return 0;
    return 1;
}
