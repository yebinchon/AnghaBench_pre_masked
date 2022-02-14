
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t alloc; size_t len; char* buf; } ;
typedef TYPE_1__ vstr_t ;


 int FUNC_0 (TYPE_1__*,int) ;

char *FUNC_1(vstr_t *VAR_0) {

    if (VAR_0->alloc == VAR_0->len) {
        FUNC_0(VAR_0, 1);
    }
    VAR_0->buf[VAR_0->len] = '\0';
    return VAR_0->buf;
}
