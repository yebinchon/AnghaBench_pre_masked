
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vo_chain {TYPE_2__* filter; } ;
struct track {TYPE_1__* stream; } ;
struct mp_codec_params {scalar_t__ disp_h; scalar_t__ disp_w; } ;
struct m_sub_property {char* member_0; int member_1; } ;
struct m_property {int dummy; } ;
struct TYPE_8__ {scalar_t__ imgfmt; } ;
struct TYPE_7__ {struct track*** current_track; struct vo_chain* vo_chain; } ;
struct TYPE_6__ {TYPE_4__ input_params; } ;
struct TYPE_5__ {struct mp_codec_params* codec; } ;
typedef TYPE_3__ MPContext ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct m_sub_property*,int,void*) ;
 int FUNC_2 (TYPE_4__,int,void*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, struct m_property *VAR_3,
                                    int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;
    struct vo_chain *VAR_7 = VAR_6->vo_chain;
    if (!VAR_7)
        return VAR_0;
    struct track *VAR_8 = VAR_6->current_track[0][VAR_1];
    struct mp_codec_params *VAR_9 =
        VAR_8 && VAR_8->stream ? VAR_8->stream->codec : ((void*)0);
    if (VAR_7->filter->input_params.imgfmt) {
        return FUNC_2(VAR_7->filter->input_params, VAR_4, VAR_5);
    } else if (VAR_9 && VAR_9->disp_w && VAR_9->disp_h) {


        struct m_sub_property VAR_10[] = {
            {"w", FUNC_0(VAR_9->disp_w)},
            {"h", FUNC_0(VAR_9->disp_h)},
            {0}
        };
        return FUNC_1(VAR_10, VAR_4, VAR_5);
    }
    return VAR_0;
}
