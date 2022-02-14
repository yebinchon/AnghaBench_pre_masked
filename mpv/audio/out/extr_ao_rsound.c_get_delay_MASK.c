
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int rd; } ;
struct ao {struct priv* priv; } ;


 double FUNC_0 (int ) ;

__attribute__((used)) static double FUNC_1(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    return FUNC_0(VAR_1->rd) / 1000.0;
}
