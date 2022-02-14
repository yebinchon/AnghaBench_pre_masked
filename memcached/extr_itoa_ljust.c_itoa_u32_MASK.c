
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int,int*,char**,int) ;
 char* FUNC_1 (int,char*,int,int) ;

char* FUNC_2(uint32_t VAR_0, char* VAR_1) {
    int VAR_2 = 0,VAR_3;
         if (VAR_0 >=100000000) VAR_3 = FUNC_0(VAR_0, 100000000, &VAR_2, &VAR_1, 10);
    else if (VAR_0 < 100) VAR_3 = FUNC_0(VAR_0, 1, &VAR_2, &VAR_1, 2);
    else if (VAR_0 < 10000) VAR_3 = FUNC_0(VAR_0, 100, &VAR_2, &VAR_1, 4);
    else if (VAR_0 < 1000000) VAR_3 = FUNC_0(VAR_0, 10000, &VAR_2, &VAR_1, 6);
    else VAR_3 = FUNC_0(VAR_0, 1000000, &VAR_2, &VAR_1, 8);
    return FUNC_1( VAR_0, VAR_1, VAR_2, VAR_3 );
}
