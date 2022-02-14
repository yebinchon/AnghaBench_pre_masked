
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t free; int len; unsigned char* b; } ;
typedef TYPE_1__ mp_buf ;
typedef int lua_State ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,size_t,size_t) ;

void FUNC_2(lua_State *VAR_0, mp_buf *VAR_1, const unsigned char *VAR_2, size_t VAR_3) {
    if (VAR_1->free < VAR_3) {
        size_t VAR_4 = (VAR_1->len+VAR_3)*2;

        VAR_1->b = (unsigned char*)FUNC_1(VAR_0, VAR_1->b, VAR_1->len + VAR_1->free, VAR_4);
        VAR_1->free = VAR_4 - VAR_1->len;
    }
    FUNC_0(VAR_1->b+VAR_1->len,VAR_2,VAR_3);
    VAR_1->len += VAR_3;
    VAR_1->free -= VAR_3;
}
