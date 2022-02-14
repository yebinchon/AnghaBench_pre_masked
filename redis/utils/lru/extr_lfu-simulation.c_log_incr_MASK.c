
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 () ;

uint8_t FUNC_1(uint8_t VAR_2) {
    if (VAR_2 == 255) return VAR_2;
    double VAR_3 = (double)FUNC_0()/VAR_1;
    double VAR_4 = VAR_2-VAR_0;
    if (VAR_4 < 0) VAR_4 = 0;
    double VAR_5 = 1.0/(VAR_4*10+1);
    if (VAR_3 < VAR_5) VAR_2++;
    return VAR_2;
}
