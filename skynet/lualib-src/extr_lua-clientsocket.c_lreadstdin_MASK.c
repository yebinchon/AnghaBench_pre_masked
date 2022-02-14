
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {size_t head; size_t tail; char** queue; int lock; } ;
typedef int lua_State ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 struct queue* FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_1) {
 struct queue *VAR_2 = FUNC_2(VAR_1, FUNC_3(1));
 FUNC_4(&VAR_2->lock);
 if (VAR_2->head == VAR_2->tail) {
  FUNC_5(&VAR_2->lock);
  return 0;
 }
 char * VAR_3 = VAR_2->queue[VAR_2->head];
 if (++VAR_2->head >= VAR_0) {
  VAR_2->head = 0;
 }
 FUNC_5(&VAR_2->lock);
 FUNC_1(VAR_1, VAR_3);
 FUNC_0(VAR_3);
 return 1;
}
