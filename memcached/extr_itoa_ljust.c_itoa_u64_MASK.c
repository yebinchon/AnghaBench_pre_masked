
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 char* FUNC_0 (int,char*,int,int) ;
 char* FUNC_1 (int,char*) ;
 char* FUNC_2 (int,char*) ;

char* FUNC_3(uint64_t VAR_0, char* VAR_1) {
    int VAR_2;

    uint32_t VAR_3 = (uint32_t)VAR_0;
    if (VAR_3 == VAR_0) return FUNC_1(VAR_3, VAR_1);

    uint64_t VAR_4 = VAR_0 / 1000000000;
    VAR_1 = FUNC_3(VAR_4, VAR_1);
    VAR_3 = VAR_0 - (VAR_4 * 1000000000);
    VAR_2 = VAR_3 / 100000000;
    VAR_1 = FUNC_2('0'+VAR_2,VAR_1);
    return FUNC_0( VAR_3, VAR_1, VAR_2, 9 );
}
