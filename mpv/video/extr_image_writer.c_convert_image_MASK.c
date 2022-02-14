
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_global {int dummy; } ;
struct TYPE_2__ {scalar_t__ space; int levels; } ;
struct mp_image_params {int imgfmt; int w; int h; int p_w; int p_h; int chroma_location; TYPE_1__ color; } ;
struct mp_sws_context {struct mp_log* log; struct mp_image_params params; } ;
struct mp_log {int dummy; } ;
struct mp_image {struct mp_log* log; struct mp_image_params params; } ;
typedef enum mp_csp_levels { ____Placeholder_mp_csp_levels } mp_csp_levels ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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

__attribute__((used)) static struct mp_image *FUNC_11(struct mp_image *VAR_3, int VAR_4,
                                      enum mp_csp_levels VAR_5,
                                      struct mpv_global *VAR_6,
                                      struct mp_log *VAR_7)
{
    int VAR_8, VAR_9;
    FUNC_5(&VAR_3->params, &VAR_8, &VAR_9);

    struct mp_image_params VAR_10 = {
        .imgfmt = VAR_4,
        .w = VAR_8,
        .h = VAR_9,
        .p_w = 1,
        .p_h = 1,
    };
    FUNC_6(&VAR_10);


    if (VAR_10.color.space != VAR_2) {


        VAR_10.color.levels = VAR_5;
        VAR_10.color.space = VAR_1;
        VAR_10.chroma_location = VAR_0;
        FUNC_6(&VAR_10);
    }

    if (FUNC_4(&VAR_10, &VAR_3->params))
        return FUNC_3(VAR_3);

    struct mp_image *VAR_11 = FUNC_1(VAR_10.imgfmt, VAR_10.w, VAR_10.h);
    if (!VAR_11) {
        FUNC_0(VAR_7, "Out of memory.\n");
        return ((void*)0);
    }
    FUNC_2(VAR_11, VAR_3);

    VAR_11->params = VAR_10;

    struct mp_sws_context *VAR_12 = FUNC_7(((void*)0));
    VAR_12->log = VAR_7;
    if (VAR_6)
        FUNC_8(VAR_12, VAR_6);
    bool VAR_13 = FUNC_9(VAR_12, VAR_11, VAR_3) >= 0;
    FUNC_10(VAR_12);

    if (!VAR_13) {
        FUNC_0(VAR_7, "Error when converting image.\n");
        FUNC_10(VAR_11);
        return ((void*)0);
    }

    return VAR_11;
}
