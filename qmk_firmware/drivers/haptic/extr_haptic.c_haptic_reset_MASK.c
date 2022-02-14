
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_2__ {int enable; void* mode; void* feedback; int raw; void* dwell; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*,void*) ;

void FUNC_2(void) {
    VAR_3.enable = 1;
    uint8_t VAR_4 = VAR_0;
    VAR_3.feedback = VAR_4;
    FUNC_0(VAR_3.raw);
    FUNC_1("haptic_config.feedback = %u\n", VAR_3.feedback);
    FUNC_1("haptic_config.mode = %u\n", VAR_3.mode);
}
