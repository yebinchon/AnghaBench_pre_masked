
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int dwell; int raw; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(uint8_t VAR_1) {
    VAR_0.dwell = VAR_1;
    FUNC_0(VAR_0.raw);
    FUNC_1("haptic_config.dwell = %u\n", VAR_0.dwell);
}
