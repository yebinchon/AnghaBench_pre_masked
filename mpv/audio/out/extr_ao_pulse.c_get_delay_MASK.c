
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ cfg_latency_hacks; } ;
struct ao {struct priv* priv; } ;


 double FUNC_0 (struct ao*) ;
 double FUNC_1 (struct ao*) ;

__attribute__((used)) static double FUNC_2(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->cfg_latency_hacks) {
        return FUNC_0(VAR_0);
    } else {
        return FUNC_1(VAR_0);
    }
}
