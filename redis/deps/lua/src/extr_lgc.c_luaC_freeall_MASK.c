
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int size; int * hash; } ;
struct TYPE_5__ {int currentwhite; TYPE_1__ strt; int rootgc; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3 (lua_State *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_2);
  int VAR_4;
  VAR_3->currentwhite = VAR_1 | FUNC_1(VAR_0);
  FUNC_2(VAR_2, &VAR_3->rootgc);
  for (VAR_4 = 0; VAR_4 < VAR_3->strt.size; VAR_4++)
    FUNC_2(VAR_2, &VAR_3->strt.hash[VAR_4]);
}
