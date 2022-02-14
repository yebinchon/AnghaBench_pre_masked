
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int intset ;
typedef int dict ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (int const*) ;
 unsigned long FUNC_1 (int const*) ;
 int FUNC_2 (char*) ;

unsigned long FUNC_3(const robj *VAR_2) {
    if (VAR_2->encoding == VAR_0) {
        return FUNC_0((const dict*)VAR_2->ptr);
    } else if (VAR_2->encoding == VAR_1) {
        return FUNC_1((const intset*)VAR_2->ptr);
    } else {
        FUNC_2("Unknown set encoding");
    }
}
