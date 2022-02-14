
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int cond; int flags; int inited; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_3 ;

void FUNC_4 (void)
{
    int VAR_4;

    if (!VAR_3.inited) {
        return;
    }

    FUNC_2 (&VAR_3.lock);
    VAR_3.flags |= VAR_1;
    FUNC_3 (&VAR_3.lock);



    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        (void) FUNC_0 (VAR_4);
    }

    FUNC_2 (&VAR_3.lock);
    VAR_3.flags |= VAR_0;
    VAR_3.flags &= ~VAR_1;
    FUNC_1(&VAR_3.cond);
    FUNC_3 (&VAR_3.lock);
}
