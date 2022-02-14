
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mp_image {scalar_t__ imgfmt; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct mp_filter {int * ppins; struct deint_priv* priv; } ;
struct mp_autoconvert {struct mp_filter* f; } ;
struct filter_opts {scalar_t__ deinterlace; } ;
struct TYPE_6__ {struct mp_filter* filter; struct mp_frame frame; } ;
struct deint_priv {scalar_t__ prev_imgfmt; scalar_t__ prev_setting; TYPE_1__ sub; TYPE_5__* opts; } ;
struct TYPE_7__ {struct filter_opts* opts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mp_filter*,char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct mp_autoconvert*) ;
 struct mp_autoconvert* FUNC_4 (struct mp_filter*) ;
 int FUNC_5 (struct mp_autoconvert*,struct mp_image*) ;
 struct mp_filter* FUNC_6 (struct mp_filter*) ;
 int FUNC_7 (int ,int ,struct mp_filter**,int) ;
 void* FUNC_8 (struct mp_filter*,int ,char*,char**) ;
 int FUNC_9 (struct mp_filter*) ;
 scalar_t__ FUNC_10 (struct mp_frame) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_17(struct mp_filter *VAR_5)
{
    struct deint_priv *VAR_6 = VAR_5->priv;

    if (!FUNC_15(&VAR_6->sub))
        return;

    struct mp_frame VAR_7 = VAR_6->sub.frame;

    if (FUNC_10(VAR_7)) {
        FUNC_12(&VAR_6->sub);
        return;
    }

    if (VAR_7.type != VAR_3) {
        FUNC_0(VAR_5, "video input required!\n");
        FUNC_9(VAR_5);
        return;
    }

    FUNC_2(VAR_6->opts);
    struct filter_opts *VAR_8 = VAR_6->opts->opts;

    if (!VAR_8->deinterlace)
        FUNC_13(&VAR_6->sub);

    struct mp_image *VAR_9 = VAR_7.data;

    if (VAR_9->imgfmt == VAR_6->prev_imgfmt && VAR_6->prev_setting == VAR_8->deinterlace) {
        FUNC_12(&VAR_6->sub);
        return;
    }

    if (!FUNC_14(&VAR_6->sub))
        return;

    FUNC_1(!VAR_6->sub.filter);

    VAR_6->prev_imgfmt = VAR_9->imgfmt;
    VAR_6->prev_setting = VAR_8->deinterlace;
    if (!VAR_6->prev_setting) {
        FUNC_12(&VAR_6->sub);
        return;
    }

    if (VAR_9->imgfmt == VAR_2) {
        char *VAR_10[] = {"deint", "yes", ((void*)0)};
        VAR_6->sub.filter =
            FUNC_8(VAR_5, VAR_4, "vdpaupp", VAR_10);
    } else if (VAR_9->imgfmt == VAR_1) {
        VAR_6->sub.filter =
            FUNC_8(VAR_5, VAR_4, "d3d11vpp", ((void*)0));
    } else if (VAR_9->imgfmt == VAR_0) {
        char *VAR_11[] = {"mode", "send_field", ((void*)0)};
        VAR_6->sub.filter =
            FUNC_8(VAR_5, VAR_4, "yadif_cuda", VAR_11);
    } else {
        struct mp_filter *VAR_12 = FUNC_6(VAR_5);
        struct mp_filter *VAR_13[2] = {0};

        struct mp_autoconvert *VAR_14 = FUNC_4(VAR_12);
        if (VAR_14) {
            VAR_13[0] = VAR_14->f;

            FUNC_3(VAR_14);

            if (!FUNC_5(VAR_14, VAR_9)) {
                FUNC_0(VAR_5, "no deinterlace filter available for format %s\n",
                       FUNC_11(VAR_9->imgfmt));
                FUNC_16(VAR_12);
                FUNC_12(&VAR_6->sub);
                return;
            }
        }

        char *VAR_15[] = {"mode", "send_field", ((void*)0)};
        VAR_13[1] =
            FUNC_8(VAR_12, VAR_4, "yadif", VAR_15);

        FUNC_7(VAR_12->ppins[0], VAR_12->ppins[1], VAR_13, 2);
        VAR_6->sub.filter = VAR_12;
    }

    if (!VAR_6->sub.filter)
        FUNC_0(VAR_5, "creating deinterlacer failed\n");

    FUNC_12(&VAR_6->sub);
}
