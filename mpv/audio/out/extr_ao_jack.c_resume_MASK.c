
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int activated; TYPE_1__* opts; int client; } ;
struct ao {struct priv* priv; } ;
struct TYPE_2__ {scalar_t__ connect; } ;


 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (struct ao*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (!VAR_1->activated) {
        VAR_1->activated = 1;

        if (FUNC_2(VAR_1->client))
            FUNC_0(VAR_0, "activate failed\n");

        if (VAR_1->opts->connect)
            FUNC_1(VAR_0);
    }
}
