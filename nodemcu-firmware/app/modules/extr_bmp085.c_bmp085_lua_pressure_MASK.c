
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lua_State ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ AC4; scalar_t__ B1; scalar_t__ AC3; scalar_t__ AC1; scalar_t__ AC2; scalar_t__ B2; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(lua_State* VAR_1) {
    uint8_t VAR_2 = 0;
    int32_t VAR_3;
    int32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    if (FUNC_3(VAR_1, 1)) {
        VAR_2 = FUNC_2(VAR_1, 1);
        if (VAR_2 > 3) {
            VAR_2 = 3;
        }
    }

    VAR_3 = FUNC_0(VAR_2);
    VAR_9 = FUNC_1();

    VAR_10 = VAR_9 - 4000;
    VAR_4 = ((int32_t)VAR_0.B2 * ((VAR_10 * VAR_10) >> 12)) >> 11;
    VAR_5 = ((int32_t)VAR_0.AC2 * VAR_10) >> 11;
    VAR_6 = VAR_4 + VAR_5;
    VAR_7 = ((((int32_t)VAR_0.AC1 << 2) + VAR_6) * (1 << VAR_2) + 2) >> 2;
    VAR_4 = ((int32_t)VAR_0.AC3 * VAR_10) >> 13;
    VAR_5 = ((int32_t)VAR_0.B1 * ((VAR_10 * VAR_10) >> 12)) >> 16;
    VAR_6 = (VAR_4 + VAR_5 + 2) >> 2;
    VAR_8 = ((int32_t)VAR_0.AC4 * (VAR_6 + 32768)) >> 15;
    VAR_11 = (VAR_3 - VAR_7) * (50000 / (1 << VAR_2));
    VAR_3 = (VAR_11 / VAR_8) << 1;
    VAR_4 = (VAR_3 >> 8) * (VAR_3 >> 8);
    VAR_4 = (VAR_4 * 3038) >> 16;
    VAR_5 = (-7357 * VAR_3) >> 16;
    VAR_3 = VAR_3 + ((VAR_4 + VAR_5 + 3791) >> 4);

    FUNC_4(VAR_1, VAR_3);
    return 1;
}
