
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct track {TYPE_3__* demuxer; struct dec_sub* d_sub; } ;
struct mp_image_params {scalar_t__ imgfmt; } ;
struct dec_sub {int dummy; } ;
struct MPContext {scalar_t__ video_status; scalar_t__ video_out; int osd; struct track*** current_track; TYPE_2__* vo_chain; } ;
struct TYPE_6__ {scalar_t__ fully_read; } ;
struct TYPE_5__ {TYPE_1__* filter; } ;
struct TYPE_4__ {struct mp_image_params input_params; } ;


 double VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (struct MPContext*,double) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,double) ;
 scalar_t__ FUNC_5 (struct dec_sub*) ;
 int FUNC_6 (struct dec_sub*,int ,struct mp_image_params*) ;
 int FUNC_7 (struct dec_sub*,double) ;
 int FUNC_8 (struct dec_sub*) ;
 int FUNC_9 (struct dec_sub*,double) ;
 int FUNC_10 (struct MPContext*,int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static bool FUNC_12(struct MPContext *VAR_4, double VAR_5,
                            struct track *VAR_6)
{
    struct dec_sub *VAR_7 = VAR_6 ? VAR_6->d_sub : ((void*)0);

    if (!VAR_7 || VAR_5 == VAR_0)
        return 1;

    if (VAR_4->vo_chain) {
        struct mp_image_params VAR_8 = VAR_4->vo_chain->filter->input_params;
        if (VAR_8.imgfmt)
            FUNC_6(VAR_7, VAR_1, &VAR_8);
    }

    if (VAR_6->demuxer->fully_read && FUNC_5(VAR_7)) {


        FUNC_0(VAR_6->demuxer, 0, 0);
        FUNC_8(VAR_7);
    }

    if (!FUNC_9(VAR_7, VAR_5))
        return 0;


    if (VAR_4->current_track[0][VAR_3] == VAR_6 && !VAR_4->video_out)
        FUNC_10(VAR_4, FUNC_7(VAR_7, VAR_5));




    if (VAR_4->video_out && VAR_4->video_status == VAR_2) {
        if (FUNC_2(VAR_4->osd) != VAR_5) {
            FUNC_4(VAR_4->osd, VAR_5);
            FUNC_3(VAR_4->osd);
            FUNC_11(VAR_4->video_out);

            FUNC_1(VAR_4, 0.1);
        }
    }

    return 1;
}
