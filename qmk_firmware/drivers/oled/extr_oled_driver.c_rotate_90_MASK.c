
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;


 int FUNC_0 (int const,int) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_0, uint8_t *VAR_1) {
    for (uint8_t VAR_2 = 0, VAR_3 = 7; VAR_2 < 8; ++VAR_2, --VAR_3) {
        uint8_t VAR_4 = (1 << VAR_2);
        for (uint8_t VAR_5 = 0; VAR_5 < 8; ++VAR_5) {
            VAR_1[VAR_2] |= FUNC_0(VAR_0[VAR_5] & VAR_4, VAR_3 - (int8_t)VAR_5);
        }
    }
}
