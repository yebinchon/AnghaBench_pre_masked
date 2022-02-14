
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int force_update; int num_afmts; int afmts; } ;
struct mp_autoconvert {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (struct priv*,int ,int ,int) ;

void FUNC_1(struct mp_autoconvert *VAR_0, int VAR_1)
{
    struct priv *VAR_2 = VAR_0->f->priv;

    FUNC_0(VAR_2, VAR_2->afmts, VAR_2->num_afmts, VAR_1);
    VAR_2->force_update = 1;
}
