
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ nny; scalar_t__ top; int errfunc; TYPE_4__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_13__ {int (* k ) (TYPE_3__*,int,int ) ;int ctx; int old_errfunc; } ;
struct TYPE_14__ {TYPE_1__ c; } ;
struct TYPE_16__ {int callstatus; TYPE_2__ u; int nresults; } ;
typedef TYPE_4__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void FUNC_7 (lua_State *VAR_2, int VAR_3) {
  CallInfo *VAR_4 = VAR_2->ci;
  int VAR_5;

  FUNC_3(VAR_4->u.c.k != ((void*)0) && VAR_2->nny == 0);

  FUNC_3((VAR_4->callstatus & VAR_0) || VAR_3 == VAR_1);
  if (VAR_4->callstatus & VAR_0) {
    VAR_4->callstatus &= ~VAR_0;
    VAR_2->errfunc = VAR_4->u.c.old_errfunc;
  }


  FUNC_0(VAR_2, VAR_4->nresults);
  FUNC_5(VAR_2);
  VAR_5 = (*VAR_4->u.c.k)(VAR_2, VAR_3, VAR_4->u.c.ctx);
  FUNC_4(VAR_2);
  FUNC_1(VAR_2, VAR_5);
  FUNC_2(VAR_2, VAR_4, VAR_2->top - VAR_5, VAR_5);
}
