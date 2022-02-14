
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;
struct TYPE_6__ {int mods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5 (qk_tap_dance_state_t *VAR_3, void *VAR_4) {

  bool VAR_5 = ( VAR_2->mods & (FUNC_0(VAR_0)|FUNC_0(VAR_1)) );
  int VAR_6 = FUNC_1();



  if(VAR_5){
    if (VAR_6)
      FUNC_3(VAR_3->count);
    else
          FUNC_4(VAR_3->count);


  } else {
    if (VAR_6)
      FUNC_4(VAR_3->count);
    else
      FUNC_3(VAR_3->count);
  }

  FUNC_2(VAR_3);
}
