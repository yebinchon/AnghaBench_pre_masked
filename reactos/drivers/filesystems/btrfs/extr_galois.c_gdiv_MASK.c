
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;

uint8_t FUNC_0(uint8_t VAR_2, uint8_t VAR_3) {
    if (VAR_3 == 0) {
        return 0xff;
    } else if (VAR_2 == 0) {
        return 0;
    } else {
        if (VAR_0[VAR_2] >= VAR_0[VAR_3])
            return VAR_1[(VAR_0[VAR_2] - VAR_0[VAR_3]) % 255];
        else
            return VAR_1[255-((VAR_0[VAR_3] - VAR_0[VAR_2]) % 255)];
    }
}
