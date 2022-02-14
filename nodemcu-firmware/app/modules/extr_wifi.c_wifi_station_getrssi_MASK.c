
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sint8 ;
typedef int lua_State ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_0 ){
  sint8 VAR_1=FUNC_3();
  FUNC_0("\n\tRSSI is %d\n", VAR_1);
  if (VAR_1<10)
  {
    FUNC_1(VAR_0, VAR_1);
  }
  else
  {
    FUNC_2(VAR_0);
  }
  return 1;
}
