
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ spiffs_span_ix ;
typedef scalar_t__ const spiffs_page_ix ;
struct TYPE_2__ {int obj_id; scalar_t__ span_ix; int flags; } ;
typedef TYPE_1__ spiffs_page_header ;
typedef int spiffs_obj_id ;
typedef int spiffs_block_ix ;
typedef int spiffs ;
typedef int s32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__ const) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int,int ,int,int *) ;

__attribute__((used)) static s32_t FUNC_4(
    spiffs *VAR_9,
    spiffs_obj_id VAR_10,
    spiffs_block_ix VAR_11,
    int VAR_12,
    const void *VAR_13,
    void *VAR_14) {
  s32_t VAR_15;
  spiffs_page_header VAR_16;
  spiffs_page_ix VAR_17 = FUNC_1(VAR_9, VAR_11, VAR_12);
  VAR_15 = FUNC_3(VAR_9, 0, VAR_3 | VAR_2,
      FUNC_2(VAR_9, VAR_17), sizeof(spiffs_page_header), (u8_t *)&VAR_16);
  FUNC_0(VAR_15);
  if (VAR_16.obj_id == VAR_10 &&
      VAR_16.span_ix == *((spiffs_span_ix*)VAR_14) &&
      (VAR_16.flags & (VAR_5 | VAR_4 | VAR_7)) == VAR_4 &&
      !((VAR_10 & VAR_0) && (VAR_16.flags & VAR_6) == 0 && VAR_16.span_ix == 0) &&
      (VAR_13 == 0 || *((const spiffs_page_ix*)VAR_13) != VAR_17)) {
    return VAR_1;
  } else {
    return VAR_8;
  }
}
