
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (long) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;

size_t FUNC_4(robj *VAR_1) {
    FUNC_3(((void*)0),VAR_1,VAR_1->type == VAR_0);
    if (FUNC_1(VAR_1)) {
        return FUNC_2(VAR_1->ptr);
    } else {
        return FUNC_0((long)VAR_1->ptr);
    }
}
