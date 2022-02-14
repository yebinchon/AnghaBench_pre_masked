
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
typedef int spiffs_mode ;
typedef int spiffs_flags ;
typedef int spiffs_fd ;
typedef int spiffs ;
typedef int s32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int *,int ,int ) ;

s32_t FUNC_3(
    spiffs *VAR_2,
    spiffs_obj_id VAR_3,
    spiffs_fd *VAR_4,
    spiffs_flags VAR_5,
    spiffs_mode VAR_6) {
  s32_t VAR_7 = VAR_1;
  spiffs_page_ix VAR_8;

  VAR_7 = FUNC_1(VAR_2, VAR_3 | VAR_0, 0, 0, &VAR_8);
  FUNC_0(VAR_7);

  VAR_7 = FUNC_2(VAR_2, VAR_8, VAR_4, VAR_5, VAR_6);

  return VAR_7;
}
