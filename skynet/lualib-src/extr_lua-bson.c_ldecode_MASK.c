
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bson_reader {int member_1; int const* member_0; } ;
typedef int lua_State ;
typedef int int32_t ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct bson_reader*,int) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 const int32_t * VAR_1 = FUNC_1(VAR_0,1);
 if (VAR_1 == ((void*)0)) {
  return 0;
 }
 const uint8_t * VAR_2 = (const uint8_t *)VAR_1;
 int32_t VAR_3 = FUNC_0(VAR_2);
 struct bson_reader VAR_4 = { VAR_2 , &VAR_3 };

 FUNC_2(VAR_0, &VAR_4, 0);

 return 1;
}
