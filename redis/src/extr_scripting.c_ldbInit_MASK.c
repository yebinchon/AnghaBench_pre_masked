
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbuf; scalar_t__ lines; int * src; void* children; void* logs; scalar_t__ active; int * conn; } ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (void*,void (*) (void*)) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;

void FUNC_3(void) {
    VAR_0.conn = ((void*)0);
    VAR_0.active = 0;
    VAR_0.logs = FUNC_0();
    FUNC_1(VAR_0.logs,(void (*)(void*))VAR_1);
    VAR_0.children = FUNC_0();
    VAR_0.src = ((void*)0);
    VAR_0.lines = 0;
    VAR_0.cbuf = FUNC_2();
}
