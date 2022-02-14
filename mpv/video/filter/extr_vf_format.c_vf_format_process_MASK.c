
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct priv {TYPE_3__* opts; TYPE_4__* conv; } ;
struct TYPE_5__ {int levels; } ;
struct mp_image_params {int imgfmt; scalar_t__ hw_subfmt; TYPE_1__ color; } ;
struct mp_image {int imgfmt; struct mp_image_params params; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct mp_filter {int * ppins; struct priv* priv; } ;
struct TYPE_8__ {TYPE_2__* f; } ;
struct TYPE_7__ {int fmt; scalar_t__ convert; } ;
struct TYPE_6__ {int * pins; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,struct mp_image_params*) ;
 int FUNC_1 (struct mp_image_params*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct mp_frame) ;
 struct mp_frame FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,struct mp_image_params*) ;

__attribute__((used)) static void FUNC_7(struct mp_filter *VAR_4)
{
    struct priv *VAR_5 = VAR_4->priv;

    if (FUNC_3(VAR_5->conv->f->pins[0], VAR_4->ppins[0])) {
        struct mp_frame VAR_6 = FUNC_5(VAR_4->ppins[0]);

        if (VAR_5->opts->convert && VAR_6.type == VAR_3) {
            struct mp_image *VAR_7 = VAR_6.data;
            struct mp_image_params VAR_8 = VAR_7->params;
            int VAR_9 = VAR_5->opts->fmt;


            if (FUNC_2(VAR_7->imgfmt) == VAR_2 &&
                VAR_9 && FUNC_2(VAR_9) == VAR_0)
            {
                VAR_8.color.levels = VAR_1;
            }

            FUNC_6(VAR_5->opts, &VAR_8);

            if (VAR_8.imgfmt != VAR_9) {
                VAR_8.imgfmt = VAR_9;
                VAR_8.hw_subfmt = 0;
            }
            FUNC_1(&VAR_8);

            FUNC_0(VAR_5->conv, &VAR_8);
        }

        FUNC_4(VAR_5->conv->f->pins[0], VAR_6);
    }

    if (FUNC_3(VAR_4->ppins[1], VAR_5->conv->f->pins[1])) {
        struct mp_frame VAR_10 = FUNC_5(VAR_5->conv->f->pins[1]);

        if (!VAR_5->opts->convert && VAR_10.type == VAR_3) {
            struct mp_image *VAR_11 = VAR_10.data;

            FUNC_6(VAR_5->opts, &VAR_11->params);
            FUNC_1(&VAR_11->params);
        }

        FUNC_4(VAR_4->ppins[1], VAR_10);
    }
}
