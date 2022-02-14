
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(robj *VAR_1) {
    if (VAR_1->encoding == VAR_0) {
        FUNC_0(VAR_1->ptr);
    } else {
        FUNC_1("Unknown list encoding type");
    }
}
