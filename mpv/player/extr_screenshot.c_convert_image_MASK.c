
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_image_params {int imgfmt; int w; int h; int p_w; int p_h; } ;
struct mp_sws_context {struct mp_log* log; struct mp_image_params params; } ;
struct mp_log {int dummy; } ;
struct mp_image {struct mp_log* log; struct mp_image_params params; } ;


 int FUNC_0 (struct mp_log*,char*) ;
 struct mp_sws_context* FUNC_1 (int,int,int) ;
 int FUNC_2 (struct mp_sws_context*,struct mp_sws_context*) ;
 struct mp_sws_context* FUNC_3 (struct mp_sws_context*) ;
 scalar_t__ FUNC_4 (struct mp_image_params*,struct mp_image_params*) ;
 int FUNC_5 (struct mp_image_params*,int*,int*) ;
 int FUNC_6 (struct mp_image_params*) ;
 struct mp_sws_context* FUNC_7 (int *) ;
 int FUNC_8 (struct mp_sws_context*,struct mpv_global*) ;
 scalar_t__ FUNC_9 (struct mp_sws_context*,struct mp_sws_context*,struct mp_sws_context*) ;
 int FUNC_10 (struct mp_sws_context*) ;

struct mp_image *FUNC_11(struct mp_image *VAR_0, int VAR_1,
                               struct mpv_global *VAR_2, struct mp_log *VAR_3)
{
    int VAR_4, VAR_5;
    FUNC_5(&VAR_0->params, &VAR_4, &VAR_5);

    struct mp_image_params VAR_6 = {
        .imgfmt = VAR_1,
        .w = VAR_4,
        .h = VAR_5,
        .p_w = 1,
        .p_h = 1,
    };
    FUNC_6(&VAR_6);

    if (FUNC_4(&VAR_6, &VAR_0->params))
        return FUNC_3(VAR_0);

    struct mp_image *VAR_7 = FUNC_1(VAR_6.imgfmt, VAR_6.w, VAR_6.h);
    if (!VAR_7) {
        FUNC_0(VAR_3, "Out of memory.\n");
        return ((void*)0);
    }
    FUNC_2(VAR_7, VAR_0);

    VAR_7->params = VAR_6;

    struct mp_sws_context *VAR_8 = FUNC_7(((void*)0));
    VAR_8->log = VAR_3;
    if (VAR_2)
        FUNC_8(VAR_8, VAR_2);
    bool VAR_9 = FUNC_9(VAR_8, VAR_7, VAR_0) >= 0;
    FUNC_10(VAR_8);

    if (!VAR_9) {
        FUNC_0(VAR_3, "Error when converting image.\n");
        FUNC_10(VAR_7);
        return ((void*)0);
    }

    return VAR_7;
}
