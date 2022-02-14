
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int refcount; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;

void FUNC_4(robj *VAR_3) {
    size_t VAR_4 = FUNC_3(VAR_3);
    if (VAR_4 > VAR_1 && VAR_3->refcount == 1) {
        FUNC_0(VAR_2,1);
        FUNC_1(VAR_0,VAR_3,((void*)0),((void*)0));
    } else {
        FUNC_2(VAR_3);
    }
}
