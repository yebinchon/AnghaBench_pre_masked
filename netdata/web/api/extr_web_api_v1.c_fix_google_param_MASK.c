
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(char *VAR_0) {
    if(FUNC_1(!VAR_0)) return;

    for( ; *VAR_0 ;VAR_0++) {
        if(!FUNC_0(*VAR_0) && *VAR_0 != '.' && *VAR_0 != '_' && *VAR_0 != '-')
            *VAR_0 = '_';
    }
}
