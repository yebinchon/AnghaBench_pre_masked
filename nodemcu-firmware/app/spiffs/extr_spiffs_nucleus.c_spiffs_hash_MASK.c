
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef int spiffs ;


 int VAR_0 ;

__attribute__((used)) static u32_t FUNC_0(spiffs *VAR_1, const u8_t *VAR_2) {
  (void)VAR_1;
  u32_t VAR_3 = 5381;
  u8_t VAR_4;
  int VAR_5 = 0;
  while ((VAR_4 = VAR_2[VAR_5++]) && VAR_5 < VAR_0) {
    VAR_3 = (VAR_3 * 33) ^ VAR_4;
  }
  return VAR_3;
}
