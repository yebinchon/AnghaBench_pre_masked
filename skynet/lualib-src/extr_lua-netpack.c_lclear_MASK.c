
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int head; int tail; int cap; struct netpack* queue; int ** hash; } ;
struct netpack {int buffer; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct queue* FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_1) {
 struct queue * VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2 == ((void*)0)) {
  return 0;
 }
 int VAR_3;
 for (VAR_3=0;VAR_3<VAR_0;VAR_3++) {
  FUNC_0(VAR_2->hash[VAR_3]);
  VAR_2->hash[VAR_3] = ((void*)0);
 }
 if (VAR_2->head > VAR_2->tail) {
  VAR_2->tail += VAR_2->cap;
 }
 for (VAR_3=VAR_2->head;VAR_3<VAR_2->tail;VAR_3++) {
  struct netpack *VAR_4 = &VAR_2->queue[VAR_3 % VAR_2->cap];
  FUNC_2(VAR_4->buffer);
 }
 VAR_2->head = VAR_2->tail = 0;

 return 0;
}
