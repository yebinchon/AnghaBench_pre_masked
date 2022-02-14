
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_16__ {scalar_t__ gcstate; } ;
typedef TYPE_2__ global_State ;
struct TYPE_15__ {scalar_t__ tt; } ;
struct TYPE_17__ {TYPE_1__ gch; } ;
typedef TYPE_3__ GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;

void FUNC_7 (lua_State *VAR_4, GCObject *VAR_5, GCObject *VAR_6) {
  global_State *VAR_7 = FUNC_0(VAR_4);
  FUNC_4(FUNC_1(VAR_5) && FUNC_3(VAR_6) && !FUNC_2(VAR_7, VAR_6) && !FUNC_2(VAR_7, VAR_5));
  FUNC_4(VAR_7->gcstate != VAR_0 && VAR_7->gcstate != VAR_1);
  FUNC_4(VAR_5->gch.tt != VAR_3);

  if (VAR_7->gcstate == VAR_2)
    FUNC_6(VAR_7, VAR_6);
  else
    FUNC_5(VAR_7, VAR_5);
}
