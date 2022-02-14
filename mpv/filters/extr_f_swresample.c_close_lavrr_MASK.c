
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int pool_fmt; int avrctx_fmt; int pre_out_fmt; scalar_t__ avrctx_out; scalar_t__ avrctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct priv *VAR_0)
{
    if (VAR_0->avrctx)
        FUNC_1(VAR_0->avrctx);
    FUNC_2(&VAR_0->avrctx);
    if (VAR_0->avrctx_out)
        FUNC_1(VAR_0->avrctx_out);
    FUNC_2(&VAR_0->avrctx_out);

    FUNC_0(&VAR_0->pre_out_fmt);
    FUNC_0(&VAR_0->avrctx_fmt);
    FUNC_0(&VAR_0->pool_fmt);
}
