
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {int size; struct buffer_node* tail; struct buffer_node* head; } ;
struct buffer_node {char* msg; int sz; struct buffer_node* next; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,struct buffer_node*) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;
 void* FUNC_11 (int *,int) ;

__attribute__((used)) static int
FUNC_12(lua_State *VAR_2) {
 struct socket_buffer *VAR_3 = FUNC_11(VAR_2,1);
 if (VAR_3 == ((void*)0)) {
  return FUNC_4(VAR_2, "need buffer object at param 1");
 }
 char * VAR_4 = FUNC_11(VAR_2,3);
 if (VAR_4 == ((void*)0)) {
  return FUNC_4(VAR_2, "need message block at param 3");
 }
 int VAR_5 = 2;
 FUNC_3(VAR_2,VAR_5,VAR_1);
 int VAR_6 = FUNC_2(VAR_2,4);
 FUNC_8(VAR_2,VAR_5,1);
 struct buffer_node * VAR_7 = FUNC_11(VAR_2,-1);
 FUNC_5(VAR_2,1);
 if (VAR_7 == ((void*)0)) {
  int VAR_8 = FUNC_9(VAR_2,VAR_5);
  if (VAR_8 == 0)
   VAR_8++;
  int VAR_9 = 8;
  if (VAR_8 <= VAR_0-3) {
   VAR_9 <<= VAR_8;
  } else {
   VAR_9 <<= VAR_0-3;
  }
  FUNC_1(VAR_2, VAR_9);
  VAR_7 = FUNC_11(VAR_2,-1);
  FUNC_10(VAR_2, VAR_5, VAR_8+1);
 }
 FUNC_7(VAR_2, VAR_7->next);
 FUNC_10(VAR_2, VAR_5, 1);
 VAR_7->msg = VAR_4;
 VAR_7->sz = VAR_6;
 VAR_7->next = ((void*)0);

 if (VAR_3->head == ((void*)0)) {
  FUNC_0(VAR_3->tail == ((void*)0));
  VAR_3->head = VAR_3->tail = VAR_7;
 } else {
  VAR_3->tail->next = VAR_7;
  VAR_3->tail = VAR_7;
 }
 VAR_3->size += VAR_6;

 FUNC_6(VAR_2, VAR_3->size);

 return 1;
}
