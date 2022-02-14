
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int hdc; scalar_t__ context; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ra_ctx*) ;
 int FUNC_2 (int ,int ,struct ra_ctx*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    FUNC_1(VAR_2);
    if (VAR_3->context)
        FUNC_4(VAR_3->hdc, 0);
    FUNC_2(VAR_2->vo, VAR_1, VAR_2);

    FUNC_0(VAR_0);
    FUNC_3(VAR_2->vo);
}
