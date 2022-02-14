
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int * tmname; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const* const) ;
 int FUNC_2 (int ) ;

void FUNC_3 (lua_State *VAR_1) {
  static const char *const VAR_2[] = {
    "__index", "__newindex",
    "__gc", "__mode", "__eq",
    "__add", "__sub", "__mul", "__div", "__mod",
    "__pow", "__unm", "__len", "__lt", "__le",
    "__concat", "__call"
  };
  int VAR_3;
  for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
    FUNC_0(VAR_1)->tmname[VAR_3] = FUNC_1(VAR_1, VAR_2[VAR_3]);
    FUNC_2(FUNC_0(VAR_1)->tmname[VAR_3]);
  }
}
