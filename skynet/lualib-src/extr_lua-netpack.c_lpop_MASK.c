
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {size_t head; size_t tail; size_t cap; struct netpack* queue; } ;
struct netpack {int size; int buffer; int id; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 struct queue* FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct queue * VAR_1 = FUNC_2(VAR_0, 1);
 if (VAR_1 == ((void*)0) || VAR_1->head == VAR_1->tail)
  return 0;
 struct netpack *VAR_2 = &VAR_1->queue[VAR_1->head];
 if (++VAR_1->head >= VAR_1->cap) {
  VAR_1->head = 0;
 }
 FUNC_0(VAR_0, VAR_2->id);
 FUNC_1(VAR_0, VAR_2->buffer);
 FUNC_0(VAR_0, VAR_2->size);

 return 3;
}
