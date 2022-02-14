
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int spiffs ;
typedef scalar_t__ s32_t ;


 int FUNC_0 (int *,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

s32_t FUNC_2(spiffs *VAR_6, u8_t VAR_7) {
  (void)VAR_7;
  s32_t VAR_8 = VAR_3;

  FUNC_0(VAR_6, VAR_1, VAR_2, 0, 0);

  VAR_8 = FUNC_1(VAR_6, 0, 0, 0, 0, VAR_5, 0, 0, 0, 0);

  if (VAR_8 == VAR_4) {
    VAR_8 = VAR_3;
  }

  if (VAR_8 != VAR_3) {
    FUNC_0(VAR_6, VAR_1, VAR_0, VAR_8, 0);
  }

  FUNC_0(VAR_6, VAR_1, VAR_2, 256, 0);

  return VAR_8;
}
