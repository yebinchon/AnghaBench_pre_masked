
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int const* FUNC_1 (int ,int ,int ,int ) ;
 int const* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

const macro_t *FUNC_4(keyrecord_t *VAR_5, uint8_t VAR_6, uint8_t VAR_7) {


 switch (VAR_6) {
  case 1:
   if (VAR_5->event.pressed) {
    return FUNC_1( FUNC_0(VAR_2), FUNC_2(VAR_0), FUNC_3(VAR_2), VAR_1 );
   }
   break;
  case 2:
   if (VAR_5->event.pressed) {
    return FUNC_1( FUNC_0(VAR_2), FUNC_2(VAR_4), FUNC_3(VAR_2), VAR_1 );
   }
   break;
 }
 return VAR_3;
}
