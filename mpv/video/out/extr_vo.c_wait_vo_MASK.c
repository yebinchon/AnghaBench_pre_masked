
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_internal {int need_wakeup; int lock; } ;
struct vo {TYPE_1__* driver; struct vo_internal* in; } ;
typedef int int64_t ;
struct TYPE_2__ {int (* wait_events ) (struct vo*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vo*,int ) ;
 int FUNC_3 (struct vo*,int ) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0, int64_t VAR_1)
{
    struct vo_internal *VAR_2 = VAR_0->in;

    if (VAR_0->driver->wait_events) {
        VAR_0->driver->wait_events(VAR_0, VAR_1);
    } else {
        FUNC_3(VAR_0, VAR_1);
    }
    FUNC_0(&VAR_2->lock);
    VAR_2->need_wakeup = 0;
    FUNC_1(&VAR_2->lock);
}
