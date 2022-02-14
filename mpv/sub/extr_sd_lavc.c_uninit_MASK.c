
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_lavc_priv {int avctx; int * subs; } ;
struct sd {struct sd_lavc_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sd_lavc_priv*) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_1)
{
    struct sd_lavc_priv *VAR_2 = VAR_1->priv;

    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_1(&VAR_2->subs[VAR_3]);
    FUNC_0(&VAR_2->avctx);
    FUNC_2(VAR_2);
}
