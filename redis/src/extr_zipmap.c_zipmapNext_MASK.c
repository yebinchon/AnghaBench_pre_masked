
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;

unsigned char *FUNC_4(unsigned char *VAR_1, unsigned char **VAR_2, unsigned int *VAR_3, unsigned char **VAR_4, unsigned int *VAR_5) {
    if (VAR_1[0] == VAR_0) return ((void*)0);
    if (VAR_2) {
        *VAR_2 = VAR_1;
        *VAR_3 = FUNC_1(VAR_1);
        *VAR_2 += FUNC_0(*VAR_3);
    }
    VAR_1 += FUNC_2(VAR_1);
    if (VAR_4) {
        *VAR_4 = VAR_1+1;
        *VAR_5 = FUNC_1(VAR_1);
        *VAR_4 += FUNC_0(*VAR_5);
    }
    VAR_1 += FUNC_3(VAR_1);
    return VAR_1;
}
