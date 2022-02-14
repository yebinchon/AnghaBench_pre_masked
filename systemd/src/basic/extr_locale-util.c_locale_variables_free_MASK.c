
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t LocaleVariable ;


 size_t VAR_0 ;
 char* FUNC_0 (char*) ;

void FUNC_1(char *VAR_1[VAR_0]) {
        LocaleVariable VAR_2;

        if (!VAR_1)
                return;

        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
                VAR_1[VAR_2] = FUNC_0(VAR_1[VAR_2]);
}
