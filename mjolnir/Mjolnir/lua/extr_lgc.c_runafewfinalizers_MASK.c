
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {unsigned int gcfinnum; scalar_t__ tobefnz; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0) {
  global_State *VAR_1 = FUNC_0(VAR_0);
  unsigned int VAR_2;
  FUNC_2(!VAR_1->tobefnz || VAR_1->gcfinnum > 0);
  for (VAR_2 = 0; VAR_1->tobefnz && VAR_2 < VAR_1->gcfinnum; VAR_2++)
    FUNC_1(VAR_0, 1);
  VAR_1->gcfinnum = (!VAR_1->tobefnz) ? 0
                    : VAR_1->gcfinnum * 2;
  return VAR_2;
}
