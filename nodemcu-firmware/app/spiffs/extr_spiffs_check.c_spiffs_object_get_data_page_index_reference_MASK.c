
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef scalar_t__ spiffs_span_ix ;
typedef int spiffs_page_object_ix_header ;
typedef int spiffs_page_object_ix ;
typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
typedef int spiffs ;
typedef int s32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int ,int,int,int *) ;
 int FUNC_5 (int *,int,scalar_t__,int ,int *) ;

__attribute__((used)) static s32_t FUNC_6(
  spiffs *VAR_3,
  spiffs_obj_id VAR_4,
  spiffs_span_ix VAR_5,
  spiffs_page_ix *VAR_6,
  spiffs_page_ix *VAR_7) {
  s32_t VAR_8;


  spiffs_span_ix VAR_9 = FUNC_2(VAR_3, VAR_5);


  VAR_8 = FUNC_5(VAR_3, VAR_4 | VAR_0, VAR_9, 0, VAR_7);
  FUNC_0(VAR_8);


  u32_t VAR_10 = FUNC_3(VAR_3, *VAR_7);
  if (VAR_9 == 0) {

    VAR_10 += sizeof(spiffs_page_object_ix_header) + VAR_5 * sizeof(spiffs_page_ix);
  } else {

    VAR_10 += sizeof(spiffs_page_object_ix) + FUNC_1(VAR_3, VAR_5) * sizeof(spiffs_page_ix);
  }

  VAR_8 = FUNC_4(VAR_3, VAR_2 | VAR_1, 0, VAR_10, sizeof(spiffs_page_ix), (u8_t *)VAR_6);

  return VAR_8;
}
