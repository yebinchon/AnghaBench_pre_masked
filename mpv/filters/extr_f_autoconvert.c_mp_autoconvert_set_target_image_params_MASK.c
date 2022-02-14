
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_image_params {scalar_t__ imgfmt; scalar_t__ hw_subfmt; } ;
struct priv {int imgparams_set; int num_imgfmts; scalar_t__* imgfmts; scalar_t__* subfmts; struct mp_image_params imgparams; } ;
struct mp_autoconvert {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (struct mp_autoconvert*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mp_image_params*,struct mp_image_params*) ;

void FUNC_2(struct mp_autoconvert *VAR_0,
                                            struct mp_image_params *VAR_1)
{
    struct priv *VAR_2 = VAR_0->f->priv;

    if (VAR_2->imgparams_set && FUNC_1(&VAR_2->imgparams, VAR_1) &&
        VAR_2->num_imgfmts == 1 && VAR_2->imgfmts[0] == VAR_1->imgfmt &&
        VAR_2->subfmts[0] == VAR_1->hw_subfmt)
        return;

    VAR_2->imgparams = *VAR_1;
    VAR_2->imgparams_set = 1;

    VAR_2->num_imgfmts = 0;
    FUNC_0(VAR_0, VAR_1->imgfmt, VAR_1->hw_subfmt);
}
