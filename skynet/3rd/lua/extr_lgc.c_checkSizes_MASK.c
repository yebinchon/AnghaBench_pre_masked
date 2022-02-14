
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ l_mem ;
struct TYPE_4__ {int nuse; int size; } ;
struct TYPE_5__ {scalar_t__ gckind; scalar_t__ GCdebt; int GCestimate; TYPE_1__ strt; } ;
typedef TYPE_2__ global_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1 (lua_State *VAR_1, global_State *VAR_2) {
  if (VAR_2->gckind != VAR_0) {
    l_mem VAR_3 = VAR_2->GCdebt;
    if (VAR_2->strt.nuse < VAR_2->strt.size / 4)
      FUNC_0(VAR_1, VAR_2->strt.size / 2);
    VAR_2->GCestimate += VAR_2->GCdebt - VAR_3;
  }
}
