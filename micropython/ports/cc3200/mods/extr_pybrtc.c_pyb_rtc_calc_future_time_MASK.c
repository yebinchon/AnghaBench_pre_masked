
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int,int*,int*) ;

void FUNC_2 (uint32_t VAR_0, uint32_t *VAR_1, uint16_t *VAR_2) {
    uint32_t VAR_3;
    uint16_t VAR_4;

    FUNC_0(&VAR_3, &VAR_4);

    *VAR_1 = VAR_3 + (VAR_0 / 1000);

    *VAR_2 = VAR_0 % 1000;

    FUNC_1 (VAR_4, VAR_1, VAR_2);
}
