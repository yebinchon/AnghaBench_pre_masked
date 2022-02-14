
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;

char *FUNC_1(ut32 VAR_1) {
    char VAR_2[3];

    VAR_2[2] = '\0';
    VAR_2[1] = VAR_0[VAR_1 & 0xF];
    VAR_2[0] = VAR_0[(VAR_1 >> 4) & 0xF];

    return FUNC_0(VAR_2);
}
