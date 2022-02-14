
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int (* Flush ) () ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_1(VAR_0->vo);
    VAR_1->Flush();
}
