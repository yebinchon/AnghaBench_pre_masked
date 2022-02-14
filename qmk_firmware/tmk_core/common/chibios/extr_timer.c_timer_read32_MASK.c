
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ systime_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

uint32_t FUNC_3(void) {

    systime_t VAR_3 = FUNC_2();
    systime_t VAR_4 = VAR_3 - VAR_1 + VAR_2;
    uint32_t VAR_5 = FUNC_1(VAR_4);
    VAR_0 += VAR_5;
    VAR_2 = VAR_4 - FUNC_0(VAR_5);
    VAR_1 = VAR_3;

    return VAR_0;
}
