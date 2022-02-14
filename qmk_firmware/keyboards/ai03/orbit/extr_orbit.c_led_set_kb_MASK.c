
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {void* slock_led; void* clock_led; void* nlock_led; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,void*) ;
 TYPE_1__ VAR_3 ;

void FUNC_4(uint8_t VAR_4) {


 if (FUNC_1()) {

  VAR_3.nlock_led = FUNC_0(VAR_4, VAR_1);
  VAR_3.clock_led = FUNC_0(VAR_4, VAR_0);
  VAR_3.slock_led = FUNC_0(VAR_4, VAR_2);

  FUNC_3(3, FUNC_0(VAR_4, VAR_1));
  FUNC_3(4, FUNC_0(VAR_4, VAR_0));
  FUNC_3(5, FUNC_0(VAR_4, VAR_2));

 }

 FUNC_2(VAR_4);
}
