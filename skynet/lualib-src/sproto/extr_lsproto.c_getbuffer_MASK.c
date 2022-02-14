
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,char*) ;
 size_t FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int,size_t*) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static const void *
FUNC_5(lua_State *VAR_3, int VAR_4, size_t *VAR_5) {
 const void * VAR_6 = ((void*)0);
 int VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (VAR_7 == VAR_1) {
  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 } else {
  if (VAR_7 != VAR_2 && VAR_7 != VAR_0) {
   FUNC_0(VAR_3, VAR_4, "Need a string or userdata");
   return ((void*)0);
  }
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  *VAR_5 = FUNC_1(VAR_3, VAR_4+1);
 }
 return VAR_6;
}
