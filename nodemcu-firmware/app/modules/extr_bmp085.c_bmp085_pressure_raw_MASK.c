
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int32_t FUNC_6(int VAR_3) {
    int32_t VAR_4;
    int32_t VAR_5, VAR_6, VAR_7;

    FUNC_3(VAR_2);
    FUNC_1(VAR_2, VAR_1, VAR_0);
    FUNC_2(VAR_2, 0xF4);
    FUNC_2(VAR_2, 0x34 + 64 * VAR_3);
    FUNC_4(VAR_2);


    switch (VAR_3) {
        case 0: FUNC_0( 4500); break;
        case 1: FUNC_0( 7500); break;
        case 2: FUNC_0(13500); break;
        case 3: FUNC_0(25500); break;
    }

    VAR_5 = FUNC_5(VAR_2, 0xF6);
    VAR_6 = FUNC_5(VAR_2, 0xF7);
    VAR_7 = FUNC_5(VAR_2, 0xF8);
    VAR_4 = (VAR_5 << 16) | (VAR_6 << 8) | VAR_7;
    VAR_4 = VAR_4 >> (8 - VAR_3);

    return VAR_4;
}
