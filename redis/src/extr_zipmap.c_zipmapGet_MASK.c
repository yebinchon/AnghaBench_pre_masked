
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*,unsigned int,int *) ;
 int FUNC_3 (unsigned char*) ;

int FUNC_4(unsigned char *VAR_0, unsigned char *VAR_1, unsigned int VAR_2, unsigned char **VAR_3, unsigned int *VAR_4) {
    unsigned char *VAR_5;

    if ((VAR_5 = FUNC_2(VAR_0,VAR_1,VAR_2,((void*)0))) == ((void*)0)) return 0;
    VAR_5 += FUNC_3(VAR_5);
    *VAR_4 = FUNC_1(VAR_5);
    *VAR_3 = VAR_5 + FUNC_0(*VAR_4) + 1;
    return 1;
}
