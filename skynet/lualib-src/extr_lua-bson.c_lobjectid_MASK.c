
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int time_t ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int *,char*,char const*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*,int) ;
 char* FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (int*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_3) {
 uint8_t VAR_4[14] = { 0, VAR_0 };
 if (FUNC_3(VAR_3,1)) {
  size_t VAR_5;
  const char * VAR_6 = FUNC_5(VAR_3,1,&VAR_5);
  if (VAR_5 != 24) {
   return FUNC_2(VAR_3, "Invalid objectid %s", VAR_6);
  }
  int VAR_7;
  for (VAR_7=0;VAR_7<12;VAR_7++) {
   VAR_4[VAR_7+2] = FUNC_1(VAR_6[VAR_7*2]) << 4 | FUNC_1(VAR_6[VAR_7*2+1]);
  }
 } else {
  time_t VAR_8 = FUNC_7(((void*)0));

  uint32_t VAR_9 = FUNC_0(&VAR_1);

  VAR_4[2] = (VAR_8>>24) & 0xff;
  VAR_4[3] = (VAR_8>>16) & 0xff;
  VAR_4[4] = (VAR_8>>8) & 0xff;
  VAR_4[5] = VAR_8 & 0xff;
  FUNC_6(VAR_4+6 , VAR_2, 5);
  VAR_4[11] = (VAR_9>>16) & 0xff;
  VAR_4[12] = (VAR_9>>8) & 0xff;
  VAR_4[13] = VAR_9 & 0xff;
 }
 FUNC_4( VAR_3, (const char *)VAR_4, 14);

 return 1;
}
