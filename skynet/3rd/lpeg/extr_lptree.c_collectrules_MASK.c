
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static int FUNC_16 (lua_State *VAR_1, int VAR_2, int *VAR_3) {
  int VAR_4 = 1;
  int VAR_5 = FUNC_5(VAR_1) + 1;
  int VAR_6;
  FUNC_6(VAR_1);
  FUNC_0(VAR_1, VAR_2, VAR_5);
  VAR_6 = 2 + FUNC_1(VAR_1, VAR_5 + 2);
  FUNC_10(VAR_1);
  while (FUNC_7(VAR_1, VAR_2) != 0) {
    if (FUNC_13(VAR_1, -2) == 1 ||
        FUNC_2(VAR_1, -2, VAR_5 + 1)) {
      FUNC_8(VAR_1, 1);
      continue;
    }
    if (!FUNC_14(VAR_1, -1))
      FUNC_4(VAR_1, "rule '%s' is not a pattern", FUNC_15(VAR_1, -2));
    FUNC_3(VAR_1, VAR_0, "grammar has too many rules");
    FUNC_11(VAR_1, -2);
    FUNC_9(VAR_1, VAR_6);
    FUNC_12(VAR_1, VAR_5);
    VAR_6 += 1 + FUNC_1(VAR_1, -1);
    FUNC_11(VAR_1, -2);
    VAR_4++;
  }
  *VAR_3 = VAR_6 + 1;
  return VAR_4;
}
