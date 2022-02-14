
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int paused; int last_time; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (struct ao*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_0);
    VAR_1->paused = 0;
    VAR_1->last_time = FUNC_1();
}
