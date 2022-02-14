
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {int offset; struct buffer_node* head; } ;
struct buffer_node {int sz; int msg; } ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (struct buffer_node*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,struct socket_buffer*) ;

__attribute__((used)) static void
FUNC_6(lua_State *VAR_0, struct socket_buffer *VAR_1, int VAR_2, int VAR_3) {
 struct buffer_node * VAR_4 = VAR_1->head;
 if (VAR_2 < VAR_4->sz - VAR_1->offset) {
  FUNC_4(VAR_0, VAR_4->msg + VAR_1->offset, VAR_2-VAR_3);
  VAR_1->offset+=VAR_2;
  return;
 }
 if (VAR_2 == VAR_4->sz - VAR_1->offset) {
  FUNC_4(VAR_0, VAR_4->msg + VAR_1->offset, VAR_2-VAR_3);
  FUNC_5(VAR_0,2,VAR_1);
  return;
 }

 luaL_Buffer VAR_5;
 FUNC_2(VAR_0, &VAR_5);
 for (;;) {
  int VAR_6 = VAR_4->sz - VAR_1->offset;
  if (VAR_6 >= VAR_2) {
   if (VAR_2 > VAR_3) {
    FUNC_1(&VAR_5, VAR_4->msg + VAR_1->offset, VAR_2 - VAR_3);
   }
   VAR_1->offset += VAR_2;
   if (VAR_6 == VAR_2) {
    FUNC_5(VAR_0,2,VAR_1);
   }
   break;
  }
  int VAR_7 = VAR_2 - VAR_3;
  if (VAR_7 > 0) {
   FUNC_1(&VAR_5, VAR_4->msg + VAR_1->offset, (VAR_7 < VAR_6) ? VAR_7 : VAR_6);
  }
  FUNC_5(VAR_0,2,VAR_1);
  VAR_2-=VAR_6;
  if (VAR_2==0)
   break;
  VAR_4 = VAR_1->head;
  FUNC_0(VAR_4);
 }
 FUNC_3(&VAR_5);
}
