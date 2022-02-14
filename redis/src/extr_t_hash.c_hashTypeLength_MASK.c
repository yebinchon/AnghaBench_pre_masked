
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int dict ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

unsigned long FUNC_3(const robj *VAR_3) {
    unsigned long VAR_4 = VAR_2;

    if (VAR_3->encoding == VAR_1) {
        VAR_4 = FUNC_2(VAR_3->ptr) / 2;
    } else if (VAR_3->encoding == VAR_0) {
        VAR_4 = FUNC_0((const dict*)VAR_3->ptr);
    } else {
        FUNC_1("Unknown hash encoding");
    }
    return VAR_4;
}
