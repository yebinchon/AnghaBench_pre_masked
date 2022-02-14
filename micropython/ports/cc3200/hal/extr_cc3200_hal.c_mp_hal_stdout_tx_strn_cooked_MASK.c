
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (char const*,int) ;

void FUNC_1 (const char *VAR_0, size_t VAR_1) {
    int32_t VAR_2 = 0;
    const char *VAR_3 = VAR_0;

    for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (VAR_0[VAR_4] == '\n') {
            FUNC_0(VAR_3, VAR_2);
            FUNC_0("\r\n", 2);
            VAR_3 += VAR_2 + 1;
            VAR_2 = 0;
        } else {
            VAR_2++;
        }
    }
    if (VAR_3 < VAR_0 + VAR_1) {
        FUNC_0(VAR_3, VAR_2);
    }
}
