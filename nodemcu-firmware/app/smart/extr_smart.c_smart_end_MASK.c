
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int os_timer_func_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int ** VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void*) ;
 int * VAR_13 ;
 int FUNC_5 () ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;

void FUNC_13(){
  int VAR_18;
  FUNC_3(&VAR_14);
  FUNC_5();
  FUNC_7(VAR_8);

  if(VAR_1 != VAR_12){
    FUNC_8(VAR_12);
  } else {
    FUNC_8(VAR_4);
  }

  VAR_12 = FUNC_6();

  if(VAR_16 && VAR_6){
    if( (VAR_4 == VAR_12) || (VAR_12 == VAR_2) ){
      FUNC_12(VAR_16);
      FUNC_11(1);
      FUNC_10();
      FUNC_9();

      FUNC_3(&VAR_14);
      FUNC_4(&VAR_14, (os_timer_func_t *)VAR_17, (void *)1);
      FUNC_0(VAR_17, VAR_5);


      FUNC_2(&VAR_14, VAR_3, 0);
    }
  }

  for (VAR_18 = 0; VAR_18 < VAR_0; ++VAR_18)
  {
    if(VAR_7[VAR_18]){
      FUNC_1(VAR_7[VAR_18]);
      VAR_7[VAR_18] = ((void*)0);
    }
    VAR_11 = ((void*)0);
  }

  if(VAR_16){
    FUNC_1(VAR_16);
    VAR_16 = ((void*)0);
  }

  if(VAR_9){
    FUNC_1(VAR_9);
    VAR_9 = ((void*)0);
  }

  if(VAR_10){
    FUNC_1(VAR_10);
    VAR_10 = ((void*)0);
  }

  if(VAR_13){
    FUNC_1(VAR_13);
    VAR_13 = ((void*)0);
  }

  if(VAR_15){
    FUNC_1(VAR_15);
    VAR_15 = ((void*)0);
  }

}
