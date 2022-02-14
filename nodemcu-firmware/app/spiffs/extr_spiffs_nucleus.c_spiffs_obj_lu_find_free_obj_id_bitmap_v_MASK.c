
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u32_t ;
struct TYPE_9__ {scalar_t__ span_ix; int flags; } ;
struct TYPE_10__ {scalar_t__ name; TYPE_1__ p_hdr; } ;
typedef TYPE_2__ spiffs_page_object_ix_header ;
typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
typedef int spiffs_block_ix ;
struct TYPE_11__ {int* work; } ;
typedef TYPE_3__ spiffs ;
typedef int s32_t ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_3__*,int,int ,int ,int,int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static s32_t FUNC_6(spiffs *VAR_10, spiffs_obj_id VAR_11, spiffs_block_ix VAR_12, int VAR_13,
    const void *VAR_14, void *VAR_15) {
  if (VAR_11 != VAR_2 && VAR_11 != VAR_1) {
    spiffs_obj_id VAR_16 = *((spiffs_obj_id*)VAR_15);
    const u8_t *VAR_17 = (const u8_t*)VAR_14;


    if (VAR_17 && (VAR_11 & VAR_3)) {
      spiffs_page_ix VAR_18 = FUNC_2(VAR_10, VAR_12, VAR_13);
      int VAR_19;
      spiffs_page_object_ix_header VAR_20;
      VAR_19 = FUNC_4(VAR_10, VAR_5 | VAR_4,
          0, FUNC_3(VAR_10, VAR_18), sizeof(spiffs_page_object_ix_header), (u8_t *)&VAR_20);
      FUNC_1(VAR_19);
      if (VAR_20.p_hdr.span_ix == 0 &&
          (VAR_20.p_hdr.flags & (VAR_6 | VAR_7 | VAR_8)) ==
              (VAR_6 | VAR_8)) {
        if (FUNC_5((const char*)VAR_14, (char*)VAR_20.name) == 0) {
          return VAR_0;
        }
      }
    }

    VAR_11 &= ~VAR_3;
    u32_t VAR_21 = (VAR_11-VAR_16) & 7;
    int VAR_22 = (VAR_11-VAR_16) >> 3;
    if (VAR_22 >= 0 && (u32_t)VAR_22 < FUNC_0(VAR_10)) {
      VAR_10->work[VAR_22] |= (1<<VAR_21);
    }
  }
  return VAR_9;
}
