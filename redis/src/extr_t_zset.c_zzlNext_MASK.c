
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned char* FUNC_1 (unsigned char*,unsigned char*) ;

void FUNC_2(unsigned char *VAR_0, unsigned char **VAR_1, unsigned char **VAR_2) {
    unsigned char *VAR_3, *VAR_4;
    FUNC_0(*VAR_1 != ((void*)0) && *VAR_2 != ((void*)0));

    VAR_3 = FUNC_1(VAR_0,*VAR_2);
    if (VAR_3 != ((void*)0)) {
        VAR_4 = FUNC_1(VAR_0,VAR_3);
        FUNC_0(VAR_4 != ((void*)0));
    } else {

        VAR_4 = ((void*)0);
    }

    *VAR_1 = VAR_3;
    *VAR_2 = VAR_4;
}
