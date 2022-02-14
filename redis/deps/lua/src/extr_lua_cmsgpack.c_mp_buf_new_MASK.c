
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ free; scalar_t__ len; int * b; } ;
typedef TYPE_1__ mp_buf ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int *,int ,int) ;

mp_buf *FUNC_1(lua_State *VAR_0) {
    mp_buf *VAR_1 = ((void*)0);


    VAR_1 = (mp_buf*)FUNC_0(VAR_0, ((void*)0), 0, sizeof(*VAR_1));

    VAR_1->b = ((void*)0);
    VAR_1->len = VAR_1->free = 0;
    return VAR_1;
}
