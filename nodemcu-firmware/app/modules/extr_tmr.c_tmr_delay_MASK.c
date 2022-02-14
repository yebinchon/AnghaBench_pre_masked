
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sint32_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_0 ){
 sint32_t VAR_1 = FUNC_0(VAR_0, 1);
 if(VAR_1 <= 0)
  return FUNC_1(VAR_0, "wrong arg range");
 while(VAR_1 >= 1000000){
  VAR_1 -= 1000000;
  FUNC_2(1000000);
  FUNC_3 ();
 }
 if(VAR_1>0){
  FUNC_2(VAR_1);
  FUNC_3 ();
 }
 return 0;
}
