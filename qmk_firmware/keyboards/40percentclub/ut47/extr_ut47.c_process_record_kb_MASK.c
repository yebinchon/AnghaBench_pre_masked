
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int row; scalar_t__ col; } ;
struct TYPE_7__ {TYPE_1__ key; scalar_t__ pressed; } ;
struct TYPE_8__ {TYPE_2__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;

bool FUNC_2(uint16_t VAR_0, keyrecord_t *VAR_1) {


  if (VAR_1->event.pressed) {



  }
 return FUNC_0(VAR_0, VAR_1);
}
