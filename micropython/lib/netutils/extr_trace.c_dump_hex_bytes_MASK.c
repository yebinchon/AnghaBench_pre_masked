
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mp_print_t ;


 int FUNC_0 (int const*,char*,int const) ;

__attribute__((used)) static void FUNC_1(const mp_print_t *VAR_0, size_t VAR_1, const uint8_t *VAR_2) {
    for (size_t VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        FUNC_0(VAR_0, " %02x", VAR_2[VAR_3]);
    }
}
