
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_4__ {scalar_t__ current_str_ref; int offset; } ;
typedef TYPE_1__ ENC_DATA ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 char* FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_2, ENC_DATA *VAR_3, int VAR_4) {
  luaL_Buffer VAR_5;
  FUNC_1(VAR_2, &VAR_5);

  size_t VAR_6;

  do {

    if (VAR_3->current_str_ref != VAR_0) {

      FUNC_4(VAR_2, VAR_1, VAR_3->current_str_ref);
      const char *VAR_7 = FUNC_5(VAR_2, -1, &VAR_6);

      FUNC_3(VAR_2, 1);

      int VAR_8 = VAR_6 - VAR_3->offset;;
      if (VAR_8 > VAR_4) {
        VAR_8 = VAR_4;
      }
      FUNC_0(&VAR_5, VAR_7 + VAR_3->offset, VAR_8);
      VAR_3->offset += VAR_8;
      VAR_4 -= VAR_8;

      if (VAR_3->offset == VAR_6) {
        FUNC_6(VAR_2, VAR_3->current_str_ref);
        VAR_3->current_str_ref = VAR_0;
      }
    }

    if (VAR_4 > 0) {

      FUNC_7(VAR_2, VAR_3);
    }

  } while (VAR_4 > 0 && VAR_3->current_str_ref != VAR_0);

  FUNC_2(&VAR_5);

  FUNC_5(VAR_2, -1, &VAR_6);

  if (VAR_6 == 0) {

    FUNC_3(VAR_2, 1);
    return 0;
  }

  return 1;
}
