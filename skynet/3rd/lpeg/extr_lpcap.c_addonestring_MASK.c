
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_6__ {int * L; int cap; } ;
typedef TYPE_1__ CapState ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char const*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9 (luaL_Buffer *VAR_0, CapState *VAR_1, const char *VAR_2) {
  switch (FUNC_0(VAR_1->cap)) {
    case 129:
      FUNC_7(VAR_0, VAR_1);
      return 1;
    case 128:
      FUNC_8(VAR_0, VAR_1);
      return 1;
    default: {
      lua_State *VAR_3 = VAR_1->L;
      int VAR_4 = FUNC_6(VAR_1);
      if (VAR_4 > 0) {
        if (VAR_4 > 1) FUNC_5(VAR_3, VAR_4 - 1);
        if (!FUNC_4(VAR_3, -1))
          FUNC_2(VAR_3, "invalid %s value (a %s)", VAR_2, FUNC_3(VAR_3, -1));
        FUNC_1(VAR_0);
      }
      return VAR_4;
    }
  }
}
