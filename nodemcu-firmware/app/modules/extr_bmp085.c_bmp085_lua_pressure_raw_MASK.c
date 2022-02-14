
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_0) {
    uint8_t VAR_1 = 0;
    int32_t VAR_2;

    if (FUNC_2(VAR_0, 1)) {
        VAR_1 = FUNC_1(VAR_0, 1);
        if (VAR_1 > 3) {
            VAR_1 = 3;
        }
    }

    VAR_2 = FUNC_0(VAR_1);
    FUNC_3(VAR_0, VAR_2);
    return 1;
}
