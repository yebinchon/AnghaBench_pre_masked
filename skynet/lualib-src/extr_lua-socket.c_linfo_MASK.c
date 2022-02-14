
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {struct socket_info* next; } ;
typedef int lua_State ;


 int FUNC_0 (int *,struct socket_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 struct socket_info* FUNC_3 () ;
 int FUNC_4 (struct socket_info*) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 FUNC_1(VAR_0);
 struct socket_info * VAR_1 = FUNC_3();
 struct socket_info * VAR_2 = VAR_1;
 int VAR_3 = 0;
 while (VAR_2) {
  FUNC_0(VAR_0, VAR_2);
  FUNC_2(VAR_0, -2, ++VAR_3);
  VAR_2 = VAR_2->next;
 }
 FUNC_4(VAR_1);
 return 1;
}
