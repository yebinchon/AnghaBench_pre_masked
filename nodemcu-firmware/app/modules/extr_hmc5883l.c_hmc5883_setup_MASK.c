
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
    uint8_t VAR_2, VAR_3, VAR_4;

    VAR_2 = FUNC_1(VAR_0, 10);
    VAR_3 = FUNC_1(VAR_0, 11);
    VAR_4 = FUNC_1(VAR_0, 12);

    if ((VAR_2 != 0x48) || (VAR_3 != 0x34) || (VAR_4 != 0x33)) {
        return FUNC_0(VAR_1, "device not found");
    }


    FUNC_2(VAR_0, 0x00, 0x70);


    FUNC_2(VAR_0, 0x01, 0xA0);


    FUNC_2(VAR_0, 0x02, 0x00);

    return 0;
}
