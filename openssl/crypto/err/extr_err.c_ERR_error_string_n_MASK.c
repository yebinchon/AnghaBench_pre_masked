
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rsbuf ;
typedef int lsbuf ;


 int FUNC_0 (char*,size_t,char*,unsigned long,...) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 char* FUNC_3 (unsigned long) ;
 char* FUNC_4 (unsigned long) ;
 size_t FUNC_5 (char*) ;

void FUNC_6(unsigned long VAR_0, char *VAR_1, size_t VAR_2)
{
    char VAR_3[64], VAR_4[64];
    const char *VAR_5, *VAR_6;
    unsigned long VAR_7 = 0, VAR_8, VAR_9;

    if (VAR_2 == 0)
        return;

    VAR_8 = FUNC_1(VAR_0);
    VAR_5 = FUNC_3(VAR_0);
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_3, sizeof(VAR_3), "lib(%lu)", VAR_8);
        VAR_5 = VAR_3;
    }

    VAR_6 = FUNC_4(VAR_0);
    VAR_9 = FUNC_2(VAR_0);
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_4, sizeof(VAR_4), "reason(%lu)", VAR_9);
        VAR_6 = VAR_4;
    }

    FUNC_0(VAR_1, VAR_2, "error:%08lX:%s:%s:%s", VAR_0, VAR_5, "", VAR_6);
    if (FUNC_5(VAR_1) == VAR_2 - 1) {

        FUNC_0(VAR_1, VAR_2, "err:%lx:%lx:%lx:%lx", VAR_0, VAR_8, VAR_7, VAR_9);
    }
}
