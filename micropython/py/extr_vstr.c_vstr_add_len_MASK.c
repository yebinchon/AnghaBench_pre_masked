
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; int len; } ;
typedef TYPE_1__ vstr_t ;


 int FUNC_0 (TYPE_1__*,size_t) ;

char *FUNC_1(vstr_t *VAR_0, size_t VAR_1) {
    FUNC_0(VAR_0, VAR_1);
    char *VAR_2 = VAR_0->buf + VAR_0->len;
    VAR_0->len += VAR_1;
    return VAR_2;
}
