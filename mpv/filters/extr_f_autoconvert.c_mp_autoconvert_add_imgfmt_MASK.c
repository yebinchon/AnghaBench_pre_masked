
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int* imgfmts; size_t num_imgfmts; int* subfmts; int force_update; } ;
struct mp_autoconvert {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (struct priv*,int*,size_t) ;

void FUNC_1(struct mp_autoconvert *VAR_0, int VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_0->f->priv;

    FUNC_0(VAR_3, VAR_3->imgfmts, VAR_3->num_imgfmts);
    FUNC_0(VAR_3, VAR_3->subfmts, VAR_3->num_imgfmts);

    VAR_3->imgfmts[VAR_3->num_imgfmts] = VAR_1;
    VAR_3->subfmts[VAR_3->num_imgfmts] = VAR_2;

    VAR_3->num_imgfmts += 1;
    VAR_3->force_update = 1;
}
