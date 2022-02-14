
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_2(uint16_t VAR_4, keyrecord_t *VAR_5) {
  switch (VAR_4) {
    case 129:
      if (VAR_5->event.pressed) {
        FUNC_1(VAR_0);
      }
      return 1;
      break;

    case 128:
      FUNC_0(VAR_1,VAR_5);
      return 0;
      break;
    default:
      VAR_2 = 0;
      VAR_3 = 1;
      break;
  }
  return 1;
}
