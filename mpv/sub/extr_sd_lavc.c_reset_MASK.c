
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_lavc_priv {int current_pts; int avctx; int * subs; } ;
struct sd {struct sd_lavc_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_2)
{
    struct sd_lavc_priv *VAR_3 = VAR_2->priv;

    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        FUNC_1(&VAR_3->subs[VAR_4]);

    FUNC_0(VAR_3->avctx);

    VAR_3->current_pts = VAR_1;
}
