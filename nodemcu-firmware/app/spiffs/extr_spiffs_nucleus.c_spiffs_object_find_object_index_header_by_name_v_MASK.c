
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct TYPE_3__ {scalar_t__ span_ix; int flags; } ;
struct TYPE_4__ {scalar_t__ name; TYPE_1__ p_hdr; } ;
typedef TYPE_2__ spiffs_page_object_ix_header ;
typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
typedef int spiffs_block_ix ;
typedef int spiffs ;
typedef int s32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,int,int ,int ,int,int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static s32_t FUNC_5(
    spiffs *VAR_10,
    spiffs_obj_id VAR_11,
    spiffs_block_ix VAR_12,
    int VAR_13,
    const void *VAR_14,
    void *VAR_15) {
  (void)VAR_15;
  s32_t VAR_16;
  spiffs_page_object_ix_header VAR_17;
  spiffs_page_ix VAR_18 = FUNC_1(VAR_10, VAR_12, VAR_13);
  if (VAR_11 == VAR_1 || VAR_11 == VAR_0 ||
      (VAR_11 & VAR_2) == 0) {
    return VAR_9;
  }
  VAR_16 = FUNC_3(VAR_10, VAR_5 | VAR_4,
      0, FUNC_2(VAR_10, VAR_18), sizeof(spiffs_page_object_ix_header), (u8_t *)&VAR_17);
  FUNC_0(VAR_16);
  if (VAR_17.p_hdr.span_ix == 0 &&
      (VAR_17.p_hdr.flags & (VAR_6 | VAR_7 | VAR_8)) ==
          (VAR_6 | VAR_8)) {
    if (FUNC_4((const char*)VAR_14, (char*)VAR_17.name) == 0) {
      return VAR_3;
    }
  }

  return VAR_9;
}
