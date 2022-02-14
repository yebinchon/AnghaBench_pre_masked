
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const) ;

void FUNC_4(const char *VAR_0, uint32_t VAR_1) {

    bool VAR_2 = VAR_1 > 20;
    if (VAR_2) {
        FUNC_1();
    }
    for (uint32_t VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        FUNC_3(VAR_0[VAR_3]);
    }
    if (VAR_2) {
        FUNC_0();
    }
    FUNC_2(VAR_0, VAR_1);
}
