
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_image_params {int dummy; } ;
struct priv {struct mp_image_params dec_format; } ;
struct mp_decoder_wrapper {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;



void FUNC_0(struct mp_decoder_wrapper *VAR_0,
                                             struct mp_image_params *VAR_1)
{
    struct priv *VAR_2 = VAR_0->f->priv;
    *VAR_1 = VAR_2->dec_format;
}
