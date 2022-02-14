
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queued_wakeup; int lock; } ;
typedef TYPE_1__ mpv_handle ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(mpv_handle *VAR_0)
{
    FUNC_0(&VAR_0->lock);
    VAR_0->queued_wakeup = 1;
    FUNC_2(VAR_0);
    FUNC_1(&VAR_0->lock);
}
