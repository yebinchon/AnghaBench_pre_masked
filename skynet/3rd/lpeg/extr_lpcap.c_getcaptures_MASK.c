
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char const* s; int ptop; int * cap; scalar_t__ valuecached; int * L; int * ocap; } ;
typedef int Capture ;
typedef TYPE_1__ CapState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

int FUNC_5 (lua_State *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3) {
  Capture *VAR_4 = (Capture *)FUNC_3(VAR_0, FUNC_0(VAR_3));
  int VAR_5 = 0;
  if (!FUNC_1(VAR_4)) {
    CapState VAR_6;
    VAR_6.ocap = VAR_6.cap = VAR_4; VAR_6.L = VAR_0;
    VAR_6.s = VAR_1; VAR_6.valuecached = 0; VAR_6.ptop = VAR_3;
    do {
      VAR_5 += FUNC_4(&VAR_6);
    } while (!FUNC_1(VAR_6.cap));
  }
  if (VAR_5 == 0) {
    FUNC_2(VAR_0, VAR_2 - VAR_1 + 1);
    VAR_5 = 1;
  }
  return VAR_5;
}
