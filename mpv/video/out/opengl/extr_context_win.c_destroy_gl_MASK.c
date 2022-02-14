
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int * hdc; scalar_t__ context; } ;


 int FUNC_0 (int ,int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    struct ra_ctx *VAR_2 = VAR_1;
    struct priv *VAR_3 = VAR_2->priv;
    if (VAR_3->context)
        FUNC_2(VAR_3->context);
    VAR_3->context = 0;
    if (VAR_3->hdc)
        FUNC_0(FUNC_1(VAR_2->vo), VAR_3->hdc);
    VAR_3->hdc = ((void*)0);
    VAR_0 = ((void*)0);
}
