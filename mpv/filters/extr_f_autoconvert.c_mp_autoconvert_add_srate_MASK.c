
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {size_t num_srates; int force_update; scalar_t__* srates; } ;
struct mp_autoconvert {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (struct priv*,scalar_t__*,size_t,int) ;
 int FUNC_1 (struct priv*,scalar_t__*,size_t) ;

void FUNC_2(struct mp_autoconvert *VAR_0, int VAR_1)
{
    struct priv *VAR_2 = VAR_0->f->priv;

    FUNC_0(VAR_2, VAR_2->srates, VAR_2->num_srates, VAR_1);

    FUNC_1(VAR_2, VAR_2->srates, VAR_2->num_srates);
    VAR_2->srates[VAR_2->num_srates] = 0;
    VAR_2->force_update = 1;
}
