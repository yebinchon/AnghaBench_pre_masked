
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* openupval; struct TYPE_12__* twups; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_13__ {TYPE_3__* twups; } ;
typedef TYPE_4__ global_State ;
struct TYPE_10__ {scalar_t__ touched; TYPE_5__* next; } ;
struct TYPE_11__ {TYPE_1__ open; } ;
struct TYPE_14__ {TYPE_2__ u; int v; } ;
typedef TYPE_5__ UpVal ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_4 (global_State *VAR_0) {
  lua_State *VAR_1;
  lua_State **VAR_2 = &VAR_0->twups;
  while ((VAR_1 = *VAR_2) != ((void*)0)) {
    FUNC_2(!FUNC_0(VAR_1));
    if (FUNC_1(VAR_1) && VAR_1->openupval != ((void*)0))
      VAR_2 = &VAR_1->twups;
    else {
      UpVal *VAR_3;
      *VAR_2 = VAR_1->twups;
      VAR_1->twups = VAR_1;
      for (VAR_3 = VAR_1->openupval; VAR_3 != ((void*)0); VAR_3 = VAR_3->u.open.next) {
        if (VAR_3->u.open.touched) {
          FUNC_3(VAR_0, VAR_3->v);
          VAR_3->u.open.touched = 0;
        }
      }
    }
  }
}
