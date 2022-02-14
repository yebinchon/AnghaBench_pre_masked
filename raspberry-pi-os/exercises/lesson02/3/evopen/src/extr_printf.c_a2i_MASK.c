
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static char FUNC_1(char VAR_0, char** VAR_1, int VAR_2, int* VAR_3) {
    char* VAR_4 = *VAR_1;
    int VAR_5 = 0;
    int VAR_6;
    while ((VAR_6 = FUNC_0(VAR_0)) >= 0) {
        if (VAR_6 > VAR_2) break;
        VAR_5 = VAR_5 * VAR_2 + VAR_6;
        VAR_0 = *VAR_4++;
    }
    *VAR_1 = VAR_4;
    *VAR_3 = VAR_5;
    return VAR_0;
}
