
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 char* VAR_0 ;
 char* FUNC_0 (char const*,char const) ;
 int FUNC_1 (char const*) ;

uint64_t FUNC_2(const char *VAR_1, int VAR_2) {


    const char *VAR_3 = VAR_0;
    if (FUNC_1(VAR_1) != 9) return 0;
    if (VAR_2 < 0 || VAR_2 > 1023) return 0;

    uint64_t VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 < 9; VAR_5++) {
        char *VAR_6 = FUNC_0(VAR_3,VAR_1[VAR_5]);
        if (!VAR_6) return 0;
        unsigned long VAR_7 = VAR_6-VAR_3;
        VAR_4 = (VAR_4 << 6) | VAR_7;
    }
    VAR_4 = (VAR_4 << 10) | VAR_2;
    return VAR_4;
}
