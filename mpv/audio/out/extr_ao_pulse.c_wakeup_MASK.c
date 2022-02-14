
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int wakeup_status; int wakeup_lock; int wakeup; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_1(&VAR_1->wakeup_lock);
    VAR_1->wakeup_status = 1;
    FUNC_0(&VAR_1->wakeup);
    FUNC_2(&VAR_1->wakeup_lock);
}
