
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int encoding; } ;
typedef TYPE_1__ robj ;
typedef int dict ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_2 ;

robj *FUNC_2(void) {
    dict *VAR_3 = FUNC_1(&VAR_2,((void*)0));
    robj *VAR_4 = FUNC_0(VAR_1,VAR_3);
    VAR_4->encoding = VAR_0;
    return VAR_4;
}
