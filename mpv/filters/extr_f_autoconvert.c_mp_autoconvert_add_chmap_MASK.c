
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int force_update; int chmaps; } ;
struct mp_chmap {int dummy; } ;
struct mp_autoconvert {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (int *,struct mp_chmap*) ;

void FUNC_1(struct mp_autoconvert *VAR_0, struct mp_chmap *VAR_1)
{
    struct priv *VAR_2 = VAR_0->f->priv;

    FUNC_0(&VAR_2->chmaps, VAR_1);
    VAR_2->force_update = 1;
}
