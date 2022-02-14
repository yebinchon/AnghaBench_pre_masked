
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coro {int yield_value; TYPE_1__* switcher; } ;
struct TYPE_2__ {int caller; int callee; } ;


 int FUNC_0 (struct coro*) ;
 int FUNC_1 (int *,int *) ;

inline int FUNC_2(struct coro *VAR_0, int VAR_1)
{
    FUNC_0(VAR_0);
    VAR_0->yield_value = VAR_1;
    FUNC_1(&VAR_0->switcher->callee, &VAR_0->switcher->caller);
    return VAR_0->yield_value;
}
