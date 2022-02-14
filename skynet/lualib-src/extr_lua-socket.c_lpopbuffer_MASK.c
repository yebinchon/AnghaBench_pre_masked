
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {int size; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 struct socket_buffer* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct socket_buffer*,int,int ) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_1) {
 struct socket_buffer * VAR_2 = FUNC_5(VAR_1, 1);
 if (VAR_2 == ((void*)0)) {
  return FUNC_2(VAR_1, "Need buffer object at param 1");
 }
 FUNC_1(VAR_1,2,VAR_0);
 int VAR_3 = FUNC_0(VAR_1,3);
 if (VAR_2->size < VAR_3 || VAR_3 == 0) {
  FUNC_4(VAR_1);
 } else {
  FUNC_6(VAR_1,VAR_2,VAR_3,0);
  VAR_2->size -= VAR_3;
 }
 FUNC_3(VAR_1, VAR_2->size);

 return 2;
}
