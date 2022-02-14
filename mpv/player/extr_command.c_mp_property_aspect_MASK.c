
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct track {TYPE_3__* stream; } ;
struct mp_image_params {scalar_t__ p_w; scalar_t__ p_h; } ;
struct mp_codec_params {float disp_h; scalar_t__ disp_w; } ;
struct m_property {scalar_t__ name; } ;
struct m_option {int dummy; } ;
struct m_config_option {struct m_option* opt; } ;
struct command_ctx {int num_warned_deprecated; int * warned_deprecated; } ;
struct TYPE_11__ {int mconfig; TYPE_4__* opts; struct track*** current_track; TYPE_2__* vo_chain; struct command_ctx* command_ctx; } ;
struct TYPE_10__ {float movie_aspect; } ;
struct TYPE_9__ {struct mp_codec_params* codec; } ;
struct TYPE_8__ {TYPE_1__* filter; } ;
struct TYPE_7__ {struct mp_image_params input_params; } ;
typedef TYPE_5__ MPContext ;


 int FUNC_0 (struct command_ctx*,int *,int,char*) ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 size_t VAR_3 ;
 int FUNC_2 (char*) ;
 struct m_config_option* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct m_config_option*,void*,int ) ;
 int FUNC_5 (struct mp_image_params*,int*,int*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 char* FUNC_7 (int *,char*,float) ;

__attribute__((used)) static int FUNC_8(void *VAR_4, struct m_property *VAR_5,
                              int VAR_6, void *VAR_7)
{
    MPContext *VAR_8 = VAR_4;
    struct m_config_option *VAR_9;
    VAR_9 = FUNC_3(VAR_8->mconfig, FUNC_2("video-aspect-override"));

    struct command_ctx *VAR_10 = VAR_8->command_ctx;
    for (int VAR_11 = 0; VAR_11 < VAR_10->num_warned_deprecated; VAR_11++) {
        if (FUNC_6(VAR_10->warned_deprecated[VAR_11], VAR_5->name) == 0)
            goto skip_warn;
    }

    FUNC_1(VAR_8, "Warning: property 'video-aspect' is deprecated, refer to "
            "'video-params/aspect' and 'video-aspect-override'.\n");
    FUNC_0(VAR_10, VAR_10->warned_deprecated, VAR_10->num_warned_deprecated,
                     (char *)VAR_5->name);

skip_warn: ;

    float VAR_12 = VAR_8->opts->movie_aspect;
    if (VAR_8->vo_chain && VAR_12 <= 0) {
        struct mp_image_params *VAR_13 = &VAR_8->vo_chain->filter->input_params;
        if (VAR_13 && VAR_13->p_w > 0 && VAR_13->p_h > 0) {
            int VAR_14, VAR_15;
            FUNC_5(VAR_13, &VAR_14, &VAR_15);
            VAR_12 = (float)VAR_14 / VAR_15;
        }
    }
    struct track *VAR_16 = VAR_8->current_track[0][VAR_3];
    if (VAR_16 && VAR_16->stream && VAR_12 <= 0) {
        struct mp_codec_params *VAR_17 = VAR_16->stream->codec;
        if (VAR_17->disp_w && VAR_17->disp_h)
            VAR_12 = (float)VAR_17->disp_w / VAR_17->disp_h;
    }

    switch (VAR_6) {
    case 130:
        *(struct m_option *)VAR_7 = *(VAR_9->opt);
        return VAR_2;
    case 129: {
        if (VAR_8->opts->movie_aspect < 0) {
            *(char **)VAR_7 = FUNC_7(((void*)0), "%.3f (original)", VAR_12);
            return VAR_2;
        }
        break;
    }
    case 131: {
        *(float *)VAR_7 = VAR_12;
        return VAR_2;
    }
    case 128:
        if (FUNC_4(VAR_8->mconfig, VAR_9, VAR_7, 0) < 0)
            return VAR_0;
        return VAR_2;
    }
    return VAR_1;
}
