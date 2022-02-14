
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; } ;
typedef TYPE_1__ vstr_t ;



void FUNC_0(vstr_t *VAR_0, size_t VAR_1) {
    if (VAR_1 > VAR_0->len) {
        VAR_0->len = 0;
    } else {
        VAR_0->len -= VAR_1;
    }
}
