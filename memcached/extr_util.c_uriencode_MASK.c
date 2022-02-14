
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *,int) ;
 int ** VAR_0 ;

bool FUNC_1(const char *VAR_1, char *VAR_2, const size_t VAR_3, const size_t VAR_4) {
    int VAR_5;
    size_t VAR_6 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        if (VAR_6 + 4 > VAR_4)
            return 0;
        if (VAR_0[(unsigned char) VAR_1[VAR_5]] != ((void*)0)) {
            FUNC_0(&VAR_2[VAR_6], VAR_0[(unsigned char) VAR_1[VAR_5]], 3);
            VAR_6 += 3;
        } else {
            VAR_2[VAR_6] = VAR_1[VAR_5];
            VAR_6++;
        }
    }
    VAR_2[VAR_6] = '\0';
    return 1;
}
