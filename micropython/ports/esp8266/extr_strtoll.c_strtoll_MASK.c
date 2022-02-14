
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
long long int FUNC_0(const char *VAR_0, char **VAR_1, int VAR_2) {
    long long VAR_3 = 0;

    for (; *VAR_0; VAR_0++) {
        int VAR_4 = *VAR_0;
        if ('0' <= VAR_4 && VAR_4 <= '9') {
            VAR_4 -= '0';
        } else if ('A' <= VAR_4 && VAR_4 <= 'Z') {
            VAR_4 -= 'A' - 10;
        } else if ('a' <= VAR_4 && VAR_4 <= 'z') {
            VAR_4 -= 'a' - 10;
        } else {
            break;
        }
        if (VAR_4 >= VAR_2) {
            break;
        }
        VAR_3 = VAR_3 * VAR_2 + VAR_4;
    }

    *VAR_1 = (char*)VAR_0;

    return VAR_3;
}
