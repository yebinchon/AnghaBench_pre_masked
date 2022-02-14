
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int const,int const,int const) ;

uint32_t FUNC_4(uint32_t VAR_1) {
    FUNC_1(VAR_0, 8);
    FUNC_1(VAR_0, 9);
    uint8_t VAR_2 = FUNC_0(VAR_1);
    switch (VAR_2) {
        case 129:
            FUNC_2(VAR_0, 9);
            break;
        case 128:
            FUNC_2(VAR_0, 8);
            break;
        case 130:
            FUNC_2(VAR_0, 9);
            FUNC_2(VAR_0, 8);
            break;
        default:
            break;
    }
    return FUNC_3(VAR_1, 129, 128, 130);
}
