
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* leak_next; struct TYPE_2__* leak_prev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;

void FUNC_3(void)
{
    FUNC_1(&VAR_3);
    VAR_0 = 1;
    if (!VAR_1.leak_prev && !VAR_1.leak_next) {
        VAR_1.leak_prev = &VAR_1;
        VAR_1.leak_next = &VAR_1;
        FUNC_0(VAR_2);
    }
    FUNC_2(&VAR_3);
}
