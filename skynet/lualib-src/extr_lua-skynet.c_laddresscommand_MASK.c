
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;
typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct skynet_context* FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (struct skynet_context*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_3(VAR_0, FUNC_4(1));
 const char * VAR_2 = FUNC_0(VAR_0,1);
 const char * VAR_3;
 const char * VAR_4 = ((void*)0);
 if (FUNC_1(VAR_0) == 2) {
  VAR_4 = FUNC_0(VAR_0,2);
 }
 VAR_3 = FUNC_5(VAR_1, VAR_2, VAR_4);
 if (VAR_3 && VAR_3[0] == ':') {
  int VAR_5;
  uint32_t VAR_6 = 0;
  for (VAR_5=1;VAR_3[VAR_5];VAR_5++) {
   int VAR_7 = VAR_3[VAR_5];
   if (VAR_7>='0' && VAR_7<='9') {
    VAR_7 = VAR_7 - '0';
   } else if (VAR_7>='a' && VAR_7<='f') {
    VAR_7 = VAR_7 - 'a' + 10;
   } else if (VAR_7>='A' && VAR_7<='F') {
    VAR_7 = VAR_7 - 'A' + 10;
   } else {
    return 0;
   }
   VAR_6 = VAR_6 * 16 + VAR_7;
  }
  FUNC_2(VAR_0, VAR_6);
  return 1;
 }
 return 0;
}
