
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int cap; int head; int tail; int * queue; int hash; } ;
struct netpack {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 struct queue* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(lua_State *VAR_1, struct queue *VAR_2) {
 struct queue *VAR_3 = FUNC_0(VAR_1, sizeof(struct queue) + VAR_2->cap * sizeof(struct netpack));
 VAR_3->cap = VAR_2->cap + VAR_0;
 VAR_3->head = 0;
 VAR_3->tail = VAR_2->cap;
 FUNC_2(VAR_3->hash, VAR_2->hash, sizeof(VAR_3->hash));
 FUNC_3(VAR_2->hash, 0, sizeof(VAR_2->hash));
 int VAR_4;
 for (VAR_4=0;VAR_4<VAR_2->cap;VAR_4++) {
  int VAR_5 = (VAR_2->head + VAR_4) % VAR_2->cap;
  VAR_3->queue[VAR_4] = VAR_2->queue[VAR_5];
 }
 VAR_2->head = VAR_2->tail = 0;
 FUNC_1(VAR_1,1);
}
