
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;

void FUNC_0(size_t *VAR_3, size_t *VAR_4) {
    size_t VAR_5 = 0, VAR_6 = 0;
    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        if (VAR_1[VAR_7] > VAR_5) VAR_5 = VAR_1[VAR_7];
        if (VAR_2[VAR_7] > VAR_6) VAR_6 = VAR_2[VAR_7];
    }
    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
}
