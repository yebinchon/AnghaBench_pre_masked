
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int hdc; int context; } ;


 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (struct ra_ctx*) ;
 int FUNC_2 (struct ra_ctx*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    struct ra_ctx *VAR_1 = VAR_0;
    struct priv *VAR_2 = VAR_1->priv;

    if (!FUNC_2(VAR_1))
        return;

    FUNC_0(VAR_1);
    if (!VAR_2->context)
        FUNC_1(VAR_1);

    FUNC_3(VAR_2->hdc, ((void*)0));
}
