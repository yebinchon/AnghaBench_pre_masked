
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {scalar_t__ size; scalar_t__ offset; struct buffer_node* head; } ;
struct buffer_node {scalar_t__ sz; scalar_t__ msg; } ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 struct socket_buffer* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,struct socket_buffer*) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_1) {
 struct socket_buffer * VAR_2 = FUNC_5(VAR_1, 1);
 if (VAR_2 == ((void*)0)) {
  return FUNC_3(VAR_1, "Need buffer object at param 1");
 }
 FUNC_2(VAR_1,2,VAR_0);
 luaL_Buffer VAR_3;
 FUNC_1(VAR_1, &VAR_3);
 while(VAR_2->head) {
  struct buffer_node *VAR_4 = VAR_2->head;
  FUNC_0(&VAR_3, VAR_4->msg + VAR_2->offset, VAR_4->sz - VAR_2->offset);
  FUNC_6(VAR_1,2,VAR_2);
 }
 FUNC_4(&VAR_3);
 VAR_2->size = 0;
 return 1;
}
