
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct station_config {int dummy; } ;
typedef scalar_t__ smart_succeed ;
typedef int smart_addr_map ;
typedef int os_timer_func_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int ** VAR_10 ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int * VAR_16 ;
 int FUNC_7 (int **,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 struct station_config* VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;

void FUNC_15(int VAR_23, smart_succeed VAR_24, void *VAR_25){
  int VAR_26;
  VAR_9 = 0;
  for (VAR_26 = 0; VAR_26 < VAR_0; ++VAR_26)
  {
    if(!VAR_10[VAR_26]){
      VAR_10[VAR_26] = (smart_addr_map*)FUNC_3(1,sizeof(smart_addr_map));
      if(!VAR_10[VAR_26]){
        FUNC_0("smart_begin map no memory\n");
        FUNC_9();
        return;
      }
    }
  }
  if(!VAR_21){
    VAR_21 = (struct station_config *)FUNC_3(1,sizeof(struct station_config));
    if(!VAR_21){
      FUNC_0("smart_begin sta_conf no memory\n");
      FUNC_9();
      return;
    }
  }

  if(!VAR_20){
    VAR_20 = (uint8_t *)FUNC_3(1,VAR_4);
    if(!VAR_20){
      FUNC_0("smart_begin sta_conf no memory\n");
      FUNC_9();
      return;
    }
  }

  if(!VAR_16){
    VAR_16 = (uint8_t *)FUNC_3(1,VAR_2);
    if(!VAR_16){
      FUNC_0("smart_begin sta_conf no memory\n");
      FUNC_9();
      return;
    }
  }

  if(!VAR_14){
    VAR_14 = (uint8_t *)FUNC_3(1,VAR_3);
    if(!VAR_14){
      FUNC_0("smart_begin sta_conf no memory\n");
      FUNC_9();
      return;
    }
  }

  if(!VAR_13){
    VAR_13 = (uint8_t *)FUNC_3(1,VAR_1);
    if(!VAR_13){
      FUNC_0("smart_begin sta_conf no memory\n");
      FUNC_9();
      return;
    }
  }
  FUNC_7(VAR_10, VAR_0);
  VAR_15 = FUNC_10();
  if( (VAR_6 == VAR_15) || (VAR_15 == VAR_5) ){
    FUNC_14(0);
    FUNC_13();
  }
  VAR_11 = VAR_23;
  FUNC_1("set channel to %d\n", VAR_11);
  FUNC_11(VAR_11);
  FUNC_12(VAR_12);
  FUNC_5(&VAR_19);
  FUNC_6(&VAR_19, (os_timer_func_t *)VAR_17, ((void*)0));
  FUNC_2(VAR_17, VAR_7);


  FUNC_4(&VAR_19, VAR_8, 0);

  if(VAR_24){
    VAR_22 = VAR_24;
    VAR_18 = VAR_25;
  }

  FUNC_8();
}
