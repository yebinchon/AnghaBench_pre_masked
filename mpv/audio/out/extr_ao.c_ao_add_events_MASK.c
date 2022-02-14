
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao {int wakeup_ctx; int (* wakeup_cb ) (int ) ;int events_; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ao *VAR_0, int VAR_1)
{
    FUNC_0(&VAR_0->events_, VAR_1);
    VAR_0->wakeup_cb(VAR_0->wakeup_ctx);
}
