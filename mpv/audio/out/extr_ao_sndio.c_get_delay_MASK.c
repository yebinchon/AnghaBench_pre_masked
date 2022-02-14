
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rate; } ;
struct priv {double delay; TYPE_1__ par; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (struct ao*) ;

__attribute__((used)) static double FUNC_1(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_0);

    return VAR_1->delay / (double)VAR_1->par.rate;
}
