
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int ** hash; scalar_t__ tail; scalar_t__ head; int cap; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 struct queue* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 struct queue* FUNC_2 (int *,int) ;

__attribute__((used)) static struct queue *
FUNC_3(lua_State *VAR_2) {
 struct queue *VAR_3 = FUNC_2(VAR_2,1);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_2, sizeof(struct queue));
  VAR_3->cap = VAR_1;
  VAR_3->head = 0;
  VAR_3->tail = 0;
  int VAR_4;
  for (VAR_4=0;VAR_4<VAR_0;VAR_4++) {
   VAR_3->hash[VAR_4] = ((void*)0);
  }
  FUNC_1(VAR_2, 1);
 }
 return VAR_3;
}
