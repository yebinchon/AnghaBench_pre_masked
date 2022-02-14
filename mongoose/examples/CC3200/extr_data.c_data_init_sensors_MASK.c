
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ,int) ;

void FUNC_3(int VAR_5, int VAR_6) {
  VAR_4 = VAR_5;
  if (!FUNC_2(VAR_5, VAR_2, 0)) {
    FUNC_0(VAR_0, ("Failed to init temperature sensor"));
  } else {
    FUNC_0(VAR_1, ("Temperature sensor initialized"));
  }
  VAR_3 = FUNC_1(VAR_6);
  if (VAR_3 == ((void*)0)) {
    FUNC_0(VAR_0, ("Failed to init accelerometer"));
  } else {
    FUNC_0(VAR_1, ("Accelerometer initialized"));
  }
}
