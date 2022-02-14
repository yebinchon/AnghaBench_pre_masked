
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
typedef int spiffs ;
typedef scalar_t__ s32_t ;
typedef int flags ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int,int ,scalar_t__,int,int*) ;
 scalar_t__ FUNC_3 (int *,int,int ,scalar_t__,int,int*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static s32_t FUNC_6(spiffs *VAR_7, spiffs_obj_id VAR_8) {
  spiffs_page_ix VAR_9;
  s32_t VAR_10;
  VAR_10 = FUNC_5(VAR_7, VAR_8, 0, 0, &VAR_9);
  if (VAR_10 == VAR_0) {
    return VAR_1;
  }
  FUNC_0(VAR_10);
  u8_t VAR_11 = 0xff;






  VAR_11 &= ~VAR_5;
  VAR_10 = FUNC_3(VAR_7, VAR_4 | VAR_3,
      0, FUNC_1(VAR_7, VAR_9) + FUNC_4(VAR_6, VAR_11),
      sizeof(VAR_11), &VAR_11);
  return VAR_10;
}
