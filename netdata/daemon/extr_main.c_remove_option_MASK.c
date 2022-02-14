
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, int *VAR_1, char **VAR_2) {
    int VAR_3;


    do {
        *VAR_1 = *VAR_1 - 1;
        for(VAR_3 = VAR_0; VAR_3 < *VAR_1; VAR_3++) {
            VAR_2[VAR_3] = VAR_2[VAR_3+1];
        }
        VAR_3 = VAR_0;
    } while(VAR_2[VAR_3][0] != '-' && VAR_0 >= *VAR_1);
}
