
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
typedef int lua_State ;
struct TYPE_2__ {int currentline; int active; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 () ;

int FUNC_6(lua_State *VAR_1) {
    if (!VAR_0.active) return 0;
    int VAR_2 = FUNC_2(VAR_1);
    sds VAR_3 = FUNC_4(FUNC_5(),"<debug> line %d: ", VAR_0.currentline);
    while(VAR_2--) {
        VAR_3 = FUNC_0(VAR_3,VAR_1,-1 - VAR_2);
        if (VAR_2 != 0) VAR_3 = FUNC_3(VAR_3,", ",2);
    }
    FUNC_1(VAR_3);
    return 0;
}
