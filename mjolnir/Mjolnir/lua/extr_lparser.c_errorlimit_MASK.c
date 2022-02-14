
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int l_noret ;
struct TYPE_7__ {int * L; } ;
struct TYPE_6__ {TYPE_3__* ls; TYPE_1__* f; } ;
struct TYPE_5__ {int linedefined; } ;
typedef TYPE_2__ FuncState ;


 char* FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_3__*,char const*) ;

__attribute__((used)) static l_noret FUNC_2 (FuncState *VAR_0, int VAR_1, const char *VAR_2) {
  lua_State *VAR_3 = VAR_0->ls->L;
  const char *VAR_4;
  int VAR_5 = VAR_0->f->linedefined;
  const char *VAR_6 = (VAR_5 == 0)
                      ? "main function"
                      : FUNC_0(VAR_3, "function at line %d", VAR_5);
  VAR_4 = FUNC_0(VAR_3, "too many %s (limit is %d) in %s",
                             VAR_2, VAR_1, VAR_6);
  FUNC_1(VAR_0->ls, VAR_4);
}
