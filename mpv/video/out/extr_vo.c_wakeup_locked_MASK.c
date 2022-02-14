
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_internal {int need_wakeup; int wakeup; } ;
struct vo {TYPE_1__* driver; struct vo_internal* in; } ;
struct TYPE_2__ {int (* wakeup ) (struct vo*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vo*) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;

    FUNC_0(&VAR_1->wakeup);
    if (VAR_0->driver->wakeup)
        VAR_0->driver->wakeup(VAR_0);
    VAR_1->need_wakeup = 1;
}
