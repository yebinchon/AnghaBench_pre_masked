
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*,int *,int) ;

__attribute__((used)) static const char *
FUNC_6(lua_State *VAR_0, char *VAR_1, const char * VAR_2, int VAR_3, int *VAR_4) {
 const char * VAR_5;
 if (FUNC_2(VAR_0,VAR_3)) {
  VAR_5 = FUNC_4(VAR_2, '[');
  if (VAR_5) {

   ++VAR_5;
   const char * VAR_6 = FUNC_4(VAR_2,']');
   if (VAR_6 == ((void*)0)) {
    FUNC_0(VAR_0, "Invalid address %s.",VAR_2);
   }
   FUNC_3(VAR_1, VAR_5, VAR_6-VAR_5);
   VAR_1[VAR_6-VAR_5] = '\0';
   VAR_5 = VAR_1;
   VAR_6 = FUNC_4(VAR_6 + 1, ':');
   if (VAR_6 == ((void*)0)) {
    FUNC_0(VAR_0, "Invalid address %s.",VAR_2);
   }
   *VAR_4 = FUNC_5(VAR_6+1,((void*)0),10);
  } else {

   const char * VAR_7 = FUNC_4(VAR_2,':');
   if (VAR_7 == ((void*)0)) {
    FUNC_0(VAR_0, "Invalid address %s.",VAR_2);
   }
   FUNC_3(VAR_1, VAR_2, VAR_7-VAR_2);
   VAR_1[VAR_7-VAR_2] = '\0';
   VAR_5 = VAR_1;
   *VAR_4 = FUNC_5(VAR_7+1,((void*)0),10);
  }
 } else {
  VAR_5 = VAR_2;
  *VAR_4 = FUNC_1(VAR_0,VAR_3, 0);
 }
 return VAR_5;
}
