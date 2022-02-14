
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u32_t ;
typedef int spiffs_file ;
typedef int spiffs ;
typedef int s32_t ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_3 (int *,int,int ,scalar_t__,scalar_t__,int *) ;

s32_t FUNC_4(
    spiffs *VAR_5,
    spiffs_file VAR_6,
    u32_t VAR_7,
    u32_t VAR_8,
    u32_t VAR_9) {
  (void)VAR_6;
  s32_t VAR_10;
  u8_t VAR_11[VAR_0];
  while (VAR_9 > 0) {
    u32_t VAR_12 = FUNC_0(VAR_0, VAR_9);
    VAR_10 = FUNC_2(VAR_5, VAR_4 | VAR_3, VAR_6, VAR_8, VAR_12, VAR_11);
    FUNC_1(VAR_10);
    VAR_10 = FUNC_3(VAR_5, VAR_4 | VAR_2, VAR_6, VAR_7, VAR_12, VAR_11);
    FUNC_1(VAR_10);
    VAR_9 -= VAR_12;
    VAR_8 += VAR_12;
    VAR_7 += VAR_12;
  }
  return VAR_1;
}
