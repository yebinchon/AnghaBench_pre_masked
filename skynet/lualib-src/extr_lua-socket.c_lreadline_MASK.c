
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {int offset; int size; struct buffer_node* head; } ;
struct buffer_node {int sz; struct buffer_node* next; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (struct buffer_node*,int,char const*,size_t) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 struct socket_buffer* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct socket_buffer*,int,size_t) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_0) {
 struct socket_buffer * VAR_1 = FUNC_5(VAR_0, 1);
 if (VAR_1 == ((void*)0)) {
  return FUNC_2(VAR_0, "Need buffer object at param 1");
 }

 bool VAR_2 = !FUNC_3(VAR_0, 2);
 size_t VAR_3 = 0;
 const char *VAR_4 = FUNC_1(VAR_0,3,&VAR_3);
 int VAR_5;
 struct buffer_node *VAR_6 = VAR_1->head;
 if (VAR_6 == ((void*)0))
  return 0;
 int VAR_7 = VAR_1->offset;
 int VAR_8 = VAR_6->sz - VAR_7;
 for (VAR_5=0;VAR_5<=VAR_1->size - (int)VAR_3;VAR_5++) {
  if (FUNC_0(VAR_6, VAR_7, VAR_4, VAR_3)) {
   if (VAR_2) {
    FUNC_4(VAR_0,1);
   } else {
    FUNC_6(VAR_0, VAR_1, VAR_5+VAR_3, VAR_3);
    VAR_1->size -= VAR_5+VAR_3;
   }
   return 1;
  }
  ++VAR_7;
  --VAR_8;
  if (VAR_8 == 0) {
   VAR_6 = VAR_6->next;
   VAR_7 = 0;
   if (VAR_6 == ((void*)0))
    break;
   VAR_8 = VAR_6->sz;
  }
 }
 return 0;
}
