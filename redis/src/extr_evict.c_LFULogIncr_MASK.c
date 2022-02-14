
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {double lfu_log_factor; } ;


 int VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_2 ;

uint8_t FUNC_1(uint8_t VAR_3) {
    if (VAR_3 == 255) return 255;
    double VAR_4 = (double)FUNC_0()/VAR_1;
    double VAR_5 = VAR_3 - VAR_0;
    if (VAR_5 < 0) VAR_5 = 0;
    double VAR_6 = 1.0/(VAR_5*VAR_2.lfu_log_factor+1);
    if (VAR_4 < VAR_6) VAR_3++;
    return VAR_3;
}
