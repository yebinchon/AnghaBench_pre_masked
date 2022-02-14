
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 unsigned short FUNC_0 (char const*,int) ;

unsigned short FUNC_1(const char *VAR_1, int VAR_2) {
    int VAR_3, VAR_4;


    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_1[VAR_3]=='{') break;
    }


    if (VAR_3 == VAR_2) return FUNC_0(VAR_1, VAR_2) & VAR_0;


    for (VAR_4 =VAR_3 + 1; VAR_4 < VAR_2; VAR_4++) {
        if (VAR_1[VAR_4] == '}') break;
    }


    if (VAR_4 == VAR_2 || VAR_4 == VAR_3+1) return FUNC_0(VAR_1, VAR_2) & VAR_0;


    return FUNC_0((char*)VAR_1+VAR_3+1,VAR_4-VAR_3-1) & VAR_0;
}
