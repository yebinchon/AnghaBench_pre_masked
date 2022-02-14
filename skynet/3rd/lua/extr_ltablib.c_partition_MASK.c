
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int IdxT ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static IdxT FUNC_5 (lua_State *VAR_0, IdxT VAR_1, IdxT VAR_2) {
  IdxT VAR_3 = VAR_1;
  IdxT VAR_4 = VAR_2 - 1;

  for (;;) {

    while (FUNC_1(VAR_0, 1, ++VAR_3), FUNC_4(VAR_0, -1, -2)) {
      if (VAR_3 == VAR_2 - 1)
        FUNC_0(VAR_0, "invalid order function for sorting");
      FUNC_2(VAR_0, 1);
    }


    while (FUNC_1(VAR_0, 1, --VAR_4), FUNC_4(VAR_0, -3, -1)) {
      if (VAR_4 < VAR_3)
        FUNC_0(VAR_0, "invalid order function for sorting");
      FUNC_2(VAR_0, 1);
    }

    if (VAR_4 < VAR_3) {

      FUNC_2(VAR_0, 1);

      FUNC_3(VAR_0, VAR_2 - 1, VAR_3);
      return VAR_3;
    }

    FUNC_3(VAR_0, VAR_3, VAR_4);
  }
}
