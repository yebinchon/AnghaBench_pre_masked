
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {scalar_t__ input_mode; int raw; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_2(void) {
    VAR_4.raw = FUNC_1(VAR_0);
    VAR_4.input_mode = VAR_1[VAR_3 = 0];


    FUNC_0("Unicode input mode init to: %u\n", VAR_4.input_mode);
}
