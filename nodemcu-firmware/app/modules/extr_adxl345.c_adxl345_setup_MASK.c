
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(lua_State* VAR_3) {
    uint8_t VAR_4;

    VAR_4 = FUNC_5(VAR_2, 0x00);

    if (VAR_4 != 229) {
        return FUNC_0(VAR_3, "device not found");
    }


    FUNC_3(VAR_2);
    FUNC_1(VAR_2, VAR_1, VAR_0);
    FUNC_2(VAR_2, 0x2D);
    FUNC_2(VAR_2, 0x08);
    FUNC_4(VAR_2);

    return 0;
}
