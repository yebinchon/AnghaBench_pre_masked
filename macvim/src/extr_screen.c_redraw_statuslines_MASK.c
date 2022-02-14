
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ w_redr_status; struct TYPE_4__* w_next; } ;
typedef TYPE_1__ win_T ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2()
{
    win_T *VAR_2;

    for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->w_next)
 if (VAR_2->w_redr_status)
     FUNC_1(VAR_2);
    if (VAR_1)
 FUNC_0();
}
