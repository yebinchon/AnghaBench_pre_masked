
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct read_block {int dummy; } ;
typedef int n ;
typedef int lua_State ;
typedef int lua_Integer ;
typedef int int64_t ;
typedef int int32_t ;







 int FUNC_0 (int *,struct read_block*) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (struct read_block*,int) ;

__attribute__((used)) static lua_Integer
FUNC_3(lua_State *VAR_0, struct read_block *VAR_1, int VAR_2) {
 switch (VAR_2) {
 case 128:
  return 0;
 case 132: {
  uint8_t VAR_3;
  uint8_t * VAR_4 = FUNC_2(VAR_1,sizeof(VAR_3));
  if (VAR_4 == ((void*)0))
   FUNC_0(VAR_0,VAR_1);
  VAR_3 = *VAR_4;
  return VAR_3;
 }
 case 129: {
  uint16_t VAR_5;
  uint16_t * VAR_6 = FUNC_2(VAR_1,sizeof(VAR_5));
  if (VAR_6 == ((void*)0))
   FUNC_0(VAR_0,VAR_1);
  FUNC_1(&VAR_5, VAR_6, sizeof(VAR_5));
  return VAR_5;
 }
 case 131: {
  int32_t VAR_7;
  int32_t * VAR_8 = FUNC_2(VAR_1,sizeof(VAR_7));
  if (VAR_8 == ((void*)0))
   FUNC_0(VAR_0,VAR_1);
  FUNC_1(&VAR_7, VAR_8, sizeof(VAR_7));
  return VAR_7;
 }
 case 130: {
  int64_t VAR_9;
  int64_t * VAR_10 = FUNC_2(VAR_1,sizeof(VAR_9));
  if (VAR_10 == ((void*)0))
   FUNC_0(VAR_0,VAR_1);
  FUNC_1(&VAR_9, VAR_10, sizeof(VAR_9));
  return VAR_9;
 }
 default:
  FUNC_0(VAR_0,VAR_1);
  return 0;
 }
}
