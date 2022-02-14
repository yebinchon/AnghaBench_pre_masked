
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int lua_State ;
typedef int lua_Integer ;


 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*,size_t const*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 size_t VAR_1;
 const uint8_t * VAR_2 = (const uint8_t *)FUNC_0(VAR_0, 1, &VAR_1);
 if (VAR_1 > 4 || VAR_1 < 1) {
  return FUNC_1(VAR_0, "Invalid read %s", VAR_2);
 }
 int VAR_3;
 size_t VAR_4 = 0;
 for (VAR_3=0;VAR_3<(int)VAR_1;VAR_3++) {
  VAR_4 <<= 8;
  VAR_4 |= VAR_2[VAR_3];
 }

 FUNC_2(VAR_0, (lua_Integer)VAR_4);

 return 1;
}
