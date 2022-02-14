
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,char*,char const**) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_4) {
 static const char * VAR_5[] = {
  "OFF",
  "EXIST",
  "ON",
  ((void*)0),
 };
 if (FUNC_1(VAR_4,1)) {
  int VAR_6 = FUNC_4(VAR_4, VAR_1, &VAR_3);
  int VAR_7 = FUNC_6(VAR_4, -1);
  if (VAR_6 == VAR_2) {
   if (VAR_7 < 0 || VAR_7 >= VAR_0) {
    VAR_7 = VAR_0;
   }
  } else {
   VAR_7 = VAR_0;
  }
  FUNC_3(VAR_4, VAR_5[VAR_7]);
  return 1;
 }
 int VAR_8 = FUNC_0(VAR_4, 1, "OFF" , VAR_5);
 FUNC_2(VAR_4, VAR_8);
 FUNC_5(VAR_4, VAR_1, &VAR_3);
 return 0;
}
