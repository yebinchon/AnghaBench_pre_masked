
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bson {int ptr; } ;
typedef int lua_State ;
typedef int int64_t ;





 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (struct bson*,int const) ;
 int FUNC_4 (struct bson*,int) ;

__attribute__((used)) static void
FUNC_5(lua_State *VAR_0, int VAR_1, struct bson * VAR_2) {
 size_t VAR_3 = 0;
 const char * VAR_4 = FUNC_0(VAR_0,3, &VAR_3);
 if (VAR_3 < 6 || VAR_4[0] != 0 || VAR_4[1] != VAR_1) {
  FUNC_1(VAR_0, "Type mismatch, need bson type %d", VAR_1);
 }
 switch (VAR_1) {
 case 129:
  if (VAR_3 != 2+12) {
   FUNC_1(VAR_0, "Invalid object id");
  }
  FUNC_2(VAR_2->ptr, VAR_4+2, 12);
  break;
 case 130: {
  if (VAR_3 != 2+4) {
   FUNC_1(VAR_0, "Invalid date");
  }
  const uint32_t * VAR_5 = (const uint32_t *)(VAR_4 + 2);
  int64_t VAR_6 = (int64_t)*VAR_5 * 1000;
  FUNC_4(VAR_2, VAR_6);
  break;
 }
 case 128: {
  if (VAR_3 != 2+8) {
   FUNC_1(VAR_0, "Invalid timestamp");
  }
  const uint32_t * VAR_7 = (const uint32_t *)(VAR_4 + 2);
  const uint32_t * VAR_8 = (const uint32_t *)(VAR_4 + 6);
  FUNC_3(VAR_2, *VAR_7);
  FUNC_3(VAR_2, *VAR_8);
  break;
 }
 }
}
