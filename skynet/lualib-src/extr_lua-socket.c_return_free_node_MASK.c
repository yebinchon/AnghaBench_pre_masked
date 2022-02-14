
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {int * tail; struct buffer_node* head; scalar_t__ offset; } ;
struct buffer_node {scalar_t__ sz; int * msg; struct buffer_node* next; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct buffer_node*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;
 struct buffer_node* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(lua_State *VAR_0, int VAR_1, struct socket_buffer *VAR_2) {
 struct buffer_node *VAR_3 = VAR_2->head;
 VAR_2->offset = 0;
 VAR_2->head = VAR_3->next;
 if (VAR_2->head == ((void*)0)) {
  VAR_2->tail = ((void*)0);
 }
 FUNC_2(VAR_0,VAR_1,1);
 VAR_3->next = FUNC_4(VAR_0,-1);
 FUNC_0(VAR_0,1);
 FUNC_5(VAR_3->msg);
 VAR_3->msg = ((void*)0);

 VAR_3->sz = 0;
 FUNC_1(VAR_0, VAR_3);
 FUNC_3(VAR_0, VAR_1, 1);
}
