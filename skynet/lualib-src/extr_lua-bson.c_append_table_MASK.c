
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bson*,int *,int ,char const*,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 size_t FUNC_9 (int *,int) ;
 size_t FUNC_10 (int *,int) ;
 int FUNC_11 (int *,struct bson*,int,size_t) ;
 int FUNC_12 (int *,struct bson*,int) ;
 int FUNC_13 (int *,struct bson*,int) ;

__attribute__((used)) static void
FUNC_14(struct bson *VAR_4, lua_State *VAR_5, const char *VAR_6, size_t VAR_7, int VAR_8) {
 if (VAR_8 > VAR_3) {
  FUNC_3(VAR_5, "Too depth while encoding bson");
 }
 FUNC_2(VAR_5, 16, ((void*)0));
 if (FUNC_4(VAR_5, -1, "__len") != VAR_2) {
  FUNC_8(VAR_5, -2);
  FUNC_5(VAR_5, 1, 1);
  if (!FUNC_6(VAR_5, -1)) {
   FUNC_3(VAR_5, "__len should return integer");
  }
  size_t VAR_9 = FUNC_10(VAR_5, -1);
  FUNC_7(VAR_5, 1);
  FUNC_0(VAR_4, VAR_5, VAR_0, VAR_6, VAR_7);
  FUNC_11(VAR_5, VAR_4, VAR_8, VAR_9);
 } else if (FUNC_4(VAR_5, -1, "__pairs") != VAR_2) {
  FUNC_0(VAR_4, VAR_5, VAR_1, VAR_6, VAR_7);
  FUNC_12(VAR_5, VAR_4, VAR_8);
 } else if (FUNC_1(VAR_5)) {
  FUNC_0(VAR_4, VAR_5, VAR_0, VAR_6, VAR_7);
  FUNC_11(VAR_5, VAR_4, VAR_8, FUNC_9(VAR_5, -1));
 } else {
  FUNC_0(VAR_4, VAR_5, VAR_1, VAR_6, VAR_7);
  FUNC_13(VAR_5, VAR_4, VAR_8);
 }
}
