
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef int v64 ;
typedef int v32 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct write_block {int dummy; } ;
typedef int lua_Integer ;
typedef int int64_t ;
typedef int int32_t ;
typedef int byte ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct write_block*,int*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct write_block *VAR_6, lua_Integer VAR_7) {
 int VAR_8 = VAR_0;
 if (VAR_7 == 0) {
  uint8_t VAR_9 = FUNC_0(VAR_8 , VAR_5);
  FUNC_1(VAR_6, &VAR_9, 1);
 } else if (VAR_7 != (int32_t)VAR_7) {
  uint8_t VAR_10 = FUNC_0(VAR_8 , VAR_3);
  int64_t VAR_11 = VAR_7;
  FUNC_1(VAR_6, &VAR_10, 1);
  FUNC_1(VAR_6, &VAR_11, sizeof(VAR_11));
 } else if (VAR_7 < 0) {
  int32_t VAR_12 = (int32_t)VAR_7;
  uint8_t VAR_13 = FUNC_0(VAR_8 , VAR_2);
  FUNC_1(VAR_6, &VAR_13, 1);
  FUNC_1(VAR_6, &VAR_12, sizeof(VAR_12));
 } else if (VAR_7<0x100) {
  uint8_t VAR_14 = FUNC_0(VAR_8 , VAR_1);
  FUNC_1(VAR_6, &VAR_14, 1);
  uint8_t VAR_15 = (uint8_t)VAR_7;
  FUNC_1(VAR_6, &VAR_15, sizeof(VAR_15));
 } else if (VAR_7<0x10000) {
  uint8_t VAR_16 = FUNC_0(VAR_8 , VAR_4);
  FUNC_1(VAR_6, &VAR_16, 1);
  uint16_t VAR_17 = (uint16_t)VAR_7;
  FUNC_1(VAR_6, &VAR_17, sizeof(VAR_17));
 } else {
  uint8_t VAR_18 = FUNC_0(VAR_8 , VAR_2);
  FUNC_1(VAR_6, &VAR_18, 1);
  uint32_t VAR_19 = (uint32_t)VAR_7;
  FUNC_1(VAR_6, &VAR_19, sizeof(VAR_19));
 }
}
