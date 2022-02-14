
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
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *,char const*,int) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,int) ;
 char const* FUNC_6 (int *,int ) ;
 int FUNC_7 (int*,char const*,size_t) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_2, int VAR_3, void * VAR_4, uint32_t VAR_5, int VAR_6) {
 size_t VAR_7 = 0;
 const char *VAR_8 = FUNC_4(VAR_2, 1, &VAR_7);
 if (VAR_8 == ((void*)0) || VAR_7 < 1 || VAR_7 > 255) {
  FUNC_8(VAR_4);
  if (VAR_8 == ((void*)0)) {
   FUNC_2(VAR_2, "name is not a string, it's a %s", FUNC_6(VAR_2, FUNC_5(VAR_2, 1)));
  } else {
   FUNC_2(VAR_2, "name is too long %s", VAR_8);
  }
 }

 uint8_t VAR_9[VAR_1];
 if (VAR_5 < VAR_0) {
  FUNC_0(VAR_2, VAR_9, VAR_5+6+VAR_7);
  VAR_9[2] = 0x80;
  VAR_9[3] = (uint8_t)VAR_7;
  FUNC_7(VAR_9+4, VAR_8, VAR_7);
  FUNC_1(VAR_9+4+VAR_7, VAR_6 ? 0 : (uint32_t)VAR_3);
  FUNC_7(VAR_9+8+VAR_7,VAR_4,VAR_5);

  FUNC_3(VAR_2, (const char *)VAR_9, VAR_5+8+VAR_7);
  return 0;
 } else {
  int VAR_10 = (VAR_5 - 1) / VAR_0 + 1;
  FUNC_0(VAR_2, VAR_9, 10+VAR_7);
  VAR_9[2] = VAR_6 ? 0xc1 : 0x81;
  VAR_9[3] = (uint8_t)VAR_7;
  FUNC_7(VAR_9+4, VAR_8, VAR_7);
  FUNC_1(VAR_9+4+VAR_7, (uint32_t)VAR_3);
  FUNC_1(VAR_9+8+VAR_7, VAR_5);

  FUNC_3(VAR_2, (const char *)VAR_9, 12+VAR_7);
  return VAR_10;
 }
}
