
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int paused; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    if (!VAR_2->paused)
        FUNC_0(VAR_0);
    VAR_2->paused = 1;
}
