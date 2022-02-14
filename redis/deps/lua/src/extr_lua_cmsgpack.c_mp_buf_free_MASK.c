
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int free; struct TYPE_4__* b; } ;
typedef TYPE_1__ mp_buf ;
typedef int lua_State ;


 int FUNC_0 (int *,TYPE_1__*,int,int ) ;

void FUNC_1(lua_State *VAR_0, mp_buf *VAR_1) {
    FUNC_0(VAR_0, VAR_1->b, VAR_1->len + VAR_1->free, 0);
    FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1), 0);
}
