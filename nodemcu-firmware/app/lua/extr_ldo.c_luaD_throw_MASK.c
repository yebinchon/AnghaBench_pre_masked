
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int status; TYPE_9__* errorJmp; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_14__ {int status; } ;
struct TYPE_12__ {int (* panic ) (TYPE_1__*) ;} ;


 TYPE_10__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_9__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8 (lua_State *VAR_0, int VAR_1) {
  FUNC_6(VAR_0);
  FUNC_7(VAR_0);
  if (VAR_0->errorJmp) {
    VAR_0->errorJmp->status = VAR_1;
    FUNC_1(VAR_0, VAR_0->errorJmp);
  }
  else {
    VAR_0->status = FUNC_2(VAR_1);
    if (FUNC_0(VAR_0)->panic) {
      FUNC_4(VAR_0, VAR_1);
      FUNC_3(VAR_0);
      FUNC_0(VAR_0)->panic(VAR_0);
    }

  }
}
