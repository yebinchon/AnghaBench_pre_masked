
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t alloc; char* buf; int fixed_buf; scalar_t__ len; } ;
typedef TYPE_1__ vstr_t ;



void FUNC_0(vstr_t *VAR_0, size_t VAR_1, char *VAR_2) {
    VAR_0->alloc = VAR_1;
    VAR_0->len = 0;
    VAR_0->buf = VAR_2;
    VAR_0->fixed_buf = 1;
}
