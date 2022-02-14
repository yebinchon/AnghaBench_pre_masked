
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct uncomplete* buffer; } ;
struct uncomplete {TYPE_1__ pack; } ;
struct queue {int dummy; } ;
typedef int lua_State ;


 struct uncomplete* FUNC_0 (struct queue*,int) ;
 struct queue* FUNC_1 (int *,int) ;
 int FUNC_2 (struct uncomplete*) ;

__attribute__((used)) static void
FUNC_3(lua_State *VAR_0, int VAR_1) {
 struct queue *VAR_2 = FUNC_1(VAR_0,1);
 struct uncomplete * VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_3->pack.buffer);
  FUNC_2(VAR_3);
 }
}
