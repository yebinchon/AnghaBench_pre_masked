
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int*,char*,int) ;

__attribute__((used)) static void
FUNC_5(lua_State *VAR_2, int VAR_3, void * VAR_4, uint32_t VAR_5) {
 uint8_t VAR_6[VAR_1];
 int VAR_7 = (VAR_5 - 1) / VAR_0 + 1;
 int VAR_8;
 char *VAR_9 = VAR_4;
 for (VAR_8=0;VAR_8<VAR_7;VAR_8++) {
  uint32_t VAR_10;
  if (VAR_5 > VAR_0) {
   VAR_10 = VAR_0;
   VAR_6[2] = 2;
  } else {
   VAR_10 = VAR_5;
   VAR_6[2] = 3;
  }
  FUNC_0(VAR_2, VAR_6, VAR_10+5);
  FUNC_1(VAR_6+3, (uint32_t)VAR_3);
  FUNC_4(VAR_6+7, VAR_9, VAR_10);
  FUNC_2(VAR_2, (const char *)VAR_6, VAR_10+7);
  FUNC_3(VAR_2, -2, VAR_8+1);
  VAR_5 -= VAR_10;
  VAR_9 += VAR_10;
 }
}
