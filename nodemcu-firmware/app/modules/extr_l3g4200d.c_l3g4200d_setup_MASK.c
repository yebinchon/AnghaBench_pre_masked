
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(lua_State* VAR_1) {
    uint8_t VAR_2;

    VAR_2 = FUNC_1(VAR_0, 0xF);

    if (VAR_2 != 0xD3) {
        return FUNC_0(VAR_1, "device not found");
    }

    FUNC_2(VAR_0, 0x20, 0xF);

    return 0;
}
