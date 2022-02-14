
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int compress; } ;
typedef TYPE_1__ quicklist ;


 int VAR_0 ;

void FUNC_0(quicklist *VAR_1, int VAR_2) {
    if (VAR_2 > VAR_0) {
        VAR_2 = VAR_0;
    } else if (VAR_2 < 0) {
        VAR_2 = 0;
    }
    VAR_1->compress = VAR_2;
}
