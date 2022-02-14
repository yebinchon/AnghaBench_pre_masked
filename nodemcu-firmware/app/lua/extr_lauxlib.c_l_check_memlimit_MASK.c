
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ lu_mem ;
struct TYPE_3__ {size_t memlimit; scalar_t__ totalbytes; scalar_t__ gcstate; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_1, size_t VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_1);
  int VAR_4 = 0;
  lu_mem VAR_5 = VAR_3->memlimit - VAR_2;

  if (VAR_2 > VAR_3->memlimit) return 1;

  if (!FUNC_1(VAR_1)) {
    while (VAR_3->totalbytes >= VAR_5) {

      if (VAR_3->gcstate == VAR_0 && ++VAR_4 > 1) break;
      FUNC_2(VAR_1);
    }
  }
  return (VAR_3->totalbytes >= VAR_5) ? 1 : 0;
}
