
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; scalar_t__ buf; } ;
typedef TYPE_1__ vstr_t ;


 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;

void FUNC_1(vstr_t *VAR_0, size_t VAR_1, size_t VAR_2) {
    if (VAR_1 >= VAR_0->len) {
        return;
    } else if (VAR_1 + VAR_2 >= VAR_0->len) {
        VAR_0->len = VAR_1;
    } else {
        FUNC_0(VAR_0->buf + VAR_1, VAR_0->buf + VAR_1 + VAR_2, VAR_0->len - VAR_1 - VAR_2);
        VAR_0->len -= VAR_2;
    }
}
