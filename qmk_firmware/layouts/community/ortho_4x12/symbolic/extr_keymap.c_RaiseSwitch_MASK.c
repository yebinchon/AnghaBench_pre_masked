
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_4__ {TYPE_3__ event; } ;
typedef TYPE_1__ keyrecord_t ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int) ;

bool FUNC_2 ( keyrecord_t *VAR_0, bool *VAR_1, bool VAR_2 ){

  if( VAR_0 -> event.pressed ) {
    *VAR_1 = 1;
    FUNC_0( &(VAR_0 -> event), VAR_2 );
  } else {
    *VAR_1 = 0;
    FUNC_1( VAR_2 );
  }
  return 0;

}
