
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ err; } ;
typedef TYPE_1__ mp_cur ;
typedef int lua_State ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void FUNC_4(lua_State *VAR_1, mp_cur *VAR_2, size_t VAR_3) {
    FUNC_0(VAR_3 <= VAR_0);
    FUNC_1(VAR_1);
    while(VAR_3--) {
        FUNC_3(VAR_1,VAR_2);
        if (VAR_2->err) return;
        FUNC_3(VAR_1,VAR_2);
        if (VAR_2->err) return;
        FUNC_2(VAR_1,-3);
    }
}
