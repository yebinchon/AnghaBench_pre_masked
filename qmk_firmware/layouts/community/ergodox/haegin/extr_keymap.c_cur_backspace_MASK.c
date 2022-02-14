
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qk_tap_dance_state_t ;
struct TYPE_2__ {int a; int b; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2 (qk_tap_dance_state_t *VAR_2) {
  int VAR_3 = VAR_1.a + VAR_1.b;
  VAR_1.a = VAR_1.b;
  VAR_1.b = VAR_3;
  for (int VAR_4=0; VAR_4 < VAR_3; VAR_4++) {
    FUNC_1(VAR_0);
    FUNC_0(VAR_0);
  }
}
