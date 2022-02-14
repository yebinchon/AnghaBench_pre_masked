
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32_t ;
typedef int s32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static s32_t FUNC_3(u32_t VAR_4, u32_t VAR_5) {
  u32_t VAR_6 = FUNC_2(VAR_4);
  u32_t VAR_7 = VAR_6;
  while( VAR_6 <= VAR_7 ) {
    if (VAR_3 >= 0 && (VAR_3++ & 0xF) == 0) {
      FUNC_0(".");
    }
    if( FUNC_1( VAR_6 ++ ) == VAR_0 ) {
      return VAR_1;
    }
  }
  return VAR_2;
}
