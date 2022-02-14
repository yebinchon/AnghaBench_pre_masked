
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {size_t** matrix_co; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 size_t FUNC_0 (size_t,size_t,size_t*) ;

uint8_t FUNC_1(uint8_t VAR_2, uint8_t VAR_3, uint8_t *VAR_4) {
    uint8_t VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
    uint8_t VAR_6 = VAR_1.matrix_co[VAR_2][VAR_3];
    if (VAR_6 != VAR_0) {
        VAR_4[VAR_5] = VAR_6;
        VAR_5++;
    }
    return VAR_5;
}
