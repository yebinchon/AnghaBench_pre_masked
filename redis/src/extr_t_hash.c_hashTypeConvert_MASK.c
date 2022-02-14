
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ encoding; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*) ;

void FUNC_2(robj *VAR_2, int VAR_3) {
    if (VAR_2->encoding == VAR_1) {
        FUNC_0(VAR_2, VAR_3);
    } else if (VAR_2->encoding == VAR_0) {
        FUNC_1("Not implemented");
    } else {
        FUNC_1("Unknown hash encoding");
    }
}
