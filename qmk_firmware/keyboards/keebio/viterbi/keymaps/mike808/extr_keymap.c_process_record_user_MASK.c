
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;



 int FUNC_0 (int ,int,int ) ;

 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_2(uint16_t VAR_4, keyrecord_t *VAR_5) {
  switch (VAR_4) {
    case 128:
      if (VAR_5->event.pressed) {



        FUNC_1(1UL << VAR_1);
      }
      return 0;
      break;
    case 129:
      if (VAR_5->event.pressed) {



        FUNC_1(1UL << VAR_0);
      }
      return 0;
      break;
  }
  return 1;
}
