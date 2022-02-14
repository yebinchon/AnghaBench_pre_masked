
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct TYPE_6__ {scalar_t__ filter; struct mp_frame frame; } ;
struct rotate_priv {int prev_rotate; scalar_t__ prev_imgfmt; int target_rotate; TYPE_2__ sub; } ;
struct mp_stream_info {scalar_t__ rotate90; } ;
struct TYPE_5__ {int rotate; } ;
struct mp_image {scalar_t__ imgfmt; TYPE_1__ params; } ;
struct mp_filter {struct rotate_priv* priv; } ;


 int FUNC_0 (struct mp_filter*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mp_filter*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct mp_filter*,int ,char*,char**) ;
 struct mp_stream_info* FUNC_4 (struct mp_filter*) ;
 scalar_t__ FUNC_5 (struct mp_frame) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (scalar_t__) ;
 char* FUNC_10 (int,char*,double) ;

__attribute__((used)) static void FUNC_11(struct mp_filter *VAR_3)
{
    struct rotate_priv *VAR_4 = VAR_3->priv;

    if (!FUNC_8(&VAR_4->sub))
        return;

    struct mp_frame VAR_5 = VAR_4->sub.frame;

    if (FUNC_5(VAR_5)) {
        FUNC_6(&VAR_4->sub);
        return;
    }

    if (VAR_5.type != VAR_0) {
        FUNC_0(VAR_3, "video input required!\n");
        return;
    }

    struct mp_image *VAR_6 = VAR_5.data;

    if (VAR_6->params.rotate == VAR_4->prev_rotate &&
        VAR_6->imgfmt == VAR_4->prev_imgfmt)
    {
        VAR_6->params.rotate = VAR_4->target_rotate;
        FUNC_6(&VAR_4->sub);
        return;
    }

    if (!FUNC_7(&VAR_4->sub))
        return;

    FUNC_2(!VAR_4->sub.filter);

    int VAR_7 = VAR_4->prev_rotate = VAR_6->params.rotate;
    VAR_4->target_rotate = VAR_7;
    VAR_4->prev_imgfmt = VAR_6->imgfmt;

    struct mp_stream_info *VAR_8 = FUNC_4(VAR_3);
    if (VAR_7 == 0 || (VAR_8 && VAR_8->rotate90 && !(VAR_7 % 90))) {
        FUNC_6(&VAR_4->sub);
        return;
    }

    if (!FUNC_9(VAR_6->imgfmt)) {
        FUNC_0(VAR_3, "Video rotation with this format not supported\n");
        FUNC_6(&VAR_4->sub);
        return;
    }

    double VAR_9 = VAR_7 / 360.0 * VAR_2 * 2;
    char *VAR_10[] = {"angle", FUNC_10(30, "%f", VAR_9),
                    "ow", FUNC_10(30, "rotw(%f)", VAR_9),
                    "oh", FUNC_10(30, "roth(%f)", VAR_9),
                    ((void*)0)};
    VAR_4->sub.filter =
        FUNC_3(VAR_3, VAR_1, "rotate", VAR_10);

    if (VAR_4->sub.filter) {
        FUNC_1(VAR_3, "Inserting rotation filter.\n");
        VAR_4->target_rotate = 0;
    } else {
        FUNC_0(VAR_3, "could not create rotation filter\n");
    }

    FUNC_6(&VAR_4->sub);
}
