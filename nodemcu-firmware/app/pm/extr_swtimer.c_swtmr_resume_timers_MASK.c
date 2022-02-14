
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {scalar_t__ volatile timer_expire; struct TYPE_4__* timer_next; } ;
typedef TYPE_1__ os_timer_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 TYPE_1__* FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 TYPE_1__* VAR_3 ;

void FUNC_11(){
  lua_State* VAR_4 = FUNC_1();


  FUNC_10(VAR_4);
  FUNC_7(VAR_4, VAR_1);


  FUNC_6(VAR_4, VAR_2);
  FUNC_7(VAR_4, -2);


  if(!FUNC_2(VAR_4, -2) || !FUNC_3(VAR_4, -1)){

    FUNC_4(VAR_4, 2);
    return;
  }

  os_timer_t* VAR_5 = FUNC_9(VAR_4, -1);
  FUNC_4(VAR_4, 1);


  FUNC_6(VAR_4, VAR_2);
  FUNC_5(VAR_4);
  FUNC_8(VAR_4, -3);


  FUNC_4(VAR_4, 1);

  volatile uint32 VAR_6 = FUNC_0(VAR_0);


  while(VAR_5 != ((void*)0)){
    os_timer_t* VAR_7 = VAR_3;


    os_timer_t* VAR_8 = VAR_5->timer_next;

    VAR_5->timer_expire += VAR_6;


    while(VAR_7 != ((void*)0)){
      if(VAR_5->timer_expire > VAR_7->timer_expire){
        if(VAR_7->timer_next != ((void*)0)){

          if(VAR_5->timer_expire < VAR_7->timer_next->timer_expire){

            VAR_5->timer_next = VAR_7->timer_next;
            VAR_7->timer_next = VAR_5;
            break;
          }
          else{

          }
        }
        else{


          VAR_7->timer_next = VAR_5;
          VAR_5->timer_next = ((void*)0);
          break;
        }
      }
      else if(VAR_7 == VAR_3){

        VAR_5->timer_next = VAR_7;
        VAR_3 = VAR_7 = VAR_5;
        break;
      }


      VAR_7 = VAR_7->timer_next;
    }

    VAR_5 = VAR_8;
  }
  return;
}
