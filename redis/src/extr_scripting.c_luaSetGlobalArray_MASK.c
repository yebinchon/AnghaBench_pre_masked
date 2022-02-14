
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(lua_State *VAR_0, char *VAR_1, robj **VAR_2, int VAR_3) {
    int VAR_4;

    FUNC_0(VAR_0);
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        FUNC_1(VAR_0,(char*)VAR_2[VAR_4]->ptr,FUNC_4(VAR_2[VAR_4]->ptr));
        FUNC_2(VAR_0,-2,VAR_4+1);
    }
    FUNC_3(VAR_0,VAR_1);
}
