
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

unsigned long FUNC_2(const robj *VAR_1) {
    if (VAR_1->encoding == VAR_0) {
        return FUNC_0(VAR_1->ptr);
    } else {
        FUNC_1("Unknown list encoding");
    }
}
