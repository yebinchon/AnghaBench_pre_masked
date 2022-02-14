
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;

char *
FUNC_1(const void *VAR_0, int VAR_1) {
    const unsigned char *VAR_2 = VAR_0;
    int VAR_3, VAR_4;
    char *VAR_5;
    const char VAR_6[] = "0123456789ABCDEF";

    if (VAR_2 == 0 || VAR_1 <= 0) {
        return 0;
    }
    VAR_5 = FUNC_0(VAR_1 * 2 + 1);
    for (VAR_3 = VAR_4 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_5[VAR_4++] = VAR_6[VAR_2[VAR_3] >> 4];
        VAR_5[VAR_4++] = VAR_6[VAR_2[VAR_3] & 0xf];
    }
    VAR_5[VAR_4] = 0;
    return VAR_5;
}
