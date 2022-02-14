
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int lock; int cond; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_4 (void)
{
    FUNC_1 (&VAR_3, VAR_2);

    FUNC_2 (&VAR_4.lock);

    while (VAR_4.flags & VAR_1) {
        FUNC_0 (&VAR_4.cond, &VAR_4.lock, -1);
    }
    VAR_4.flags &= ~VAR_0;
    FUNC_3 (&VAR_4.lock);
}
