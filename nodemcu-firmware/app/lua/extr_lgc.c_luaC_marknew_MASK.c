
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_10__ {scalar_t__ gcstate; } ;
typedef TYPE_2__ global_State ;
struct TYPE_9__ {int marked; } ;
struct TYPE_11__ {TYPE_1__ gch; } ;
typedef TYPE_3__ GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;

void FUNC_3 (lua_State *VAR_1, GCObject *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_1);
  VAR_2->gch.marked = FUNC_1(VAR_3);
  if (VAR_3->gcstate == VAR_0)
    FUNC_2(VAR_3, VAR_2);
}
