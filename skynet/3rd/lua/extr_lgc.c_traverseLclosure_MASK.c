
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lu_mem ;
struct TYPE_13__ {scalar_t__ gcstate; } ;
typedef TYPE_3__ global_State ;
struct TYPE_11__ {int touched; } ;
struct TYPE_12__ {TYPE_1__ open; } ;
struct TYPE_14__ {int v; TYPE_2__ u; } ;
typedef TYPE_4__ UpVal ;
struct TYPE_15__ {int nupvalues; TYPE_4__** upvals; int p; } ;
typedef TYPE_5__ LClosure ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static lu_mem FUNC_4 (global_State *VAR_1, LClosure *VAR_2) {
  int VAR_3;
  FUNC_0(VAR_1, VAR_2->p);
  for (VAR_3 = 0; VAR_3 < VAR_2->nupvalues; VAR_3++) {
    UpVal *VAR_4 = VAR_2->upvals[VAR_3];
    if (VAR_4 != ((void*)0)) {
      if (FUNC_3(VAR_4) && VAR_1->gcstate != VAR_0)
        VAR_4->u.open.touched = 1;
      else
        FUNC_1(VAR_1, VAR_4->v);
    }
  }
  return FUNC_2(VAR_2->nupvalues);
}
