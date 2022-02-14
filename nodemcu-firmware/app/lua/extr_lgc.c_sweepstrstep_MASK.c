
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ lu_mem ;
struct TYPE_4__ {scalar_t__ size; int * hash; } ;
struct TYPE_5__ {scalar_t__ totalbytes; scalar_t__ sweepstrgc; int estimate; int gcstate; TYPE_1__ strt; } ;
typedef TYPE_2__ global_State ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2 (global_State *VAR_1, lua_State *VAR_2) {
  lu_mem VAR_3 = VAR_1->totalbytes;
  FUNC_1(VAR_2, &VAR_1->strt.hash[VAR_1->sweepstrgc++]);
  if (VAR_1->sweepstrgc >= VAR_1->strt.size)
    VAR_1->gcstate = VAR_0;
  FUNC_0(VAR_3 >= VAR_1->totalbytes);
  VAR_1->estimate -= VAR_3 - VAR_1->totalbytes;
}
