
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const* FUNC_1 (int ,int ,int ,int ,int ,int ,int ,...) ;
 int const* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

const macro_t *FUNC_5(keyrecord_t *VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
  switch(VAR_6) {
    case 0:
      if (VAR_5->event.pressed) {
        return FUNC_1( FUNC_0(VAR_3), FUNC_0(VAR_1), FUNC_0(VAR_2), FUNC_2(4), FUNC_3(VAR_3), FUNC_3(VAR_1), FUNC_3(VAR_2), FUNC_4(255), VAR_0 );
      }
      break;
    case 1:
      if (VAR_5->event.pressed) {
        return FUNC_1( FUNC_0(VAR_3), FUNC_0(VAR_2), FUNC_2(4), FUNC_3(VAR_3), FUNC_3(VAR_2), FUNC_4(255), VAR_0 );
      }
      break;
    case 2:
      if (VAR_5->event.pressed) {
        return FUNC_1( FUNC_0(VAR_3), FUNC_0(VAR_1), FUNC_0(VAR_2), FUNC_2(3), FUNC_3(VAR_3), FUNC_3(VAR_1), FUNC_3(VAR_2), FUNC_4(255), VAR_0 );
      }
      break;
    case 3:
      if (VAR_5->event.pressed) {
        return FUNC_1( FUNC_0(VAR_3), FUNC_0(VAR_2), FUNC_2(3), FUNC_3(VAR_3), FUNC_3(VAR_2), FUNC_4(255), VAR_0 );
      }
      break;
  }
  return VAR_4;
}
