
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int* VAR_0 ;
 size_t* VAR_1 ;

uint8_t FUNC_0(uint8_t VAR_2, uint8_t VAR_3) {
    if (VAR_2 == 0 || VAR_3 == 0)
        return 0;
    else
        return VAR_1[(VAR_0[VAR_2] + VAR_0[VAR_3]) % 255];
}
