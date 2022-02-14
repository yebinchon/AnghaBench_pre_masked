
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int todo_before_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_4 ;

void FUNC_3(void) {


    if (VAR_4.cluster->todo_before_sleep & VAR_1)
        FUNC_0();


    if (VAR_4.cluster->todo_before_sleep & VAR_3)
        FUNC_2();


    if (VAR_4.cluster->todo_before_sleep & VAR_2) {
        int VAR_5 = VAR_4.cluster->todo_before_sleep &
                    VAR_0;
        FUNC_1(VAR_5);
    }



    VAR_4.cluster->todo_before_sleep = 0;
}
