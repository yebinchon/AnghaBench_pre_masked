
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {int * tail; int * head; scalar_t__ offset; scalar_t__ size; } ;
typedef int lua_State ;


 struct socket_buffer* FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(lua_State *VAR_0) {
 struct socket_buffer * VAR_1 = FUNC_0(VAR_0, sizeof(*VAR_1));
 VAR_1->size = 0;
 VAR_1->offset = 0;
 VAR_1->head = ((void*)0);
 VAR_1->tail = ((void*)0);

 return 1;
}
