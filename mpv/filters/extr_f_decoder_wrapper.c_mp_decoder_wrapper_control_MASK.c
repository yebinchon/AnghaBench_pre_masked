
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {TYPE_2__* decoder; } ;
struct mp_decoder_wrapper {TYPE_1__* f; } ;
typedef enum dec_ctrl { ____Placeholder_dec_ctrl } dec_ctrl ;
struct TYPE_4__ {int (* control ) (int ,int,void*) ;int f; } ;
struct TYPE_3__ {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,void*) ;

int FUNC_1(struct mp_decoder_wrapper *VAR_1,
                               enum dec_ctrl VAR_2, void *VAR_3)
{
    struct priv *VAR_4 = VAR_1->f->priv;
    if (VAR_4->decoder && VAR_4->decoder->control)
        return VAR_4->decoder->control(VAR_4->decoder->f, VAR_2, VAR_3);
    return VAR_0;
}
