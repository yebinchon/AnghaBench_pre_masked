
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dacsample_t ;
typedef int DACDriver ;


 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(DACDriver *VAR_4, dacsample_t *VAR_5, size_t VAR_6) {
    (void)VAR_4;

    VAR_3++;
    if (VAR_0 == VAR_5) {
        VAR_1 += VAR_6;
    } else {
        VAR_2 += VAR_6;
    }

    if ((VAR_3 % 1000) == 0) {

    }
}
