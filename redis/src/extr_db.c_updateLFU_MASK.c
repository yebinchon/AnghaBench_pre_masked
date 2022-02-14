
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lru; } ;
typedef TYPE_1__ robj ;


 unsigned long FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (unsigned long) ;

void FUNC_3(robj *VAR_0) {
    unsigned long VAR_1 = FUNC_0(VAR_0);
    VAR_1 = FUNC_2(VAR_1);
    VAR_0->lru = (FUNC_1()<<8) | VAR_1;
}
