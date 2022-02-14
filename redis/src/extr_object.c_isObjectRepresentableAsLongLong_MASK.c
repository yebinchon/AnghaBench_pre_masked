
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,long long*) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

int FUNC_2(robj *VAR_3, long long *VAR_4) {
    FUNC_1(((void*)0),VAR_3,VAR_3->type == VAR_2);
    if (VAR_3->encoding == VAR_1) {
        if (VAR_4) *VAR_4 = (long) VAR_3->ptr;
        return VAR_0;
    } else {
        return FUNC_0(VAR_3->ptr,VAR_4);
    }
}
