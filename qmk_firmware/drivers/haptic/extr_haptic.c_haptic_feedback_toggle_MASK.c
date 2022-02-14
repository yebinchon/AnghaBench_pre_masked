
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ feedback; int raw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,int) ;

void FUNC_2(void) {
    VAR_2.feedback++;
    if (VAR_2.feedback >= VAR_0) VAR_2.feedback = VAR_1;
    FUNC_1("haptic_config.feedback = %u\n", !VAR_2.feedback);
    FUNC_0(VAR_2.raw);
}
