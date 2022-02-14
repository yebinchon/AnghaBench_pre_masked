
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {double start_pts; } ;
struct mp_decoder_wrapper {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;



void FUNC_0(struct mp_decoder_wrapper *VAR_0, double VAR_1)
{
    struct priv *VAR_2 = VAR_0->f->priv;
    VAR_2->start_pts = VAR_1;
}
