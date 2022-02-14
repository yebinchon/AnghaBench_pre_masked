
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,long long) ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (long long,unsigned char*) ;
 size_t FUNC_3 (char*) ;
 long long FUNC_4 (char*,char**,int) ;

int FUNC_5(char *VAR_0, size_t VAR_1, unsigned char *VAR_2) {
    long long VAR_3;
    char *VAR_4, VAR_5[32];


    VAR_3 = FUNC_4(VAR_0, &VAR_4, 10);
    if (VAR_4[0] != '\0') return 0;
    FUNC_0(VAR_5,32,VAR_3);



    if (FUNC_3(VAR_5) != VAR_1 || FUNC_1(VAR_5,VAR_0,VAR_1)) return 0;

    return FUNC_2(VAR_3,VAR_2);
}
