
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int encoding; } ;
typedef TYPE_1__ robj ;
typedef int intset ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int *) ;
 int * FUNC_1 () ;

robj *FUNC_2(void) {
    intset *VAR_2 = FUNC_1();
    robj *VAR_3 = FUNC_0(VAR_1,VAR_2);
    VAR_3->encoding = VAR_0;
    return VAR_3;
}
