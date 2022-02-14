
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int opt_cache; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (struct priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct priv*) ;

__attribute__((used)) static void FUNC_3(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_1(VAR_1->opt_cache);

    FUNC_0(VAR_1);
    FUNC_2(VAR_1);
}
