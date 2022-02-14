
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int lua_State ;
struct TYPE_3__ {int suspend_policy; void* tmr_cb_ptr; } ;
typedef TYPE_1__ cb_registry_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 size_t FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,size_t) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;

void FUNC_13(void* VAR_2, uint8 VAR_3){
  lua_State* VAR_4 = FUNC_1();
  if(!VAR_4){


    FUNC_0(VAR_2, VAR_3);
    return;
  }
  if(VAR_2){
    size_t VAR_5 = 0;

    FUNC_12(VAR_4);
    FUNC_10(VAR_4, VAR_1);

    if(!FUNC_2(VAR_4, -1)){

      FUNC_6(VAR_4, 1);
      FUNC_3(VAR_4);

      FUNC_12(VAR_4);
      FUNC_9(VAR_4, -2);
      FUNC_11(VAR_4, VAR_1);
    }

    FUNC_8(VAR_4, VAR_0);
    FUNC_10(VAR_4, -2);

    if(FUNC_2(VAR_4, -1)){

      VAR_5 = FUNC_5(VAR_4, -1);
    }
    else{

      FUNC_6(VAR_4, 1);
      FUNC_3(VAR_4);
      FUNC_8(VAR_4, VAR_0);
      FUNC_9(VAR_4, -2);
      FUNC_11(VAR_4, -4);
    }


    FUNC_7(VAR_4, VAR_5+1);
    cb_registry_item_t* VAR_6 = FUNC_4(VAR_4, sizeof(cb_registry_item_t));
    VAR_6->tmr_cb_ptr = VAR_2;
    VAR_6->suspend_policy = VAR_3;
    FUNC_11(VAR_4, -3);


    FUNC_6(VAR_4, 2);
  }
  return;
}
