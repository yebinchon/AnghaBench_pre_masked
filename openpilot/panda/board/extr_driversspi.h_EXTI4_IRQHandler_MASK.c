
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int PR; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;

void FUNC_2(void) {
  volatile unsigned int VAR_3 = VAR_0->PR & (1U << 4);




  if ((VAR_3 & (1U << 4)) != 0U) {
    VAR_2 = 0;
    FUNC_1(VAR_1, 0x14);
  }
  VAR_0->PR = VAR_3;
}
