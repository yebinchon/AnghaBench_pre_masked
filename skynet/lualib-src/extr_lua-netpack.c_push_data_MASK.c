
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {size_t tail; size_t cap; size_t head; struct netpack* queue; } ;
struct netpack {int id; int size; void* buffer; } ;
typedef int lua_State ;


 int FUNC_0 (int *,struct queue*) ;
 struct queue* FUNC_1 (int *) ;
 int FUNC_2 (void*,void*,int) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(lua_State *VAR_0, int VAR_1, void *VAR_2, int VAR_3, int VAR_4) {
 if (VAR_4) {
  void * VAR_5 = FUNC_3(VAR_3);
  FUNC_2(VAR_5, VAR_2, VAR_3);
  VAR_2 = VAR_5;
 }
 struct queue *VAR_6 = FUNC_1(VAR_0);
 struct netpack *VAR_7 = &VAR_6->queue[VAR_6->tail];
 if (++VAR_6->tail >= VAR_6->cap)
  VAR_6->tail -= VAR_6->cap;
 VAR_7->id = VAR_1;
 VAR_7->buffer = VAR_2;
 VAR_7->size = VAR_3;
 if (VAR_6->head == VAR_6->tail) {
  FUNC_0(VAR_0, VAR_6);
 }
}
