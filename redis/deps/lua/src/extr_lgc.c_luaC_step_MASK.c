
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int l_mem ;
struct TYPE_4__ {int gcstepmul; int gcdept; scalar_t__ gcstate; scalar_t__ totalbytes; scalar_t__ GCthreshold; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3 (lua_State *VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_3);
  l_mem VAR_5 = (VAR_0/100) * VAR_4->gcstepmul;
  if (VAR_5 == 0)
    VAR_5 = (VAR_2-1)/2;
  VAR_4->gcdept += VAR_4->totalbytes - VAR_4->GCthreshold;
  do {
    VAR_5 -= FUNC_2(VAR_3);
    if (VAR_4->gcstate == VAR_1)
      break;
  } while (VAR_5 > 0);
  if (VAR_4->gcstate != VAR_1) {
    if (VAR_4->gcdept < VAR_0)
      VAR_4->GCthreshold = VAR_4->totalbytes + VAR_0;
    else {
      VAR_4->gcdept -= VAR_0;
      VAR_4->GCthreshold = VAR_4->totalbytes;
    }
  }
  else {
    FUNC_1(VAR_4);
  }
}
