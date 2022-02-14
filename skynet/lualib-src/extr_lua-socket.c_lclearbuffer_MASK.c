
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {scalar_t__ size; scalar_t__ head; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 struct socket_buffer* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,struct socket_buffer*) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1) {
 struct socket_buffer * VAR_2 = FUNC_3(VAR_1, 1);
 if (VAR_2 == ((void*)0)) {
  if (FUNC_2(VAR_1, 1)) {
   return 0;
  }
  return FUNC_1(VAR_1, "Need buffer object at param 1");
 }
 FUNC_0(VAR_1,2,VAR_0);
 while(VAR_2->head) {
  FUNC_4(VAR_1,2,VAR_2);
 }
 VAR_2->size = 0;
 return 0;
}
