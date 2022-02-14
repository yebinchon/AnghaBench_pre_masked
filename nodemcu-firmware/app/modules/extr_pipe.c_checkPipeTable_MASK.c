
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int buffer_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int * FUNC_11 (int *,int,int) ;
 int VAR_1 ;

__attribute__((used)) static buffer_t *FUNC_12 (lua_State *VAR_2, int VAR_3, int VAR_4) {
  int VAR_5 = FUNC_4(VAR_2), VAR_6 = FUNC_5(VAR_2, VAR_3);
  if (FUNC_10(VAR_2, VAR_3) == VAR_0 && FUNC_3(VAR_2, VAR_3)) {
    FUNC_6(VAR_2, FUNC_0(VAR_1));
    if (FUNC_7(VAR_2, -1, -2)) {
      buffer_t *VAR_7;
      if (VAR_6 == 0) {
        VAR_7 = VAR_4 ? ((void*)0) : FUNC_11(VAR_2, VAR_3, 1);
      } else {
        int VAR_8 = VAR_4 ? 1 : VAR_6;
        FUNC_8(VAR_2, VAR_3, VAR_8);
        VAR_7 = FUNC_1(VAR_2, -1);
      }
      FUNC_9(VAR_2, VAR_5);
      return VAR_7;
    }
  }
  FUNC_2(VAR_2, VAR_3, "pipe table");
  return ((void*)0);
}
